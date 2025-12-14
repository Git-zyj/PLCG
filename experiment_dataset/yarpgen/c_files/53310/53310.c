/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((0 ? 112 : 156));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, (((-(((((11574670065698263125 ? 61785 : 119))) ? -109 : 128)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 -= (arr_5 [i_3]);
                                arr_14 [i_2] [i_2] [i_1] [i_0] = (arr_8 [i_2]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
