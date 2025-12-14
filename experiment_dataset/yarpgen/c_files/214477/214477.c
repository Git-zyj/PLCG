/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_12 *= (max((~var_7), ((((arr_3 [i_1] [i_1 + 1]) >= -37)))));
                var_13 = (((arr_3 [i_0] [i_0]) ? 1 : ((((arr_4 [i_1 + 2]) || var_4)))));
                var_14 = (min(var_14, (((max((((32383 ? 3203748893 : var_11)), (((arr_0 [i_0]) % var_10)))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    var_15 = (min(var_15, (((((~(arr_3 [i_3 - 1] [i_3 + 2])))) || ((max(-4964200213687457482, (106 << 1))))))));
                    arr_13 [i_2] [i_4] [i_2] [i_4] &= ((~(min(var_4, (max(-1186100763, var_10))))));
                    var_16 += -1;
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        var_17 *= (arr_5 [i_5]);
        arr_17 [i_5] [i_5] &= ((~(((-37 + 2147483647) << (((((arr_1 [i_5]) + 4398)) - 23))))));
    }
    #pragma endscop
}
