/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((4336638747758251311 != (min(((1667419985860847152 ^ (arr_4 [i_0]))), (arr_0 [i_1])))))));
                var_16 += (min(((((((((arr_4 [1]) ? var_0 : (arr_0 [i_1]))) + 2147483647)) >> (376233678 || 11419865909468706387)))), ((var_4 ? 17640805952400336157 : (arr_2 [i_0 + 1] [i_1 - 2])))));
                var_17 = (((~((((arr_5 [i_0] [i_1]) <= 805938121309215460))))));
                var_18 |= (((arr_5 [4] [1]) ? (min(var_8, ((65535 >> (var_10 - 7963268081785376995))))) : var_3));
            }
        }
    }
    #pragma endscop
}
