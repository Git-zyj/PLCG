/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_7 [10] [11] [i_0] = (((((min(var_9, (min((arr_5 [i_0] [i_0]), 11)))))) - var_4));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_16 = (max(var_16, ((min((((arr_3 [i_0] [i_0] [i_0 - 1]) ? (((arr_13 [i_0 - 1] [7] [i_2] [i_3] [i_2] [5]) / (arr_8 [10] [10] [10] [i_4]))) : (((arr_0 [i_0]) ? (arr_10 [i_3] [i_1] [i_3] [2] [i_1]) : (arr_2 [i_1] [i_2]))))), ((11582280262989240607 ? 1 : 1)))))));
                                var_17 = (min(var_17, (((((((((!(arr_13 [i_0] [i_0] [i_0] [i_0] [7] [i_0])))) % (((arr_6 [i_1 + 1] [i_1 + 1] [i_1 + 1]) ? 229 : (arr_4 [8] [i_1] [i_1])))))) ? ((+((min((arr_11 [8] [i_1] [i_2] [i_3]), var_1))))) : (((!(arr_1 [i_4] [i_2])))))))));
                                arr_14 [i_1] [i_3] = (max(((min((arr_10 [i_3] [i_3] [i_0] [i_3] [i_0]), 11506))), (((arr_5 [i_4 - 4] [i_0 + 1]) % (arr_0 [i_3])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_19 [i_0 + 1] [i_1] [i_2] [i_5] = ((!((max((min((arr_17 [i_0] [i_1] [i_2] [i_5] [i_6]), (arr_1 [i_2] [i_1]))), (min((arr_2 [i_0] [i_0 - 2]), (arr_17 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0]))))))));
                                arr_20 [i_0] [i_0] [i_5] [i_5] = ((((arr_17 [i_0] [i_0] [i_5] [i_2 + 1] [i_6]) ? (arr_18 [i_0] [i_0] [i_0 - 2] [i_1] [i_1] [i_1 + 1] [i_2 + 1]) : (var_7 + var_14))));
                                var_18 = ((+((min(((((arr_4 [i_0] [i_2] [i_6]) || (arr_17 [i_6] [i_5] [i_2] [i_1] [i_0])))), (min(159, (arr_4 [i_0] [i_1] [i_6]))))))));
                                arr_21 [i_0 - 1] [i_1] |= (max(((min(((-15880 & (arr_11 [i_5] [i_1] [i_2] [i_5]))), ((max((arr_3 [i_0] [i_1] [i_2]), -17043)))))), var_5));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            {
                var_19 |= ((var_11 & (min(var_15, ((var_12 ? (arr_22 [2]) : 6864463810720311002))))));
                arr_28 [i_7] [i_8] = (((1 ? 18446744073709551586 : 1)) << ((((min((arr_0 [i_7]), (arr_2 [i_7] [i_8])))) + 21634)));
            }
        }
    }
    var_20 = var_12;
    var_21 = var_12;
    #pragma endscop
}
