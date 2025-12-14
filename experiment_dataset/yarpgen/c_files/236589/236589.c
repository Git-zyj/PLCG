/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!11);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_2] = (((arr_2 [i_0]) ? (~1) : ((~(1852592136602716040 & 18446744073709551606)))));
                    arr_8 [i_0] [i_1] [i_2] = (((((~(~18)))) ? (min((arr_0 [i_2] [5]), (arr_1 [12] [12]))) : (244 & 5019)));
                }
            }
        }
    }
    var_16 = var_12;
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            {
                var_17 = (((arr_9 [i_4]) ^ (min((min(6, 28095)), (1634733347 | -8909)))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {

                            for (int i_7 = 0; i_7 < 24;i_7 += 1)
                            {
                                arr_22 [15] [i_4] [i_5] [i_5] [i_4] [i_7] [i_7] = ((37440 >= (min((((arr_16 [i_3 + 1] [i_3] [i_4]) ? 0 : (arr_21 [i_3] [4] [i_6]))), (((~(arr_11 [i_3]))))))));
                                arr_23 [i_3 - 2] [i_3 - 2] [i_4] = (((((arr_16 [i_3 - 2] [i_4 - 1] [i_4]) < (arr_16 [i_3 + 1] [i_4 - 1] [i_4]))) ? ((-(arr_16 [i_3 - 2] [i_4 - 1] [i_4]))) : (((arr_16 [i_3 - 2] [i_4 - 1] [i_4]) ? (arr_16 [i_3 - 1] [i_4 - 1] [i_4]) : (arr_16 [i_3 - 1] [i_4 - 1] [i_4])))));
                            }
                            for (int i_8 = 0; i_8 < 24;i_8 += 1)
                            {
                                var_18 = (min(24, 234));
                                var_19 = (((~80) ? (((arr_15 [i_4] [i_4] [i_3 - 2]) ? (arr_16 [i_3 + 1] [i_3 + 1] [i_4]) : (min(4037742248386017636, 13555686116889101900)))) : ((255 ? (min((arr_19 [i_3] [i_3] [i_3] [i_3]), 1029232097183782086)) : (((12717636854236785185 ? -29029 : 2877)))))));
                            }
                            var_20 = (((((((arr_16 [i_3] [i_4] [i_4]) >> 1)))) ? (((28102 ? 1 : 81))) : ((~(((arr_11 [i_3]) ? (arr_25 [18] [1] [i_5] [i_5] [8] [i_3] [i_3]) : (arr_16 [i_3] [i_4] [i_4])))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
