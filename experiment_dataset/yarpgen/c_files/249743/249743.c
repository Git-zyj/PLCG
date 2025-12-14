/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (min(-1825875878, (arr_2 [i_1])))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_21 = ((((-(4294967293 >= -1825875885)))) - ((((!(arr_0 [i_4 + 1] [i_2]))) ? (!7719374761359734698) : (arr_9 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1]))));
                                arr_14 [i_0] = (~0);
                                var_22 ^= var_12;
                            }
                        }
                    }
                }
                var_23 = (max(var_23, ((((arr_0 [i_0 - 1] [i_1]) ? var_18 : (((~var_18) ? (((var_5 ? var_13 : (arr_12 [i_0] [i_0 - 1] [i_1] [11] [i_1] [i_1])))) : (((arr_10 [i_1] [10] [10]) ? var_18 : var_17)))))))));
            }
        }
    }
    var_24 = var_12;
    #pragma endscop
}
