/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (var_2 || var_12)));
    var_19 = (!18446744073709551604);
    var_20 = (max(var_20, (((max(17, (!11)))))));
    var_21 ^= ((-((((!var_0) <= var_5)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    var_22 = (min(var_22, (((~((((max(var_11, (arr_6 [i_2] [i_1 - 3] [1])))) ? (((arr_10 [i_0] [i_0] [i_1] [i_2]) ? (arr_8 [i_1] [i_1 + 3] [i_1] [i_1]) : (arr_5 [i_0] [i_1] [i_2 + 1]))) : ((((arr_5 [i_0] [i_0] [i_2]) ? (arr_9 [i_0] [i_2]) : var_7))))))))));
                    var_23 |= (((((-(arr_10 [i_0] [i_0] [i_1] [17]))) >= (arr_6 [i_1 - 4] [i_2 - 2] [i_2]))));
                }
            }
        }
    }
    #pragma endscop
}
