/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = ((((((((var_8 ? (arr_1 [i_0]) : 5127127610510584816)) + (min((arr_1 [i_0]), (arr_3 [i_0]))))) + 9223372036854775807)) >> (var_4 - 9156431681499355777)));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    var_13 = var_6;
                    var_14 = ((var_5 ? var_0 : (119 % var_4)));
                    var_15 = 53497;
                    arr_11 [i_0] [i_0] [i_2] [i_2] = (((var_4 > -32767) ? var_4 : 8818531609133913195));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_16 = 32767;
                    var_17 = (((((((arr_7 [i_1] [i_0]) ? var_4 : 7)) >> ((((31433 ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : var_5)) - 2591830919)))) >> (32763 - 32737)));
                    arr_14 [i_0] [i_0] [i_1] [i_3] = var_1;
                    var_18 = (((64915 >= 44271) ? var_5 : ((max((!65), (min(0, 127)))))));
                }
                var_19 = (min(var_19, ((((((((-719 + 2147483647) >> (var_2 - 190))))) ? 1394180102 : 1254514733)))));
                var_20 += 718;
            }
        }
    }
    var_21 *= 254;
    #pragma endscop
}
