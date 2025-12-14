/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((max((((var_5 * 12288) ? ((var_10 ? var_4 : var_7)) : (max(9205723641894825820, var_4)))), var_5)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_12 = (min(var_12, ((min((max((arr_12 [i_0] [i_4] [i_4 + 2] [i_4 - 3] [i_4] [i_4 - 3] [i_4 + 3]), (arr_11 [i_4] [10] [8] [i_4 + 2] [i_4]))), (arr_11 [i_4] [i_4 + 2] [i_4 + 2] [i_4 + 1] [i_4]))))));
                                var_13 = ((((((((arr_8 [i_4 - 3] [i_1] [i_1] [10]) ? 12282 : 17105))) ? ((max((arr_5 [i_4 + 2] [i_4 + 2] [i_4 - 1]), var_5))) : (min((arr_10 [i_3] [i_1] [8] [7]), var_10)))) <= 9205723641894825820));
                                var_14 = (min(var_14, (((-((79 ? 79 : (arr_5 [i_0] [i_0] [i_4 + 3]))))))));
                                var_15 = (min(var_15, ((min(6659727168156819448, 82)))));
                            }
                        }
                    }
                    var_16 = (min(var_16, (max((~var_10), ((max((arr_10 [i_2] [i_0] [i_1] [i_2]), (min(65535, 2677749852436590088)))))))));
                    var_17 = (min(var_17, 0));
                }
            }
        }
    }
    var_18 = (max(var_18, (((var_1 ? (((((max(13, var_10)) == ((max(6144, var_8))))))) : (((~1) ? ((59 ? var_1 : var_4)) : (!var_0))))))));
    var_19 = var_5;
    var_20 = (max(var_8, (((~((0 << (var_3 + 77997270))))))));
    #pragma endscop
}
