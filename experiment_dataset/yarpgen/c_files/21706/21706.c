/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 4294967274;
    var_12 = 4294967285;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_13 = (min(-8378174794610864010, var_2));
                    var_14 = ((((min((arr_6 [i_0 + 1] [i_0 - 3] [i_1 + 2] [i_1]), (arr_6 [i_0] [i_0 - 2] [i_1 + 3] [i_1])))) ? (arr_6 [i_0] [i_0 - 1] [i_1 + 3] [i_1]) : (max((arr_6 [i_0] [i_0 - 3] [i_1 + 3] [i_1]), (arr_6 [i_0 - 3] [i_0 - 3] [i_1 + 2] [i_1])))));
                    var_15 -= (max(((((arr_6 [6] [i_1] [i_2 + 2] [1]) ? 0 : (arr_6 [4] [i_1 + 3] [8] [4])))), (arr_5 [i_2 + 1] [i_2 - 1] [i_2 + 2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_3] [i_3] [i_1] [i_0] &= (((((((arr_3 [i_3] [i_3]) < var_4)))) ? (((~(arr_6 [i_3] [i_2 + 1] [i_1 - 1] [i_3])))) : (((!4294967285) ? var_10 : (((max(var_4, (arr_7 [i_3])))))))));
                                arr_13 [i_3] |= ((((((7438665322220393622 ? (arr_10 [i_4] [3] [i_2 - 1] [i_2] [5] [i_0]) : var_1)))) ? (((arr_11 [i_4] [i_4 - 1] [i_4] [i_4 + 1] [i_4] [7]) / ((var_8 ? 8609658229783015962 : 16)))) : ((((!((((arr_11 [i_0 - 1] [i_0] [10] [10] [i_0 + 1] [i_0]) ? 23 : 6191)))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            {
                                arr_18 [i_1] [2] [i_2 + 2] [i_5] [i_6] = arr_6 [i_0] [1] [4] [i_1];
                                var_16 = ((+(((((arr_6 [i_1] [0] [i_1 + 3] [i_1]) >= var_7)) ? (192 >= 5) : var_1))));
                                var_17 = ((~(((arr_11 [i_6 + 2] [i_6 - 1] [i_6] [i_6] [i_5 - 1] [2]) ? 0 : (arr_11 [i_6] [i_6 + 2] [i_6] [i_6] [i_6] [i_5 - 2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = ((max(var_2, var_0)));
    var_19 = ((!(!var_3)));
    #pragma endscop
}
