/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    var_11 = ((+(max((min((arr_7 [i_0] [i_1] [6]), var_6)), ((max(var_0, (arr_4 [18]))))))));
                    var_12 = var_2;
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            {
                                arr_15 [i_5] [2] [i_3] [i_1] [2] [i_0] &= (min((((((arr_1 [10]) * (arr_5 [i_0] [i_1] [i_5]))) * (arr_10 [i_4 + 1] [14] [i_4] [1]))), (((-(arr_14 [i_3] [i_4] [i_4 + 1] [i_4 + 1] [i_5]))))));
                                var_13 = ((820315050 ? 44 : 3474652246));
                                var_14 = ((((((max((arr_8 [i_3]), var_5)) << (((max(-8741, 820315074)) - 4294958502))))) ? (((max((arr_12 [i_4 + 1] [13] [i_4 + 1] [i_4 + 1] [i_4 + 1]), (arr_12 [i_4 + 1] [i_4] [i_4 + 1] [i_4] [i_4 + 1]))))) : (arr_9 [i_0] [i_0])));
                            }
                        }
                    }
                    arr_16 [i_3] [i_1] [i_3] = var_2;
                }
                arr_17 [i_0] = (((-(arr_12 [i_0] [2] [i_0] [2] [i_1]))));
            }
        }
    }
    var_15 = (max((var_6 / var_5), 15360));
    #pragma endscop
}
