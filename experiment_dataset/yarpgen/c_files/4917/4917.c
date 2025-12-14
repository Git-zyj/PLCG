/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = ((((~(!-810737348)))) ^ ((0 ? 2655997061 : 100)));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                var_21 = ((((((arr_3 [i_0]) >= (arr_4 [1] [i_1] [i_1])))) | (arr_4 [i_2] [i_2 - 1] [i_2 - 1])));
                var_22 ^= ((~(arr_4 [i_1] [i_1 - 2] [i_1 - 1])));
            }
            var_23 = ((var_9 ? (arr_1 [i_1 + 1] [i_1 + 1]) : (arr_1 [i_1 + 1] [4])));
            var_24 = (!1638970236);
        }
        /* LoopNest 2 */
        for (int i_3 = 4; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    var_25 -= ((+((((arr_1 [i_0] [i_0]) >= (arr_0 [i_0] [i_0]))))));
                    var_26 = ((arr_12 [i_0] [i_0] [i_0] [i_0]) | (arr_6 [i_3 + 1] [i_3 + 2] [i_3 + 2]));
                }
            }
        }
        var_27 = arr_0 [i_0] [i_0];
    }
    var_28 = var_10;
    var_29 = (min(var_29, var_11));
    #pragma endscop
}
