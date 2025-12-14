/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, (((14 ? (~-1544309132) : ((min((arr_12 [i_0]), (((!(arr_2 [i_3] [i_3]))))))))))));
                                var_20 = ((((max((max((arr_14 [8] [i_1] [i_1] [21] [i_0] [i_0]), var_1)), ((min((arr_13 [i_3] [i_2 - 1]), (arr_9 [5] [i_2 - 1] [i_2 - 1]))))))) ? (1 >= 65535) : (min(-1328212465, ((min(var_6, var_9)))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_21 *= var_5;
                                arr_26 [i_5] = ((((((!(arr_7 [i_5 - 1] [i_6] [i_1]))))) <= ((((var_6 || (arr_9 [i_5] [1] [12]))) ? (arr_21 [i_5 - 1] [i_1] [i_1] [21]) : var_8))));
                            }
                        }
                    }
                }
                var_22 = (((((arr_11 [i_0] [4] [i_0]) ? (arr_11 [i_0] [1] [i_1]) : (arr_11 [i_0] [1] [i_1]))) ^ (max(-15, ((min(var_15, (arr_18 [i_0] [i_1]))))))));
            }
        }
    }
    var_23 = var_16;
    var_24 = (max((((12 ? 107 : 28386))), var_1));
    #pragma endscop
}
