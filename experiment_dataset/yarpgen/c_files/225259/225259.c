/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_7, (((var_17 ^ 18) ? (~var_7) : (~13)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, (~-7)));
                    var_20 = var_15;
                    var_21 = ((((min(var_16, (arr_0 [i_0 - 1])))) - ((min(-5, (arr_0 [i_0 + 1]))))));
                    var_22 = (max(var_22, 1));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] = (((max(0, (!0))) ? (((arr_7 [i_1]) ? (arr_7 [i_1]) : 17)) : 1));
                                arr_14 [i_0] [i_1] [i_0] [i_1] = var_7;
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (2438830091 * var_2);
    var_24 = 3;
    #pragma endscop
}
