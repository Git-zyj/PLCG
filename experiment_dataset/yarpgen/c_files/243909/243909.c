/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((4923 != var_3) <= ((max(var_10, (min(94, 107)))))));

    for (int i_0 = 2; i_0 < 20;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_12 = 29;
            var_13 = 117;
        }
        arr_4 [i_0] = (max(((((arr_2 [i_0 + 3] [12] [i_0 - 1]) ? (arr_2 [i_0 - 1] [9] [i_0 + 1]) : (arr_2 [i_0 + 2] [i_0 - 1] [i_0 - 1])))), ((((max(2374829631, 88))) - 0))));
        var_14 = var_5;
    }
    for (int i_2 = 2; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_15 |= (max((((arr_1 [i_2 + 2]) > 1920137665)), (var_5 <= 16383)));

        /* vectorizable */
        for (int i_3 = 2; i_3 < 21;i_3 += 1)
        {
            var_16 &= -4889674072496460559;

            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                arr_13 [i_2] [i_2] [i_3] [i_4] = ((((var_2 ? (arr_8 [i_2]) : 1742224838)) % (((var_10 ? 1 : (arr_9 [i_3] [i_4]))))));
                var_17 |= ((var_0 | (arr_0 [i_2 + 2])));
            }
        }
        arr_14 [i_2] [i_2 + 3] = (((((-53 ? -24118 : 0))) ? (var_3 - var_8) : (max((34359738367 + 1), (arr_3 [i_2])))));
        var_18 = max((max(((max(var_9, var_4))), -27303)), ((max((arr_2 [i_2] [i_2 + 3] [i_2 + 3]), (27290 == var_6)))));
    }
    var_19 = var_9;
    #pragma endscop
}
