/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_6 [i_1] |= ((((-(arr_2 [i_1 + 2] [i_1 - 2]))) * ((var_4 * (arr_2 [i_1 + 2] [i_1 - 2])))));
                    var_11 += (min((~1), ((~(min(252676598, var_7))))));
                }
            }
        }
    }
    var_12 ^= (min((-9223372036854775807 - 1), (((var_8 < (-86 * 73))))));
    var_13 = (var_5 && var_0);
    var_14 = -32766;

    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        var_15 = (min(var_15, ((((((((var_1 ? 32761 : 4062199522))) ? (((arr_0 [i_3]) ? (arr_7 [i_3]) : 1)) : (arr_5 [i_3]))) / 255)))));
        var_16 *= (((max(528524224, 19)) & -var_10));
    }
    #pragma endscop
}
