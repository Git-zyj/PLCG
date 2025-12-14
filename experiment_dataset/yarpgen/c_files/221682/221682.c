/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = var_7;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_18 = var_17;
                            var_19 = ((((arr_1 [i_2 + 1]) >= (arr_6 [i_2 + 1] [i_1] [i_2 + 1] [i_2 + 1]))));
                        }
                    }
                }
                var_20 = (max(var_20, ((max(((((((arr_4 [i_0] [i_0]) & (arr_8 [i_0] [i_0] [i_0] [i_1])))) ? var_5 : ((min(var_10, var_8))))), ((max(var_1, (arr_0 [i_0])))))))));
                var_21 |= 2134299036832321179;
                var_22 = ((-(((arr_4 [i_0] [i_0]) ? (arr_4 [i_1] [i_0]) : (arr_4 [i_0] [i_0])))));
            }
        }
    }
    var_23 ^= ((!(!var_13)));
    var_24 = ((-((((var_13 ? var_3 : -134373882814035822)) / ((var_14 ? -543186257 : var_14))))));
    #pragma endscop
}
