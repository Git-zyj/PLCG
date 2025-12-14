/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (max((((~((max(-1, 0)))))), (max(((min(var_5, var_7))), (max(var_5, 8148860318944305523))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_13 -= ((-(max(((-(arr_0 [i_0] [i_1]))), ((max((arr_2 [i_1]), (arr_2 [i_0 - 1]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_14 = (max(var_14, ((max(((max((~var_7), ((~(arr_5 [i_0] [8])))))), (min((max((arr_1 [i_0] [i_1]), var_4)), ((max((arr_1 [i_0] [i_1]), (arr_10 [i_0 + 1] [i_0 + 1] [i_0] [i_0])))))))))));
                            var_15 = max((max(((max(-1956022335, 42666))), (~-2214822262423271608))), (--5418578470768536729));
                        }
                    }
                }
            }
        }
    }
    var_16 = (max(((max((max(65535, var_1)), (min(1, var_1))))), (max((min(4677419075080589326, var_5)), ((max(var_11, var_9)))))));
    var_17 = (max(((-(max(var_11, var_8)))), (~var_9)));
    #pragma endscop
}
