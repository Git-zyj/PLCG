/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    var_11 = ((-(var_4 * 65535)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_12 = max((0 > 1), (!-61));
                arr_5 [i_0] [i_0] = ((~((1168701430039670645 << (((arr_4 [i_0]) - 116))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_13 = ((+((((arr_3 [15] [15] [15]) ? -23889 : -23889)))));
                                var_14 = -1;
                                var_15 = ((max((arr_2 [i_4 - 1]), -var_8)) == -1384278296);
                                var_16 = (((((arr_0 [i_3]) > ((-1117016282 ? var_1 : (arr_9 [i_0] [i_0] [4] [1]))))) ? (((((((!(arr_3 [i_0] [i_0] [i_0]))))) <= ((1 ? var_5 : var_6))))) : (((!((var_6 || (arr_2 [i_0]))))))));
                                arr_13 [16] [16] [i_2] [5] [i_2] [16] [i_2] = (arr_8 [i_0] [i_0] [1]);
                            }
                        }
                    }
                }
                arr_14 [i_0] = ((((max(((max(12084, 0))), ((-(arr_10 [i_0] [i_0] [7] [1] [i_1] [i_1])))))) ? ((((((arr_12 [i_0] [i_1] [2] [i_1] [2]) ? var_9 : 866719740)) >= (arr_6 [i_1] [i_0] [4] [12])))) : (arr_4 [i_0])));
            }
        }
    }
    #pragma endscop
}
