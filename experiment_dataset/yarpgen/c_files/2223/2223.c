/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_19 += (max(((((var_17 | var_3) | ((10 ? (arr_8 [i_1] [i_1] [i_2 - 1] [i_2 - 1]) : var_11))))), (0 / 31744)));
                            var_20 *= (min(((((min((arr_7 [i_0] [i_1] [i_2 - 2]), (arr_1 [i_0])))) ? (max(var_1, (arr_1 [i_0 + 1]))) : (arr_2 [i_1] [i_3] [i_3 + 2]))), (arr_0 [i_3])));
                            var_21 = ((((!(arr_5 [i_1] [i_2 + 2] [i_3 + 1]))) ? var_15 : ((var_8 ? ((17857371001665177501 ? (arr_1 [i_2]) : 17791999572458316437)) : (((((arr_1 [i_0]) && (arr_3 [i_2])))))))));
                        }
                    }
                }
                var_22 &= 589373072044374124;
            }
        }
    }
    var_23 += (min((((var_6 ? var_13 : (var_9 != var_7)))), ((var_3 ? var_5 : (!73)))));
    #pragma endscop
}
