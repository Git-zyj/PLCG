/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (-127 - 1);
    var_21 = (max(var_21, -126));
    var_22 = (((((-((var_8 ? 64 : -4992130554999066973))))) ? (((!(((807070736 ? 3487896559 : 3487896559)))))) : -32013));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_23 = (min((min(44193, var_13)), ((((var_4 < var_15) == ((~(arr_2 [10] [i_1]))))))));
                var_24 = ((((807070736 ? var_4 : var_11))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [i_3 + 1] [i_2 - 1] [i_3] [i_0] [i_3] = ((3487896559 == ((((var_3 || (arr_2 [i_0] [i_4])))))));
                                arr_14 [i_0] [i_3] [i_2 - 1] [i_2] [16] [i_3] [i_0] = var_18;
                                arr_15 [i_1] [i_0] [i_3] [i_3] [i_1] [i_0] = ((-(arr_9 [i_0] [i_3 - 2] [i_2] [i_3] [i_3])));
                                arr_16 [i_3] = (max(3487896547, 3601569278));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
