/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((~(((((var_10 ? 255 : var_8))) ? var_4 : 3))))));
                var_16 = (((((-((2305843009213693951 ? var_7 : (arr_0 [6] [i_1])))))) ? ((((((var_13 && (arr_2 [i_0 - 2] [i_0 - 2]))))) - 16140901064495857664)) : (((var_0 ? (!8576124652478296742) : 1)))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_17 = var_8;
                            arr_9 [i_3] [i_1] = (max(2305843009213693951, (arr_3 [i_0 - 3] [i_0 + 4])));
                        }
                    }
                }
                var_18 = ((!(arr_2 [i_0 + 3] [i_0 - 4])));
            }
        }
    }
    var_19 = (!(((((2305843009213693951 ? var_9 : 39006))) && var_13)));
    #pragma endscop
}
