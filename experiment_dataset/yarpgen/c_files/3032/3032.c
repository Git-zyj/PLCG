/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= ((var_0 ? (min(-var_11, (!-7976151933911874882))) : var_17));
    var_21 = ((-((-((var_17 ? var_6 : var_9))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_9 [i_2] [i_1] [i_2] [i_2] [i_3] = ((4611650834055299072 ? 4611650834055299067 : ((((!((min(-813715190, 0)))))))));
                        var_22 = (max(var_22, ((max((((((-(arr_1 [i_0])))) ? (max(2357706299021019513, 126)) : (max((arr_3 [i_2] [i_2] [i_2]), (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]))))), ((((((!(arr_0 [i_2]))))) - (max((arr_8 [i_3] [i_1] [i_2] [i_3]), (arr_7 [i_0] [i_0] [i_1] [i_0] [i_3]))))))))));
                        var_23 = (((((arr_8 [i_1] [i_1] [i_1 + 2] [i_1 - 2]) ? (arr_8 [i_1] [i_1] [i_1 - 1] [i_1 + 3]) : (arr_8 [i_1] [i_1] [i_1 + 1] [i_1 - 4])))) | (min((arr_3 [i_2 + 1] [i_3 - 3] [i_1 - 2]), (max((arr_2 [i_3]), (arr_6 [i_0] [i_2] [i_3]))))));
                        var_24 -= ((((((((-(arr_7 [i_0] [i_0] [i_0] [4] [i_0])))) ? (-5 | 4) : (arr_6 [i_1 - 1] [2] [i_3 + 1])))) ? (((!243) ? (((arr_1 [i_0]) ? (arr_4 [i_0]) : (arr_1 [i_0]))) : (((!(arr_2 [i_1])))))) : (arr_0 [i_0])));
                        arr_10 [i_2] = ((-((-11 ? 2913328316890305683 : 250))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 15;i_5 += 1)
            {
                {
                    var_25 = ((((((((~(arr_12 [i_5] [i_4])))) ? ((max(129, 1))) : (arr_2 [i_5 - 1])))) ? ((-(((arr_11 [i_0] [i_0] [i_0]) ^ (arr_15 [i_5]))))) : (((((-(arr_2 [i_0]))) == -1)))));
                    var_26 = (min(var_26, ((max(((-(min((arr_5 [i_5] [i_5] [i_5]), (arr_13 [i_0] [i_4]))))), (max(((~(arr_6 [i_0] [i_5] [i_5]))), (arr_13 [i_5] [i_5 - 4]))))))));
                    var_27 = (max((((142 ? 1 : 251))), (((((-(arr_3 [i_0] [i_0] [i_0])))) ? (arr_6 [i_4] [i_5] [i_5 + 1]) : (arr_1 [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
