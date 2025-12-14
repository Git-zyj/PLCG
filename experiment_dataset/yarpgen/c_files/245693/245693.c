/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((max(var_4, (var_3 / var_8))), ((((var_6 != var_5) >> (var_5 - 4055600039))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 23;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_11 = (max((((arr_5 [i_1 + 2]) / (arr_5 [i_1 + 1]))), (max((arr_5 [i_1 + 1]), (arr_5 [i_1 - 2])))));
                                var_12 = (min(var_12, ((min(5, 55577)))));
                                arr_15 [i_4] [i_1 + 1] [i_2] [i_1 + 1] [i_4 - 1] |= ((((max((min((arr_8 [i_3]), (arr_10 [i_2] [i_4] [i_0]))), (arr_1 [10] [i_1 + 2])))) ? (arr_11 [i_0] [i_1] [1] [i_3]) : ((((((((arr_13 [i_2] [i_3]) >> (((arr_10 [i_0] [i_4] [4]) - 40913))))) <= (((arr_8 [i_3]) | (arr_8 [i_1])))))))));
                                var_13 = (((((((arr_4 [i_4] [i_2] [6]) << (((arr_1 [i_1] [i_4]) - 35988))))) || ((((arr_2 [i_0]) + (arr_10 [i_0] [i_1] [i_0])))))));
                                var_14 = 18446744073709551600;
                            }
                        }
                    }
                    arr_16 [i_1] [i_1] [i_2] [i_0] = ((((arr_2 [i_0]) != (((arr_13 [i_2] [1]) - (arr_11 [i_0] [i_0] [i_1] [i_2]))))));
                }
                arr_17 [i_1] [14] = (((max((min((arr_7 [i_0] [i_0] [i_0]), (arr_11 [i_0] [i_0] [i_0] [i_0]))), (arr_11 [i_1] [i_1 + 2] [i_0] [i_0]))) <= (((max((arr_10 [i_0] [i_1] [i_1 - 2]), (arr_10 [i_0] [i_1] [i_1 + 1])))))));
                arr_18 [i_1] = (min(((((arr_7 [i_1 - 2] [i_0] [i_1 - 2]) ? (arr_7 [i_1 + 2] [i_0] [i_1 + 2]) : (arr_7 [i_1 + 2] [i_1] [i_1])))), (min((arr_8 [i_1 + 1]), (arr_8 [i_1 - 1])))));
                var_15 ^= (((min((arr_3 [i_1 - 2]), (arr_3 [i_1 - 1]))) == (max(((((arr_6 [i_0] [i_1 - 1] [18]) ^ (arr_0 [i_1 - 1])))), (((arr_2 [i_0]) ? (arr_3 [17]) : (arr_11 [i_0] [i_1] [i_0] [i_1])))))));
            }
        }
    }
    #pragma endscop
}
