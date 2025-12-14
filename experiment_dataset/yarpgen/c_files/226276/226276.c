/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= var_15;
    var_19 = var_2;

    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {
        var_20 |= (!-4573429794706214451);
        var_21 = (!var_12);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    var_22 *= ((!((min(-4573429794706214451, (max((arr_5 [4] [i_2]), var_8)))))));
                    var_23 = (((((((4573429794706214450 ? 54967 : var_10))))) > (((((arr_6 [13]) ^ var_11)) + 56))));
                    arr_7 [i_0] [i_0] [i_0] = ((((4573429794706214451 ? (((var_17 ? (arr_1 [i_1]) : (arr_3 [1] [1])))) : ((1 ? (arr_0 [i_2]) : -4573429794706214465)))) - (arr_6 [i_0 + 1])));
                }
            }
        }
        arr_8 [i_0] [1] = 65527;
        arr_9 [i_0] = ((((arr_3 [i_0 + 1] [i_0 + 1]) ? (4573429794706214478 | 22777) : (arr_5 [i_0 + 1] [i_0 + 1]))));
    }
    for (int i_3 = 0; i_3 < 0;i_3 += 1) /* same iter space */
    {
        var_24 = ((-19444 >= (max((((~(arr_2 [i_3])))), (arr_4 [i_3 + 1] [i_3 + 1] [i_3 + 1] [10])))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 13;i_5 += 1)
            {
                {
                    arr_17 [i_3] [1] [i_4] [i_3] = (((arr_12 [i_3 + 1] [i_4]) ? (((((((arr_5 [i_4] [i_4]) << (101 - 49)))) && ((min((arr_13 [i_3 + 1] [i_4]), (arr_10 [i_5]))))))) : (((((arr_12 [2] [i_4]) << (((arr_1 [8]) + 61)))) * 0))));
                    var_25 = (max(((~(((arr_16 [i_3] [i_4] [i_3]) ? var_16 : 192)))), var_14));
                }
            }
        }
    }
    #pragma endscop
}
