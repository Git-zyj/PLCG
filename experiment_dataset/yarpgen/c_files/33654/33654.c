/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((((min((arr_1 [i_0]), (((arr_5 [i_0] [i_0] [i_0]) / (arr_3 [i_1] [i_0])))))) ? ((min(332111808, (max(0, 3962855488))))) : ((-(var_4 ^ var_8)))));
                var_10 = (max((min((arr_3 [i_0] [i_0]), var_0)), ((((arr_3 [i_1] [i_0]) || var_8)))));
                arr_7 [i_1] [14] = ((47130 ? 7805512556138489146 : 65530));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_11 -= ((!(arr_8 [i_0] [i_1] [i_0] [i_2])));
                    var_12 = (((arr_3 [i_0] [i_1]) % var_3));
                    var_13 = var_5;
                    var_14 &= var_6;
                    arr_10 [i_0] [i_0] [i_2] = ((!var_9) ? (arr_4 [i_1] [i_2]) : (-1437935570 & 23));
                }

                for (int i_3 = 2; i_3 < 14;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_15 += var_0;
                                var_16 = (min(var_16, ((((min(((var_2 ? var_6 : var_5)), (arr_14 [i_0] [i_3 + 1] [i_3 - 1] [i_5 - 2] [i_5 - 2]))) != (((arr_5 [i_3 - 1] [i_3] [i_3]) ? ((max(var_5, var_7))) : (((arr_17 [i_5] [i_4] [9] [i_1] [14]) ^ var_0)))))))));
                                var_17 = (!var_5);
                            }
                        }
                    }
                    arr_18 [i_3] = (~var_0);
                    arr_19 [i_0] [i_1] [i_3 - 2] [i_1] = ((-(332111808 / -8397288612844737858)));
                }
                /* vectorizable */
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    var_18 = ((-((var_9 * (arr_13 [i_6 - 1] [i_6] [1] [i_1] [1])))));
                    var_19 = ((var_9 ? (arr_16 [i_6] [i_1] [i_1] [i_0] [i_0] [i_0]) : ((var_7 ? var_4 : var_9))));
                    var_20 += var_4;
                }
            }
        }
    }
    var_21 = ((~(1 | 23501)));
    var_22 = var_9;
    #pragma endscop
}
