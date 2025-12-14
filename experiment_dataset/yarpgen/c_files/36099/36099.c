/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36099
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
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] [i_2] [i_1] [i_1] [i_0] = ((9509171367226319313 ? 1099511627768 : 2));
                            var_19 *= var_14;
                            arr_13 [i_0] [i_1] [i_2] [i_3] = (((((var_8 ? ((max(8, 32762))) : (((arr_8 [i_1] [i_2] [i_3]) ? var_9 : (arr_9 [i_0] [i_1] [i_2] [i_3])))))) || 22));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            arr_20 [i_4] = var_14;
                            arr_21 [i_4] [i_1] [i_5] [i_4] [i_1] [i_5] = (min((arr_7 [i_4 + 3] [i_4 + 4] [i_4 - 1] [i_4 - 1]), -1792352475));
                        }
                    }
                }
            }
        }
    }
    var_20 = (((((max(-155553505, 4)))) ? (((61 ? var_6 : var_8))) : 15470509891284853783));
    #pragma endscop
}
