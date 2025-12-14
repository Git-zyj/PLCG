/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (((var_7 ? var_17 : -747670534030236541)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_19 = ((((+(((arr_0 [i_0] [3]) ? (arr_4 [8]) : (arr_1 [1] [i_1]))))) == (!2193963868)));
                arr_5 [0] = -var_4;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 22;i_4 += 1)
            {
                {
                    arr_14 [i_2] [22] [i_4] = var_12;
                    var_20 &= (((arr_11 [i_2] [i_4 - 2]) != (((arr_11 [i_2] [i_4 + 1]) ? var_11 : (arr_11 [i_2] [i_4 + 1])))));
                    arr_15 [i_2] [i_3] [i_4 + 1] = (arr_11 [i_4 - 1] [7]);
                    var_21 = (max(var_21, (((-1582783791 & (arr_9 [i_2] [i_2]))))));
                }
            }
        }
    }
    var_22 = (min(var_22, (~var_12)));
    #pragma endscop
}
