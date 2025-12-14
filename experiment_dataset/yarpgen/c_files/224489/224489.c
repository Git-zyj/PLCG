/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_12 = (min(1088734945, (((-(min(var_5, var_11)))))));
                                var_13 = ((+((-var_5 ? (arr_4 [i_0] [i_0]) : ((max(-1, var_5)))))));
                            }
                        }
                    }
                    var_14 |= (arr_11 [i_0] [i_0 + 1] [i_1 + 1] [1] [i_1] [i_2]);
                    var_15 = (min(var_15, (-86 / var_10)));
                }
            }
        }
    }
    var_16 -= (~((((var_4 ? 1790387270 : -3454)) - -3453)));
    #pragma endscop
}
