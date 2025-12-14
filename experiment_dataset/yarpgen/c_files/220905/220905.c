/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_10 -= (~((~(arr_2 [i_0 - 1]))));
                                var_11 -= (((((arr_3 [16]) ? (arr_12 [i_0 + 2] [i_1] [i_1] [i_3] [i_0 - 1] [i_0 - 1]) : (~4398046511104)))) ? (min((((18446739675663040484 ? 4 : (arr_3 [i_0])))), ((1 ? 4398046511131 : (arr_0 [i_1]))))) : ((((var_5 > (arr_9 [i_0] [i_0 - 1] [i_2] [i_4] [i_4]))))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] [12] [i_2] = (max(1, -32750));
                    var_12 -= (arr_4 [i_0 - 1]);
                }
            }
        }
    }
    var_13 = (59 * 6378087536873092377);
    #pragma endscop
}
