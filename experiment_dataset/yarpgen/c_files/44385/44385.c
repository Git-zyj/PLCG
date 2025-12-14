/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] = (min(((var_5 ? (arr_2 [i_0 + 2]) : 1)), ((max(1, var_5)))));
                arr_5 [i_1] [i_1] = ((+((max((arr_3 [i_1] [i_1 - 1]), var_5)))));
            }
        }
    }
    var_12 = (18446744073709551615 <= -32614);
    var_13 = ((((-(var_1 - 230))) / ((-var_2 - (var_6 * var_6)))));
    #pragma endscop
}
