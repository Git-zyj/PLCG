/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 = ((+(((max((arr_6 [i_1] [i_2] [i_1] [i_1]), (arr_6 [i_1] [i_1] [i_2] [15]))) ? -1301823524 : (min(-3435356032751563509, 8806951945265361143))))));
                    var_16 = (min(((min((arr_1 [i_1] [i_1]), ((min(var_0, var_14)))))), (((arr_6 [i_1] [i_1] [i_2] [i_1]) >> (arr_6 [i_1] [i_1] [i_1] [i_1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_17 = ((-3435356032751563509 < (((((arr_4 [i_1]) < var_13))))));
                                var_18 = min(((((arr_7 [i_0] [i_1] [i_4 - 3] [15]) / (arr_7 [i_0] [i_4] [i_4 - 1] [19])))), (max((((var_6 ? (arr_10 [i_0] [i_1] [i_2] [i_3] [i_1]) : var_9))), var_3)));
                                var_19 = ((172 ? ((((((arr_6 [i_1] [i_1] [i_1] [i_1]) / 12))) ? var_6 : (arr_4 [i_1]))) : var_9));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = 4096;
    #pragma endscop
}
