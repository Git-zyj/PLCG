/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((min((~var_4), var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 8;i_2 += 1)
                {
                    var_12 -= (arr_7 [7] [i_1] [i_0]);
                    var_13 = ((-31023 ? (arr_0 [i_0] [i_1]) : ((var_5 ? (arr_7 [i_0] [i_0] [i_0]) : (arr_0 [10] [i_1])))));
                    arr_9 [i_2] [i_2] |= ((var_0 ? (!var_3) : ((9223372036854775805 ? (arr_8 [i_0] [i_0 + 2] [i_1 + 4] [0]) : (arr_2 [i_2 + 4] [0] [i_2])))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    var_14 = var_2;
                    var_15 = ((41033 ? -9223372036854775805 : -9223372036854775793));
                }
                arr_12 [i_1] [i_1] [i_0] &= (min(((((arr_8 [i_0 + 2] [i_0] [i_0] [i_1]) && 65535))), (arr_4 [i_0] [i_1] [i_0])));
                arr_13 [i_0] [i_0] &= ((-((((arr_8 [i_1 + 4] [i_0 + 1] [10] [i_0]) || ((2048 < (arr_3 [i_1]))))))));
                arr_14 [i_0] [i_0] [5] = 9223372036854775805;
                arr_15 [i_0] = ((65515 - (((((~(arr_0 [i_0] [i_1]))) * (((1 <= (arr_7 [i_0] [i_1 + 3] [i_1 + 3])))))))));
            }
        }
    }
    var_16 &= var_7;
    #pragma endscop
}
