/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_14 = 8985930587072100227;
                                var_15 *= ((!((((var_3 && var_5) ? (!var_1) : -13536)))));
                                var_16 = ((((~((~(arr_1 [i_0] [i_0]))))) << (((((arr_7 [7] [7] [7] [7]) & -8985930587072100228)) - 2094))));
                                arr_12 [i_4] = var_9;
                                arr_13 [i_0] [i_0] [i_0] [i_4] [3] [i_0] [i_0] = ((-30029 ? (((var_1 * (!var_5)))) : ((var_8 ? ((-89 ? (arr_2 [i_0] [6]) : 27021597764222976)) : (!-2926)))));
                            }
                        }
                    }
                }
                var_17 = ((((((var_8 ? var_12 : 654650985))) || (((832054180 ? 2908 : 1))))) ? -4096 : (((((~65535) >= (var_5 >= 100))))));
            }
        }
    }
    var_18 = ((var_5 || (79 + var_6)));
    var_19 *= min((((var_0 && 1) >= (var_8 || -30014))), ((var_1 == (max(-1264227898, var_9)))));
    #pragma endscop
}
