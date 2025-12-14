/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, ((((((((12486253491867366556 ? -538097148 : 18446744073709551608))) ? ((18446744073709551598 ? 39 : 8238878490202194234)) : -26)) * (((arr_4 [12] [i_2 - 2] [i_2 - 2]) ? (max(7, (arr_6 [i_0] [i_0] [i_0] [i_0 - 1]))) : (arr_4 [0] [i_2 - 2] [0]))))))));
                    var_18 |= ((~(max((arr_7 [4] [10] [6]), 0))));
                }
            }
        }
    }
    var_19 = 8238878490202194234;
    var_20 = var_7;
    #pragma endscop
}
