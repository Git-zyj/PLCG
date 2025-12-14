/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_0 % ((var_2 % (min(16, 3))))));
    var_16 = (1 != 33);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 = ((255 ? -5 : 18446744073709551585));
                    var_18 = ((24576 % (((arr_0 [i_0 + 1]) ? (arr_0 [i_0 - 1]) : 18446744073709551601))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_15 [i_3] = ((((var_10 ? (arr_3 [6]) : (arr_14 [i_0] [i_1] [i_2] [i_3] [i_4])))));
                                arr_16 [i_3] [i_1] [i_2] [i_3] [i_1] = 18446744073709551576;
                                arr_17 [i_0 - 1] [i_3] = (((((arr_9 [i_1] [i_3 + 1] [i_3] [i_3]) ? (arr_11 [i_0] [i_3 + 1] [6] [0]) : 18446744073709551600)) * ((((arr_11 [i_2] [i_3 - 1] [i_4] [i_2]) / (arr_11 [i_0 - 1] [i_3 - 1] [i_3] [i_3]))))));
                                var_19 = ((((min((max(0, (arr_2 [i_3]))), (((1 != (arr_5 [i_1]))))))) ? -1 : var_12));
                            }
                        }
                    }
                    var_20 = ((var_12 ? (arr_9 [i_0] [i_1] [i_1] [i_1]) : (3 * 49152)));
                }
            }
        }
    }
    var_21 = ((((var_13 != var_11) ? 0 : (var_7 + 8921359423002508588))) != -24589);
    #pragma endscop
}
