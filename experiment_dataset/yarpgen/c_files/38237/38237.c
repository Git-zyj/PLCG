/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    var_12 |= var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 7;i_2 += 1)
            {
                {
                    arr_9 [0] [i_2 + 1] [i_2 + 1] &= (max((((max((arr_1 [4]), -1125987683)) < (var_2 || var_4))), (((((10996700010967359245 ? (arr_8 [i_1]) : var_3))) || (((var_10 ? var_1 : (arr_1 [4]))))))));
                    var_13 = (min(((((arr_5 [i_2 + 1] [i_2 + 2] [i_2 + 3]) > 77))), (arr_4 [i_0])));
                    var_14 = (((((min((arr_3 [i_0] [i_2 + 3]), var_8)) + 2147483647)) << (((((arr_4 [i_0]) ? (arr_6 [i_2 + 1] [i_2 - 2] [i_2 + 1]) : var_10)) - 18446744073709551596))));
                }
            }
        }
    }
    #pragma endscop
}
