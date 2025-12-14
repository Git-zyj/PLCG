/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((max(((var_9 ? var_9 : var_1)), (var_4 ^ var_3))), (!21386)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((~((((max((arr_0 [i_0] [i_1]), (arr_4 [7])))) ? var_7 : var_2))));
                var_13 = ((!(((34409 ? 31127 : 2047)))));
                arr_7 [i_1] [i_1] = ((!(arr_0 [i_0] [2])));
                var_14 = (((min(var_8, (max(var_9, -2043523784)))) <= ((((((var_0 ? (arr_1 [i_1]) : -2047)) == (-2040 >= var_5)))))));
                var_15 = (min(var_15, (((-(min(34409, (min(-2043523767, 127)))))))));
            }
        }
    }
    var_16 = min((((((var_2 ? var_1 : var_4))) <= (var_10 ^ var_10))), var_7);
    var_17 = -1483389005;
    #pragma endscop
}
