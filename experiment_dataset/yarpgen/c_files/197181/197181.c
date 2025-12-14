/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_14 = (max((max(119, 76)), ((min((arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4] [i_4]), (arr_12 [i_0] [i_0] [i_4] [i_0] [i_0] [i_4] [i_4]))))));
                                var_15 = (min(var_15, 20614));
                            }
                        }
                    }
                }
                var_16 += 32752;
                var_17 = ((((((max(3518457106958830118, 12)) >> (3520687891 - 3520687865)))) ? ((~(~-6698966420602155084))) : 64758));
                arr_15 [i_0] = ((~(arr_5 [i_1 + 1] [i_1 - 1])));
            }
        }
    }
    var_18 = (min(var_18, ((max(var_5, (((((var_2 ? -1473220413 : 57))) ? ((var_1 ? 360811327 : var_11)) : (((min(var_5, 1)))))))))));
    #pragma endscop
}
