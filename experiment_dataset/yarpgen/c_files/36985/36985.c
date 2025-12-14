/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= ((var_12 >= (max((~var_14), (((var_2 ? var_16 : var_1)))))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((-(arr_2 [i_0 - 1])));
        var_21 *= (-(min(((max((arr_0 [i_0]), var_5))), ((9829352316369865683 + (arr_2 [14]))))));
        var_22 = (((arr_1 [i_0 - 1]) >> ((((((arr_0 [2]) ? var_17 : (arr_0 [12])))) ? (((8617391757339685916 ? 1 : (arr_1 [i_0])))) : ((1 ? 8617391757339685933 : 9829352316369865683))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                arr_9 [i_1] = ((((max((arr_8 [i_1 - 1]), (arr_8 [i_1 + 1])))) << (((arr_8 [i_1 - 1]) - (arr_8 [i_1 - 1])))));
                arr_10 [13] |= (((((((arr_4 [i_1]) ? (arr_5 [i_2]) : var_17))) ? (arr_4 [i_1 - 1]) : (((arr_7 [i_2] [i_2] [1]) ^ (arr_8 [3]))))));

                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    var_23 = (max((arr_7 [i_1 - 1] [i_1] [10]), (arr_7 [i_1 + 1] [i_1] [i_1])));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            {
                                var_24 = ((var_11 ^ (((!(arr_11 [i_1 - 1] [i_1 + 1] [i_1 - 1]))))));
                                var_25 = (arr_16 [1] [i_3] [1] [12] [i_3] [i_1]);
                            }
                        }
                    }
                }
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    var_26 = ((9829352316369865682 ? 133 : 9829352316369865696));
                    var_27 = (min(var_27, ((((((1 ? (arr_16 [i_1 - 1] [0] [i_1] [i_1] [0] [i_1 - 1]) : (arr_4 [i_1 - 1])))) + (max((arr_16 [i_1 + 1] [4] [i_1 + 1] [i_1] [4] [i_1 - 1]), var_12)))))));
                    var_28 = 122;
                    var_29 *= (((arr_8 [i_1 + 1]) ^ (arr_13 [18])));
                }
            }
        }
    }
    #pragma endscop
}
