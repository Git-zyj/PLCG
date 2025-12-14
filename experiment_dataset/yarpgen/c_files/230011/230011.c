/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] = min(-2147483617, -5172966874298709732);
                arr_5 [i_1] = (((arr_3 [i_1]) / -2147483617));
                var_19 = (min((((-(arr_1 [1])))), -2551314240524865375));
                arr_6 [i_1] = (2147483616 & ((((arr_3 [i_1]) || (arr_0 [i_0])))));
            }
        }
    }
    var_20 = ((var_11 ? 5172966874298709732 : var_17));
    #pragma endscop
}
