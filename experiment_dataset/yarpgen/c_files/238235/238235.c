/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-(((var_3 + 2147483647) >> (((~var_6) + 2211))))));
    var_16 = (!(~var_10));
    var_17 = var_1;
    var_18 = (7759745491428689927 + 26);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_19 = (arr_2 [i_0] [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_9 [3] [5] [i_2] [i_2] = (max((max((max((arr_5 [i_0] [i_1] [i_3]), var_4)), (arr_6 [i_1] [13] [i_3]))), var_8));
                            arr_10 [19] [i_2] [i_3] = (-100 != 16584424661084824194);
                            var_20 = (max(var_20, (-6207357079008701602 + 41513)));
                            var_21 = (((arr_0 [i_3 + 1]) / ((~((((arr_4 [i_3] [i_0]) > var_1)))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
