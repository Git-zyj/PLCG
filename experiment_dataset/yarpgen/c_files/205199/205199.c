/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((((max(26, 65535))) >= -213186192219618553)))));
    var_18 = (max(var_18, (((max(var_3, (min(var_16, var_6))))))));
    var_19 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [10] [10] [10] [10] &= ((~(arr_1 [i_0])));
                    var_20 = (~5);
                    var_21 = (((((arr_3 [i_0] [i_1]) != (arr_5 [i_1]))) ? (arr_4 [i_1] [i_1] [i_1]) : (arr_6 [i_0] [i_0])));
                    var_22 = ((((!var_15) * (arr_1 [i_0]))));
                }
            }
        }
    }
    #pragma endscop
}
