/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [i_1] = (max(((((((arr_6 [12]) ? (arr_5 [i_1] [i_1]) : (arr_6 [i_0])))) / var_4)), (arr_0 [i_1 - 1] [i_1 - 3])));
                var_18 = ((((arr_5 [i_1] [i_1]) ? (((arr_6 [i_0]) ? (arr_5 [i_1] [i_1]) : (arr_6 [6]))) : ((((arr_5 [i_1] [i_1]) + var_8))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_14 [i_2 - 2] [i_1] [i_1] [i_0] [1] = (((((var_15 ? var_15 : (arr_13 [18] [i_1] [i_2] [1] [i_2])))) ? (arr_0 [17] [i_1]) : var_2));
                            arr_15 [i_0] [i_0] [i_0] [i_0] &= -var_0;
                            var_19 &= (((((+(((arr_12 [i_0]) ? (arr_2 [1] [i_1]) : var_9))))) ? ((~(arr_10 [i_0] [3] [3] [i_3]))) : (((((((arr_5 [i_0] [i_1]) == (arr_1 [i_0])))) ^ (var_3 <= var_0))))));
                            var_20 = (i_1 % 2 == zero) ? (((((min((arr_8 [i_1] [i_1] [i_2 - 2] [20]), (arr_1 [i_3])))) >> (((min((arr_4 [i_2 - 2] [1]), var_6)) >> (((arr_9 [i_0] [i_1] [i_3]) - 17728))))))) : (((((min((arr_8 [i_1] [i_1] [i_2 - 2] [20]), (arr_1 [i_3])))) >> (((min((arr_4 [i_2 - 2] [1]), var_6)) >> (((((arr_9 [i_0] [i_1] [i_3]) - 17728)) + 49710)))))));
                            var_21 = (max(var_21, ((((((((((arr_10 [i_0] [14] [i_2] [i_3 + 1]) ? var_8 : var_1))) ^ (max(var_3, var_14))))) + (min((min((arr_3 [i_1] [i_2]), (arr_5 [i_0] [i_1]))), (arr_13 [i_0] [i_1 - 1] [i_0] [i_2 + 2] [i_3]))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_22 = min(var_6, (((arr_2 [i_0] [i_4]) ? var_7 : (arr_10 [i_0] [i_1] [i_1] [i_0]))));
                            arr_22 [1] [i_1 + 1] [i_1] [i_1] [i_1] [i_1] = (arr_9 [15] [i_1] [i_0]);
                            var_23 = (max((arr_16 [i_1] [i_1]), var_9));
                        }
                    }
                }
            }
        }
    }
    var_24 ^= var_3;
    #pragma endscop
}
