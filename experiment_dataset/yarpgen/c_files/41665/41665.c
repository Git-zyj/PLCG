/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((min((min(var_4, var_8)), (var_15 != var_7))) * var_2));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_20 |= (((arr_0 [9] [i_1]) ? var_9 : ((~(((!(arr_4 [i_0] [i_0] [4] [i_2]))))))));
                    var_21 += 65535;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_22 = (((arr_8 [8] [i_1] [i_2] [i_3] [i_4]) >= var_15));
                                arr_12 [11] [12] [i_2] [i_2] [4] = (((((max(76, var_9)))) + (min(var_0, (arr_9 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))));
                            }
                        }
                    }
                    var_23 = (min(((min(var_7, ((var_7 - (arr_7 [i_2] [i_2] [i_1] [i_1] [i_0] [4])))))), (((arr_11 [i_0] [11] [i_2] [15] [8]) ? 1030 : ((var_0 - (arr_9 [i_0] [i_0] [i_0] [9] [i_0] [i_0])))))));
                }
            }
        }
    }
    #pragma endscop
}
