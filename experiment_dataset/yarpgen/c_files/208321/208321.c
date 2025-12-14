/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_0] [0] [i_1] [i_0] = ((var_14 ? (!var_10) : ((~(!var_10)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_21 = (min(var_21, 1));
                                var_22 = ((((min(var_11, (arr_0 [i_2 + 2] [i_0 + 2])))) ? (((((!(arr_10 [i_4]))) ? 1 : var_2))) : (((((var_15 | (arr_7 [16] [i_3])))) ? (((var_11 ? var_2 : 1843446659))) : ((1 ? var_16 : var_8))))));
                            }
                        }
                    }
                    arr_16 [i_1] [i_0] = var_6;
                    var_23 &= (((!(arr_3 [i_2 + 4]))));
                }
            }
        }
    }
    var_24 = var_11;
    var_25 *= (min((((0 | 13321) | ((var_11 ? var_2 : 52188)))), var_17));
    #pragma endscop
}
