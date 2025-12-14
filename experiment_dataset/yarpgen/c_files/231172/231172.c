/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!(~-117)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_15 = ((((max(32767, 37))) ? ((var_9 ? 1 : var_3)) : (arr_2 [i_0] [i_0])));
                                var_16 = ((-32757 ? var_3 : (((~((((arr_9 [7] [i_1] [i_1] [i_1] [14]) || 2))))))));
                            }
                        }
                    }
                }
                var_17 = (!0);
                var_18 += ((((((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_9 [i_1] [4] [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_1] [i_0] [i_1])))) >= (((arr_9 [i_1] [i_0] [i_0] [i_0] [i_0]) ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) : var_13))));
                var_19 += -6931128223320761294;
            }
        }
    }
    var_20 = (((((((max(var_13, var_5))) - ((1 ? var_8 : var_1))))) ? (1 * var_1) : -var_10));
    #pragma endscop
}
