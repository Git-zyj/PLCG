/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = (min(var_14, (4177920 && 4177893)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_15 = ((((var_3 ? (42985 | var_6) : (((-(arr_7 [i_3] [i_0] [i_0])))))) >= (((-var_11 ? var_3 : ((max(11126, 0))))))));
                            arr_11 [i_0] [2] [1] [i_0] [i_2] [i_3] = var_10;
                            var_16 = 62914560;
                            arr_12 [i_0] [i_0] = (arr_3 [i_0 - 1] [i_0]);
                            var_17 *= ((var_8 ? ((min(var_12, ((max(-74, (arr_6 [0] [i_1] [20] [i_1]))))))) : ((((!var_10) && ((min(69, -8779617010218410947))))))));
                        }
                    }
                }
                var_18 = (min((min((max(62914567, 54704)), var_10)), (((!(((-127 - 1) || 29511)))))));
            }
        }
    }
    var_19 = ((-((~(var_1 * var_9)))));
    var_20 += (var_13 * var_12);
    #pragma endscop
}
