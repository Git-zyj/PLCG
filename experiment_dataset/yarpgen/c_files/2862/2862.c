/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_4] [20] [i_2] |= ((127 ? 584235745 : 52696307));
                                var_12 = (max((max(2258337170, (max(4242270988, -5397031596021942486)))), ((max(var_4, (arr_8 [i_0] [i_1 - 1] [i_1 + 3] [i_1 + 1]))))));
                                var_13 = (min((((-1138204715 - var_6) / (((arr_1 [i_4] [i_0]) % 4242270989)))), ((-((3968846589 ? 326120689 : var_4))))));
                                var_14 = ((((max((((arr_4 [i_0] [i_0] [i_3]) | var_10)), ((max(58530, (arr_6 [i_0] [i_0]))))))) ^ (((~var_1) ? (4242270976 & 87) : ((var_8 ? var_9 : (arr_2 [i_0])))))));
                            }
                        }
                    }
                }
                arr_15 [i_0] [5] [i_0] = ((!2) < -var_7);
            }
        }
    }
    var_15 = (max(var_15, ((max(326120685, (~1202940395))))));
    var_16 &= (max(96, 893856571228170072));
    #pragma endscop
}
