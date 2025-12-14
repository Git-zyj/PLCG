/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (((max(var_8, ((-(arr_3 [i_0] [i_0])))))))));

                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {

                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            var_18 = (max(var_18, ((((min((67108863 / var_1), (min((arr_10 [i_3] [i_2 + 2] [8] [i_0]), (arr_14 [i_0]))))) % ((((((((0 || (arr_9 [i_4] [i_2 + 2] [i_1]))))) >= (arr_10 [i_1] [i_0] [i_4 + 1] [i_3 - 1]))))))))));
                            var_19 = (max(var_19, (((+(((arr_8 [i_2 + 1] [i_2 + 2] [0] [i_2]) ^ (arr_9 [i_2] [i_2 + 1] [i_2]))))))));
                            arr_15 [i_0] [i_0] [1] [i_0] [i_4] [i_0] = ((((var_16 ? (arr_10 [i_3 - 1] [i_1] [i_2] [i_3 - 1]) : (arr_13 [i_0] [i_1] [i_0] [i_3] [4] [i_4]))) > (18446744073709551604 + 5366732603379695480)));
                        }
                        var_20 = (max(var_20, (((var_2 + (arr_12 [i_0]))))));

                        for (int i_5 = 0; i_5 < 0;i_5 += 1)
                        {
                            var_21 = (max(var_21, 1));
                            arr_19 [17] [i_3] [17] [i_1] [4] |= (arr_14 [i_1]);
                            var_22 ^= ((((((((arr_2 [i_3]) ? (arr_10 [i_0] [i_1] [i_2] [i_1]) : (arr_0 [0] [i_5]))) + 9223372036854775807)) << (((var_15 < (arr_3 [6] [i_1])))))));
                            var_23 = (max(var_23, (((((((var_7 ? (arr_13 [i_0] [i_1] [i_2 + 1] [i_0] [i_1] [i_2]) : (arr_5 [i_0]))) * var_8)) == (((arr_14 [i_1]) ^ 10120938056617043015)))))));
                        }
                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 18;i_6 += 1)
                        {
                            var_24 -= ((((var_6 ? (arr_0 [i_0] [i_0]) : 10120938056617043019)) >> (((!(arr_11 [9] [i_2]))))));
                            var_25 = ((-(((arr_7 [i_0] [i_0] [17] [i_0]) + (arr_18 [i_0] [16] [i_2] [i_3 + 1] [i_6] [i_6])))));
                        }
                    }
                    var_26 = ((((-(arr_21 [14] [i_1] [i_1] [i_2]))) / (arr_21 [i_0] [i_0] [i_0] [i_0])));
                    var_27 = (max((((!(((8325806017092508608 ? (arr_0 [i_2] [5]) : 1016007383)))))), (((arr_22 [i_1] [i_2 - 1]) ? (((((arr_1 [6]) <= (arr_4 [i_1]))))) : ((10120938056617043019 / (arr_12 [i_2])))))));
                    arr_24 [i_0] [i_1] [i_2] [i_2 + 2] = arr_6 [7] [10] [7];
                }
            }
        }
    }
    var_28 = var_5;
    #pragma endscop
}
