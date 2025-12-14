/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;
    var_14 = ((!(((-5310335453314159454 ? -32764 : -5310335453314159468)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 20;i_4 += 1)
                            {
                                arr_14 [i_0] [i_0] [6] [i_3] [i_0] = ((3404054669 ? (max(-32760, -5310335453314159482)) : ((max(1, 1572512049)))));
                                var_15 = var_3;
                                arr_15 [i_0] [i_0] [i_0] [i_0] [14] [i_0] [i_0] = (arr_0 [i_0]);
                            }
                            var_16 = ((!(((~(var_0 != var_8))))));
                            arr_16 [i_0] [i_0] [16] [i_0] = 981943917160099156;
                        }
                    }
                }
                var_17 = (max((!268435455), var_1));
            }
        }
    }
    var_18 = ((((max((461338469 + 7639983037128482410), -32746))) ? ((1572512053 ? -5310335453314159468 : 23)) : var_9));
    #pragma endscop
}
