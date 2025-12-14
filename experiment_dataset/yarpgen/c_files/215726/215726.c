/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_7;
    var_21 = max((((!var_15) ? var_5 : var_13)), 0);
    var_22 = ((~(((!(~var_11))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_23 = (((((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? 4 : (arr_1 [i_0]));
                var_24 -= 2157456205;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_25 = (max(var_25, 2321459277));
                            var_26 ^= arr_6 [i_0] [i_0] [i_0] [i_0];
                            var_27 = var_6;
                        }
                    }
                }
                var_28 = (max(var_28, 2321459277));
            }
        }
    }
    var_29 = (!var_17);
    #pragma endscop
}
