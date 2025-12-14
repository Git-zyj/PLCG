/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    var_12 = ((((-var_7 ? var_3 : -var_8)) - ((min(var_6, (var_0 * var_7))))));
    var_13 ^= var_5;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = var_7;
                var_15 -= ((((var_0 ? (~-23377) : 7957295445483772356))) ? (--162) : (arr_0 [i_0] [i_1]));
                var_16 &= (arr_1 [i_0]);
                arr_6 [i_0] [i_0] [i_0] = ((((((-(arr_1 [4]))) ? (!var_8) : (((!(arr_4 [i_1]))))))));
                arr_7 [i_0] [i_1] = ((~(((((arr_1 [i_0 - 2]) + 2147483647)) >> (((arr_1 [i_0 - 3]) + 138))))));
            }
        }
    }
    #pragma endscop
}
