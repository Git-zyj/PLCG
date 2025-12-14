/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((((((arr_0 [i_0]) ? (arr_1 [i_0]) : 247)) + 2147483647)) >> (!var_7)));
        var_10 = (min(var_10, (-8 < var_3)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_11 += var_5;
                    var_12 = ((var_7 <= ((~(arr_0 [0])))));
                }
            }
        }
        arr_8 [12] [12] = ((~(~var_4)));
    }
    var_13 = (max(var_4, (!var_8)));
    var_14 = -8;
    #pragma endscop
}
