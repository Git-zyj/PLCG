/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                var_19 += (max(1, 4095));
                arr_6 [i_0] [i_1] = (((((-79 ? var_16 : (arr_5 [i_0] [i_1])))) ? ((var_7 + (arr_5 [i_0] [i_1 + 2]))) : (((((arr_1 [i_0]) && 9007199254740991))))));
                arr_7 [i_0] [i_1] = (max((((144115188075855871 ? 6390 : 3))), (((arr_4 [i_1] [i_1 - 1] [i_1]) ? var_10 : var_0))));
                arr_8 [i_1] = -4893216808133044047;
            }
        }
    }
    #pragma endscop
}
