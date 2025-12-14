/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_2 ? var_8 : ((var_2 ? (var_8 == var_6) : (min(var_7, var_1))))));
    var_11 = ((!(var_4 | var_4)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_12 = (min(var_3, (arr_3 [i_0])));
                    var_13 = min((((((var_5 ? var_1 : (arr_0 [i_0])))) ? var_5 : var_7)), (min(-1019133915, -1019133899)));
                    var_14 = (max(var_14, (((((~(arr_6 [i_0] [i_1] [i_0])))) ? (((arr_1 [18]) ? (!var_0) : (!var_6))) : (min(var_9, (((arr_1 [7]) ^ (arr_3 [i_1])))))))));
                    arr_7 [i_0] [9] [i_0] [i_2] = ((((((var_3 ^ (arr_1 [13]))))) ? (arr_5 [i_2]) : var_9));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 -= ((1 ? 1 : 14420782542364912153));
                                var_16 ^= 6122727222338156426;
                                arr_12 [i_0] = (((((var_9 & ((37 ? 1019133914 : 2147483647))))) ? ((((((arr_1 [i_3 - 1]) ^ var_1)) >> (((arr_1 [i_1]) - 74))))) : (arr_6 [i_0] [i_0] [i_0])));
                                var_17 += (((~(arr_6 [i_4 - 1] [i_3 + 1] [i_0 + 2]))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
