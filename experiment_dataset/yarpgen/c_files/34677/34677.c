/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_13 = (arr_1 [i_0]);
                var_14 -= ((113 != ((-((min(245, 217)))))));
                var_15 -= ((1 ? 35706 : (arr_2 [i_1])));
            }
        }
    }
    var_16 = (((var_0 - -var_6) ? (-127 - 1) : (min((var_0 * 3278), var_12))));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 14;i_3 += 1)
        {
            {
                var_17 = ((-(((arr_5 [i_3 - 2] [i_2 + 1]) ? (arr_6 [i_3]) : var_4))));
                var_18 = (!11080);
                arr_9 [i_2] = ((((max(((((arr_6 [i_2]) < 23))), (arr_8 [i_3 + 3] [i_3])))) ? (min(var_6, ((var_4 / (arr_5 [i_2 + 2] [i_3 - 3]))))) : (arr_6 [i_2 + 1])));
                var_19 = (((arr_6 [i_2 + 1]) ? ((min((-14099 - var_10), (1152921504606846976 % 1)))) : (((arr_5 [i_2] [i_3]) % ((var_6 ? var_9 : var_4))))));
                var_20 = (((46 / -123) / (min((arr_6 [i_2 - 1]), (arr_8 [i_2] [i_3])))));
            }
        }
    }
    #pragma endscop
}
