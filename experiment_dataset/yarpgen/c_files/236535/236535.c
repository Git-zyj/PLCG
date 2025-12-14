/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236535
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
                arr_5 [i_0] [i_0] [i_1] = (((arr_2 [0] [i_0]) ? (((((max(var_15, var_5))) % (arr_0 [i_0] [i_0])))) : (arr_1 [i_0])));
                var_16 = (arr_2 [5] [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [13] [i_0] [i_3] [i_4] = (((min(((~(arr_9 [i_3]))), (arr_6 [i_0] [i_1] [i_0] [7]))) != ((((-32761 ? -1 : var_14))))));
                                arr_14 [i_0] [i_3] [i_2] [i_3] [10] [i_3] = ((min((arr_7 [18] [i_2 + 1] [4] [i_1]), (arr_4 [i_2 + 1]))));
                                var_17 |= (((arr_2 [i_0] [i_3]) ? (arr_2 [i_0] [i_1]) : ((~(arr_2 [i_0] [i_3])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 -= (min((var_8 || var_13), var_13));
    var_19 = (!-108);
    var_20 *= ((var_0 ? (!var_11) : var_4));
    #pragma endscop
}
