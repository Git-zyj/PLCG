/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((614344939 ? 614344948 : -10353))));
    var_14 *= ((((((((4675220908035924599 ? 0 : 614344914))) ? var_1 : 12))) || ((((-49 * var_12) ? var_9 : (min(var_4, 624661177)))))));
    var_15 = (min(((((18446744073709551615 ? var_7 : 63)))), (((((48 ? var_8 : var_2))) ? (var_12 > var_11) : 624661163))));
    var_16 = (((((var_8 ? ((min(26337, var_1))) : 10338))) ? (min(((10352 ? 18446744073709551599 : 2047)), ((min(var_11, 5))))) : ((((((var_6 ? 18446744073709551601 : 8681627720438176301))) ? (var_12 > var_0) : (var_5 >= var_0))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_2] = ((((min(var_11, -8503432472994370508)))));
                    arr_8 [i_0] = ((1 ? 26316 : (min(var_2, ((var_2 ? 689613092 : var_0))))));
                }
            }
        }
    }
    #pragma endscop
}
