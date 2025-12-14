/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_19 = (arr_3 [i_4]);
                                var_20 = ((var_6 ? -32756 : (!-679491336050537048)));
                                var_21 = var_18;
                                arr_13 [i_4] [4] [2] [i_0] = (arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_4 + 1]);
                            }
                        }
                    }
                    var_22 = var_13;

                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        var_23 = ((((((var_15 ? var_12 : var_17)) ? var_7 : 679491336050537037))));
                        arr_16 [i_0] [6] [i_0] [i_0] [i_2] [i_5] = (-1054854337 ? 65522 : (((-102 ? (!-21858) : (!var_5)))));
                        var_24 = -102;
                        var_25 ^= ((var_18 ? var_0 : 18446744073709551595));
                    }
                    var_26 = (12248610690698289566 ? ((7317843512835928227 ? (((564970316 ? var_5 : 1))) : ((var_18 ? 7317843512835928227 : var_1)))) : 6198133383011262050);
                    arr_17 [i_0] [i_1 - 1] [i_2] [i_1 - 1] = 679491336050537049;
                }
            }
        }
    }
    var_27 = ((9271303257924969963 ? 25349 : ((21857 ? -7317843512835928232 : -108179210922093522))));
    #pragma endscop
}
