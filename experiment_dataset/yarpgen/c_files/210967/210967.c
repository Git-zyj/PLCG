/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = (max(0, 16551159878727215873));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_7 [i_0] = (max(9223372036854775807, 1895584194982335745));

            for (int i_2 = 2; i_2 < 23;i_2 += 1) /* same iter space */
            {
                arr_12 [i_2] = 1895584194982335765;
                var_13 = (!var_8);
            }
            for (int i_3 = 2; i_3 < 23;i_3 += 1) /* same iter space */
            {
                arr_15 [i_0] [i_1] [9] = (max((~var_4), -1));
                arr_16 [i_3] [i_0] [i_1] [i_0] = (min((~122880), ((((min(var_0, var_3)) == (min(var_0, var_0)))))));
                var_14 = (((((-var_0 + (~115)))) ? (((+((((arr_11 [5] [i_0] [i_0]) <= 16551159878727215883)))))) : ((((min(-13189, var_4))) ? (min(var_2, 474032560)) : 10990671894282235054))));
            }
            for (int i_4 = 2; i_4 < 23;i_4 += 1) /* same iter space */
            {
                var_15 = 166;
                arr_19 [i_4] [1] [i_4] = (min(((((arr_3 [i_4 + 1] [i_4 + 1]) || ((min(var_9, 17)))))), 30898));
                var_16 = ((((min((max(var_0, var_1)), (-63 + var_3)))) ^ (16551159878727215873 & 31)));
                var_17 = (max(var_17, (((((min((arr_11 [i_4] [21] [i_4 + 1]), (arr_11 [i_0] [i_0] [i_4 - 2])))) ? -13158 : var_3)))));
            }
            var_18 = ((~((max(var_9, (min(var_9, var_7)))))));
            var_19 = ((((min(((min(1, var_11))), var_10))) & (min(var_4, (max(-122882, 255))))));
            arr_20 [i_1] [i_0] = ((((((-1 ? -1 : 160))) ? ((var_1 ? var_10 : 255)) : var_9)));
        }
        arr_21 [i_0] [1] = -1;
    }
    var_20 = ((var_5 ? var_10 : var_0));
    var_21 = (((min((var_8 ^ 18446744073709551615), (var_6 || var_1))) != (32767 || 1)));
    #pragma endscop
}
