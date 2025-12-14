/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (1 < 1);
    var_16 = ((((((((-1015 ? var_8 : 95))) ? var_2 : (!var_4)))) ? var_2 : ((12334916958182370416 ? 12334916958182370423 : 1502469545))));
    var_17 = var_7;
    var_18 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_19 ^= (max((min(var_5, (arr_0 [i_0 - 1]))), ((((((!(arr_4 [i_0] [i_1])))) <= var_14)))));
                var_20 = (min(var_20, (arr_3 [i_0] [i_1])));
                var_21 ^= (arr_4 [i_1] [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_22 = (arr_0 [i_1]);
                            var_23 = ((-(arr_5 [i_1] [i_1] [i_0 + 2])));
                            var_24 -= (arr_7 [i_0] [i_1] [i_2] [i_0]);
                            var_25 -= ((((((arr_5 [i_0 + 2] [i_0 + 2] [i_0 - 1]) ? (arr_0 [i_0 + 2]) : var_2))) ? ((~(arr_5 [i_0 - 1] [i_0] [i_0]))) : ((((arr_0 [i_0 + 2]) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 + 2]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
