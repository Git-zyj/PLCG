/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = ((((min((arr_1 [i_0 - 1]), ((32713 ? (arr_1 [i_0]) : 32726))))) ? var_8 : (((arr_2 [i_1] [i_1 - 1] [i_1 - 1]) ? (arr_2 [i_1] [i_1 + 1] [i_1 + 1]) : var_12))));
                var_18 = (arr_2 [i_1] [i_1 - 1] [i_1]);
                arr_5 [i_1] [i_1] = ((-(((5462 - var_6) % ((~(arr_3 [i_0] [i_1])))))));
                var_19 = 60069;
                var_20 |= (((((var_3 & (var_8 >= var_9)))) ? (((5484 || (arr_3 [i_1 + 1] [i_0 + 1])))) : (arr_0 [1] [1])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    var_21 ^= (arr_2 [i_3] [i_3] [i_2 + 2]);
                    arr_13 [i_2] [i_3] [i_4] [i_3] = (arr_7 [i_2 - 1]);
                    arr_14 [i_2 + 2] [i_2 + 2] [i_4] [i_3] = (((arr_10 [i_2 - 2] [i_2 - 2] [i_4]) ? -var_12 : (((((var_17 * (arr_6 [i_2]))) < (arr_12 [i_2] [i_2] [i_2 + 1]))))));
                    arr_15 [i_2] = (!var_15);
                    var_22 -= (max(var_10, (arr_9 [i_2] [i_3])));
                }
            }
        }
    }
    var_23 = (max(var_23, var_10));
    #pragma endscop
}
