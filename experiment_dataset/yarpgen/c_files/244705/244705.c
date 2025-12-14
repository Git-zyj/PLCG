/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 -= (+(((((arr_1 [i_0] [i_0]) + (arr_1 [i_0] [i_0]))) + 4161536)));
        var_20 ^= (((arr_1 [i_0] [i_0]) && (((((1 ? -262144 : 4294967295))) <= (262150 ^ -2604912172703623236)))));
        arr_2 [i_0] [i_0] &= ((-5082851696638001561 ? -79266731 : 4294967295));
        arr_3 [i_0] [i_0] = (((((-(arr_0 [i_0])))) ? ((-(arr_0 [i_0]))) : (arr_1 [i_0] [i_0])));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 24;i_3 += 1)
            {
                {
                    var_21 = (min(var_21, (arr_11 [i_1])));
                    var_22 = (min(var_22, (((arr_10 [i_3] [i_3 - 1]) / ((1 ? ((max((arr_4 [i_1] [i_2 + 2]), var_15))) : (min((arr_11 [i_1]), 4294967295))))))));
                }
            }
        }
    }
    var_23 = (max(var_23, ((((((-var_8 ? 262163 : (3492938332 < var_18)))) ? var_11 : (min((var_6 | 1), var_14)))))));
    #pragma endscop
}
