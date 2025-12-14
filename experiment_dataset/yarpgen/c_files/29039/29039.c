/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((-(var_16 > var_14))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_2] [i_0] [i_0] |= (max(((min(var_8, (arr_2 [i_2])))), (((((var_12 ? var_18 : (arr_8 [i_1] [i_1] [i_0] [i_3])))) ? (((arr_9 [i_0] [i_0] [i_0] [i_0]) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : var_2)) : (arr_7 [i_0] [i_0] [i_2] [i_0])))));
                            var_21 = ((~((~(arr_10 [i_0] [i_1 - 1] [i_3 + 1] [i_3])))));
                            arr_13 [i_1] [i_2] = var_7;
                            var_22 = (max(var_22, (arr_9 [i_3] [i_0] [i_0] [i_0])));
                        }
                    }
                }
                var_23 = var_3;
                arr_14 [1] [i_0] [i_0] = 6716274527515384012;
            }
        }
    }
    var_24 = var_0;
    var_25 = var_13;
    #pragma endscop
}
