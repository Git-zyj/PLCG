/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((min((((-1 ? 921269061 : -2147483645))), (var_8 ^ 1920)))) ? var_12 : var_10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 = ((((min((arr_5 [i_2] [i_2 + 1] [i_2 - 1]), 1986732799))) ? (~255) : (min((arr_5 [i_2] [i_2] [i_2 + 1]), var_3))));
                    var_16 = (min(238, ((max((arr_2 [i_2 - 1]), (arr_2 [i_2 + 2]))))));
                    var_17 ^= (((((min(var_13, (max(var_13, (arr_5 [i_0] [i_1] [i_0]))))))) != (min((((var_10 ? (arr_5 [17] [i_1] [i_0]) : 9223372036854775807))), 4135503336))));
                    arr_8 [i_0] [i_1] [i_2 + 2] = 245;
                }
            }
        }
    }
    #pragma endscop
}
