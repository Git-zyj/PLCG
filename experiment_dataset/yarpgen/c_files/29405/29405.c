/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!(((var_16 ? (4289474690 != var_12) : 2014080606895593249)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] &= ((18446744073709551615 ? ((-(((0 < (arr_4 [0] [0])))))) : (((!(arr_5 [i_0] [i_1]))))));
                arr_8 [i_0] = ((!(31 >= 1)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {
            {
                var_20 -= (((((arr_12 [1] [i_2 - 1]) ? 46 : (arr_5 [i_3 + 1] [i_2 + 1])))) ? (max(((-(arr_1 [i_3]))), (max(1645053379, (arr_1 [9]))))) : (arr_3 [i_2]));
                var_21 = ((((((~(arr_9 [i_2])))) ? (((arr_4 [7] [17]) >> (((arr_5 [i_2] [i_2 - 1]) - 16847)))) : -16)));
                var_22 *= (((((max((((arr_4 [i_2] [i_3]) <= 7209739559312575783)), (((arr_5 [i_2] [i_3]) < (arr_11 [i_2] [i_3]))))))) >= ((~(max(-36, 130944))))));
            }
        }
    }
    var_23 &= var_2;
    #pragma endscop
}
