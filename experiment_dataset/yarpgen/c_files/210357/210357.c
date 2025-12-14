/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_14 ^= (!371603965954072799);
                                arr_14 [i_4] = ((-(arr_6 [i_0 + 1])));
                                var_15 *= (arr_12 [i_4] [i_1 + 1]);
                                var_16 &= (arr_10 [i_4 - 1] [22] [i_4 - 2] [i_0 - 1] [i_4 - 2] [i_0 - 1]);
                            }
                        }
                    }
                    var_17 *= ((max((~371603965954072812), (((371603965954072799 ? 1302396196 : 2992571100))))));
                }
            }
        }
    }
    var_18 += (((((var_2 ? 26010 : ((4040882824 ? var_9 : var_10))))) ? (~215) : ((3193742156 ? -10689066978569040117 : (((371603965954072799 ? var_9 : var_2)))))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            {
                var_19 *= ((min(3193742151, (arr_9 [i_5] [i_5] [18] [i_5] [23] [16]))));
                var_20 = (((((((arr_1 [i_5] [17]) ? -19274 : 405789465))) ? (arr_9 [i_5] [i_5] [i_5] [19] [i_6] [i_6]) : -1)));
            }
        }
    }
    #pragma endscop
}
