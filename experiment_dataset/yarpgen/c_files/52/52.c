/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(((((min(var_3, var_5)) < (((var_10 << (var_5 - 14961753580976474209))))))), (~var_2)));
    var_12 = (min(var_12, (-21545 > 21533)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 = (min(var_13, 55));

        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            var_14 = (max(var_14, 21545));
            var_15 = ((var_0 ? (((arr_3 [i_1] [1] [i_1 - 1]) - 153)) : (((arr_3 [i_1 + 1] [i_1 - 2] [i_1 - 2]) + (arr_3 [i_1 - 1] [i_1] [i_1 - 2])))));
            arr_5 [i_0] [i_1 + 1] = (~var_0);

            /* vectorizable */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 9;i_4 += 1)
                    {
                        {
                            arr_14 [i_4] [i_1] [8] [i_2] [i_3] [i_3] [i_3] = ((-110 ? 503610793 : -19));
                            var_16 = (max(var_16, (((!(!724422240))))));
                            var_17 = ((7950597688053096645 ? -11647 : 18446744073709551615));
                        }
                    }
                }
                var_18 = (max(var_18, (-11 / 59052)));
                var_19 = ((var_8 || (arr_7 [i_1 + 3] [i_1 + 3] [i_1 - 2] [i_1 + 3])));
                arr_15 [i_2] [i_1] [i_0] = 0;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_20 = (arr_9 [i_6 - 2] [i_1 + 3]);
                            var_21 ^= ((((var_3 ? var_2 : var_0)) % (arr_3 [i_6 - 2] [i_6 - 2] [i_1 - 2])));
                            arr_22 [i_6 - 2] [i_0] [i_1] [i_1] [i_0] [i_0] = ((!(var_4 / var_10)));
                        }
                    }
                }
            }
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        {
                            var_22 = -9421131182196292923;
                            var_23 = (((((((min(var_0, 46))) ? ((var_8 & (arr_9 [i_9] [i_9]))) : (((arr_8 [i_0] [i_0] [i_0]) ? -1 : 4898272841845357806))))) ? (max(var_5, (11701881401348716213 <= var_5))) : ((~(min(7981143938289613581, 18446742974197923840))))));
                            arr_30 [i_0] [i_0] [i_8] [i_8 - 1] [i_0] = 21572;
                        }
                    }
                }
                arr_31 [i_1] = (min(1, -17594));
                var_24 ^= max((max((-88 & -116), ((var_8 ? (arr_17 [i_1]) : 95)))), (((arr_7 [i_0] [i_1 + 2] [i_1 + 2] [i_1]) ? (!var_3) : var_4)));
            }
        }
    }
    #pragma endscop
}
