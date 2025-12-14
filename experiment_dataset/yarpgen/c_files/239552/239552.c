/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_1] = (arr_0 [i_0] [i_0]);
                var_19 = (max(var_19, ((((~11366) + (max(((2449963719382632257 * (arr_1 [i_0]))), (arr_0 [9] [i_1]))))))));
                arr_6 [2] [i_1] [i_1] |= ((arr_0 [i_1 - 1] [i_1 - 1]) + (((arr_0 [i_1 - 1] [i_1 - 1]) * (arr_0 [i_1 - 1] [i_1 - 1]))));
                arr_7 [i_1] = 2449963719382632257;
                arr_8 [i_1] [6] [i_1] = ((+(((0 + var_10) ? ((8725724278030336 ? var_8 : 9)) : var_17))));
            }
        }
    }
    var_20 |= ((var_18 ? (min(((var_10 ? var_1 : var_12)), (var_2 & var_8))) : (((~var_18) ? ((max(var_9, 14))) : var_17))));
    var_21 = (((max(var_14, (var_11 * 2449963719382632257))) & 17007));
    #pragma endscop
}
