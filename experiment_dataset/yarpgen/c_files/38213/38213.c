/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= var_0;
    var_14 = (max((~6393), ((var_11 ? (max(var_4, var_11)) : (((((-2147483647 - 1) >= var_8))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_15 = (326256467 | var_8);
                            var_16 = -21555;
                            var_17 ^= (max((((!(!-21528)))), (max((arr_2 [i_0] [i_1] [i_3]), ((((arr_4 [i_0] [i_1] [i_2]) || var_9)))))));
                        }
                    }
                }
                arr_8 [i_0] [i_1] [i_0] |= ((-(min(255, 21569))));
                var_18 = (((!var_10) && (((-2147483623 ? 21554 : 34409)))));
            }
        }
    }
    #pragma endscop
}
