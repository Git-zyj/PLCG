/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        var_15 = -9223372036854775805;
        arr_2 [i_0] = ((!(((+(((arr_1 [i_0]) ? var_11 : (arr_1 [i_0]))))))));
        var_16 &= ((((2058889131033264726 && -20659) & (arr_1 [i_0]))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 4; i_2 < 21;i_2 += 1)
        {
            {
                var_17 += (min((((((var_2 ? (arr_7 [i_1]) : (arr_8 [14])))) ? (arr_3 [i_1] [i_1]) : ((min(var_5, 3))))), (((arr_5 [i_2 - 3]) ? (arr_4 [i_2 - 2] [i_2 - 2]) : (arr_4 [i_2 - 1] [i_2 - 4])))));
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            arr_15 [i_4] [i_4] [i_4] [i_3] [11] [i_1] = (!-7);
                            arr_16 [1] [i_2] [i_2] [i_2] [21] [8] = ((-(((arr_7 [i_4]) ? ((var_10 ? var_11 : (arr_14 [i_1]))) : (arr_6 [10])))));
                        }
                    }
                }
                var_18 *= ((((((~var_13) ? ((min((arr_7 [i_2 - 3]), -20659))) : (((arr_7 [i_1]) ? (arr_8 [i_1]) : 25))))) ? var_5 : (max((arr_5 [i_2]), (arr_8 [i_1])))));
                var_19 = ((var_10 >= (arr_6 [i_2])));
            }
        }
    }
    #pragma endscop
}
