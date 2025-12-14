/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_8 ? var_4 : var_4))) == (((((var_4 ? var_6 : (-2147483647 - 1))) == (var_2 > var_0))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] [i_1] [i_0] = (((((((min((arr_0 [i_0] [i_2]), (arr_7 [i_0] [i_1] [i_2] [i_2])))) ? -var_6 : (((arr_7 [i_0] [i_1] [i_0] [i_2]) ? var_0 : 117440512))))) ? 2147483632 : ((min((arr_3 [i_0] [i_1]), 813401250)))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_11 = ((arr_1 [i_1]) / ((((1844309836 ? 1844309846 : -64)))));
                                var_12 = (min(((-(arr_4 [i_4 - 2]))), (arr_9 [i_0] [i_1])));
                                var_13 = min((((arr_1 [i_3 - 1]) ^ 6916101605115168696)), ((~((var_4 >> (83 - 31))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = ((((((!490137290) < var_3))) * var_3));
    #pragma endscop
}
