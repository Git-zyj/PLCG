/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_17 = ((-((((arr_10 [i_0 + 1] [i_2] [i_2] [i_2 + 3]) < (max(var_8, (arr_9 [i_0 + 1] [i_0 + 1] [i_1] [i_2] [i_3]))))))));
                            arr_12 [i_0] [i_1] [i_1] [i_2] [i_3] = ((-var_7 % ((max((var_1 || 869821735), 869821735)))));
                            arr_13 [i_0] [i_1] [i_2] [i_0] = ((var_5 != (min(((var_0 - (arr_3 [i_3] [21] [1]))), ((max(-13802, 1)))))));
                        }
                    }
                }
                arr_14 [i_0] [i_0 + 1] [i_0] |= ((-((((((arr_6 [17] [i_1] [i_1] [i_1]) && (arr_1 [i_1] [i_1])))) + var_1))));
                var_18 = (arr_1 [i_0 + 1] [i_0 + 1]);
            }
        }
    }
    var_19 = -var_11;
    var_20 = ((((!((min(var_8, 2436263749112123089))))) ? (min((-9223372036854775807 - 1), (((var_9 ? var_2 : var_0))))) : var_9));
    #pragma endscop
}
