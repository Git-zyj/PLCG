/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [9] &= ((~((~(17062 ^ 4)))));
                var_15 &= ((~((~(~48479)))));
                arr_6 [0] [i_1] [i_1] = ((~((((((~(arr_4 [i_0 - 1])))) || (48479 / var_2))))));
                arr_7 [15] [i_1] = (((((((~(arr_4 [i_0 + 2]))) >= (2 == -1))))) * ((~(~36028659580010496))));
                var_16 = ((((~((~(arr_3 [8] [10] [i_1])))))) * ((~(var_5 % var_1))));
            }
        }
    }
    var_17 = (max(var_17, (((((~(~2340472613))) >> (((((426840058 ^ 3749457850) & (~var_3))) - 33)))))));
    #pragma endscop
}
