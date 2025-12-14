/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_9 [i_2] [i_0] = -31135;
                    arr_10 [11] [i_1] = (min((((arr_7 [i_0] [i_0] [i_0]) ? var_0 : ((min((arr_1 [0]), var_4))))), (((-(arr_7 [i_0] [20] [4]))))));
                }
                /* vectorizable */
                for (int i_3 = 4; i_3 < 17;i_3 += 1) /* same iter space */
                {
                    var_21 &= (((arr_4 [i_0] [i_1] [12]) <= (arr_1 [i_1])));
                    var_22 = (arr_6 [i_1] [i_1]);
                    arr_13 [15] = ((var_13 ? ((((arr_12 [i_3 - 1] [i_0] [i_0] [i_0]) ? var_16 : (arr_5 [i_3] [i_1] [i_0])))) : ((6433947242019731292 | (arr_5 [i_0] [i_1] [i_3 - 2])))));
                    var_23 = (arr_2 [i_0] [i_1]);
                    arr_14 [i_0] [i_1] [i_3] |= ((-(((arr_4 [i_3] [i_0] [i_3]) >> (120 - 101)))));
                }
                for (int i_4 = 4; i_4 < 17;i_4 += 1) /* same iter space */
                {
                    var_24 += ((((min((((1735 <= (arr_2 [i_0] [i_0])))), (arr_3 [i_4 - 3] [i_4])))) ? ((max((arr_12 [i_0] [12] [i_4 - 2] [i_4]), (arr_16 [i_1] [i_1] [i_4 - 2] [i_4 - 3])))) : (max((((arr_15 [i_4 + 3] [i_4 - 3] [i_4]) ? 215 : (arr_2 [i_4] [i_0]))), (((var_1 == (arr_6 [19] [i_1]))))))));
                    var_25 = (arr_4 [19] [1] [i_1]);
                    var_26 ^= ((((-47294 ? (((var_12 != (arr_5 [i_0] [i_0] [i_0])))) : ((min((arr_0 [i_4]), var_12))))) >= (arr_11 [8] [i_1])));
                    arr_17 [7] [i_0] [7] [i_4 + 4] = (-((max((arr_8 [i_0] [i_4] [i_4 + 2]), (arr_8 [i_4] [i_1] [i_4 - 1])))));
                    var_27 = (max(var_27, ((((arr_5 [i_0] [i_0] [i_0]) ? ((((min((arr_1 [i_0]), 87))) ? (arr_7 [i_4 - 4] [i_4 + 2] [i_4]) : (((arr_5 [i_0] [i_4] [i_4]) | (arr_11 [i_1] [i_1]))))) : ((min(((81 ? (arr_16 [i_0] [i_1] [i_0] [i_0]) : var_2)), (arr_7 [i_0] [i_0] [i_0])))))))));
                }
                var_28 -= (max((((var_8 ? ((max((arr_6 [i_0] [20]), var_11))) : (arr_4 [i_0] [i_0] [i_1])))), (((arr_0 [i_0]) - (arr_3 [i_0] [i_1])))));
            }
        }
    }
    var_29 += (!var_13);
    #pragma endscop
}
