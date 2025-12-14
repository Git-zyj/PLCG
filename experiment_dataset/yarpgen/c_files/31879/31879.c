/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -176713120;
    var_15 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_16 |= ((((max((((arr_1 [i_0]) ? 181 : var_2)), (arr_0 [i_1])))) ? ((((max(var_8, var_8))))) : (min((max(var_6, var_9)), (((var_11 ? var_12 : (arr_4 [19] [i_1] [i_0]))))))));
                arr_6 [i_1] [i_0] = (arr_4 [i_0] [i_1] [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_17 = ((~((~(arr_7 [i_3] [i_2] [i_1 + 3] [1])))));
                            var_18 = (((arr_11 [i_0] [13] [i_0] [i_1 + 1]) ? (arr_11 [i_0] [i_1] [i_2] [i_1 + 1]) : (((4294967295 ? 58 : 58)))));
                            arr_14 [i_2 - 1] [19] [i_2] [1] [i_0] |= (max((max(var_5, (arr_3 [i_0]))), (max((((arr_4 [i_3] [i_2 + 2] [i_1]) ? 9 : 36)), 197))));
                        }
                    }
                }
            }
        }
    }
    var_19 &= 13180;
    #pragma endscop
}
