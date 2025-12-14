/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            arr_6 [i_1] = (arr_2 [i_0] [i_0]);
            var_12 |= (((arr_3 [i_0] [i_1]) ? -45 : (((arr_5 [i_1]) ? (arr_0 [i_0]) : 6197))));
        }
        for (int i_2 = 4; i_2 < 12;i_2 += 1) /* same iter space */
        {
            var_13 = ((var_3 ? (((min((arr_3 [i_0 + 2] [i_2 - 4]), ((min(-99, var_6))))))) : (arr_8 [i_0 - 1] [i_2 + 1])));
            var_14 = ((((((~56) ? -99 : (var_10 > var_7)))) > ((~((var_5 ? (arr_4 [i_0]) : 0))))));
        }
        for (int i_3 = 4; i_3 < 12;i_3 += 1) /* same iter space */
        {
            var_15 = 51732;
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_16 *= (arr_18 [i_0] [i_3 + 3] [i_4] [i_5] [i_4]);
                            var_17 = ((~(-var_0 + -87)));
                            var_18 |= (202 >> ((((((arr_7 [i_5]) ? var_5 : 69))) ? 0 : 2)));
                        }
                    }
                }
            }
        }
        var_19 *= (((arr_18 [i_0] [i_0 + 2] [i_0 - 1] [i_0] [i_0]) ? (((-(arr_18 [i_0] [i_0] [i_0] [i_0] [i_0])))) : (arr_0 [i_0])));
        var_20 += (max(((var_2 ? var_9 : (arr_0 [i_0 - 1]))), ((((arr_0 [i_0 - 1]) > (arr_0 [i_0 - 1]))))));
        var_21 = -15272;
    }
    for (int i_7 = 4; i_7 < 11;i_7 += 1)
    {
        var_22 = ((~(((((1883751410 ? 4180309931505534835 : var_6))) ? (~var_10) : ((((arr_4 [i_7]) >= var_1)))))));
        arr_22 [i_7] = ((~((~(arr_14 [i_7] [i_7 - 1] [i_7 - 4])))));
    }
    var_23 = (-9223372036854775807 - 1);
    var_24 = (~((~(var_8 < var_1))));
    var_25 = (min(((((var_6 % var_10) != 65535))), (max(((var_3 ? 1168448254 : var_11)), var_10))));
    var_26 = (var_6 && 89);
    #pragma endscop
}
