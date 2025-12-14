/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_5 ? var_10 : 96));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, (((((-((var_5 ? var_9 : (arr_2 [i_0]))))) != ((-(arr_7 [i_1] [i_1] [8] [8]))))))));
                    arr_9 [i_0] [i_1] [i_1] [i_0] = -var_0;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_13 = min((min((arr_14 [i_0] [i_3] [i_0]), (arr_8 [i_1] [i_2 + 1] [i_3] [i_4]))), var_9);
                                var_14 += (arr_7 [i_0] [i_0] [i_2 + 1] [i_1]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
