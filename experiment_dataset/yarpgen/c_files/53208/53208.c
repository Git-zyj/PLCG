/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_1] = (((arr_2 [i_0 - 2]) ? (arr_2 [i_0 + 1]) : ((~(arr_2 [i_0 - 2])))));
                                var_14 = (arr_1 [i_0]);
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 17;i_7 += 1)
                        {
                            {
                                arr_23 [i_1] [i_1] [10] [11] [i_7] [i_7] = (((arr_16 [i_1] [i_0 - 1] [i_1] [i_1]) ? (arr_18 [i_0 - 1] [i_7 - 2] [i_1]) : (arr_20 [i_0] [i_1] [i_5] [i_6] [i_7])));
                                var_15 += (max(((((max(21, var_8))) ? var_5 : 3145728)), ((((((max(var_2, var_6)))) + (arr_19 [8] [i_7 - 1] [i_7 - 2] [i_7 + 1] [i_7]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (max(var_4, var_9));
    var_17 = max(var_2, ((-var_11 * (var_8 < var_10))));
    #pragma endscop
}
