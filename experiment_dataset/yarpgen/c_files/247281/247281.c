/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247281
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
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_2] [i_2] [i_0] [i_3] = ((~((min((arr_9 [i_1] [i_2 + 3] [i_3] [i_3]), var_3)))));
                            var_20 = (max(var_20, 3450200163));
                            arr_11 [i_2] [i_2] [i_2] = min(((-(arr_1 [i_0] [i_1]))), (((arr_1 [i_2 + 1] [i_2]) ? var_13 : var_11)));
                            var_21 = (max(var_21, (((((arr_5 [i_1] [i_3] [i_2 + 2] [i_2 + 3]) != 4612))))));
                        }
                    }
                }
                var_22 = arr_1 [i_1] [i_0];
                arr_12 [i_0] [i_1] [i_1] = 0;
                var_23 = (~(arr_8 [8] [i_0] [i_0] [i_1]));
            }
        }
    }
    var_24 = 62;
    var_25 = (((!16777152) < ((1 | (~2603060379473378327)))));
    #pragma endscop
}
