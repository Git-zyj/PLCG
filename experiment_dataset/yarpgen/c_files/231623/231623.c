/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_10 *= ((min(((var_5 ? var_3 : (arr_1 [i_0] [i_0]))), (arr_1 [i_1] [i_0]))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_11 = (min(((min(var_7, (arr_8 [i_0] [i_1] [i_2] [i_3 + 2] [i_4] [i_2])))), ((-60 ? var_8 : (arr_13 [i_3 + 1] [i_1] [i_2] [i_3 + 1] [i_4])))));
                                arr_14 [i_3] [i_3] [i_1] = -30504;
                                arr_15 [i_0] [i_1] [i_1] [i_3] [i_4] [i_4] = (((((((((max(var_7, (arr_2 [i_0] [i_1])))) + 2147483647)) >> ((((max(19665, (arr_2 [i_0] [i_0])))) - 19662))))) || (arr_3 [i_0])));
                                var_12 &= (max(var_3, 7642236123063851314));
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = var_0;
    #pragma endscop
}
