/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;
    var_16 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_17 = (((((((-20490 ? (arr_1 [i_0 + 1] [i_0 + 1]) : 13952)) >> (((arr_4 [i_1]) * -512))))) == (arr_2 [10] [i_1] [10])));
                arr_6 [i_0 - 1] [i_1] [i_1] = (((((var_7 ? ((-(arr_0 [i_0 - 1] [i_1]))) : ((~(arr_1 [i_0] [i_1])))))) > ((0 ? 0 : 252))));
            }
        }
    }
    #pragma endscop
}
