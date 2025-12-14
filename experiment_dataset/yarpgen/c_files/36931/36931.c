/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_18 = ((var_1 / var_3) / var_7);
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_1] = (((((arr_9 [i_4 - 1] [i_4 - 1] [i_4 - 1]) ? 7531337204862364803 : 7531337204862364801))) ? ((115 ? -32753 : -11297)) : (!var_3));
                            }
                        }
                    }
                    var_19 = ((!(((3253294488229140147 ? 32397 : 16719637122523312514)))));
                }
            }
        }
    }
    var_20 = var_10;
    var_21 = ((var_8 ? -1727106951186239080 : (((max(var_0, 1))))));
    #pragma endscop
}
