/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~(((!var_11) ? var_9 : ((var_1 ? var_7 : var_5))))));
    var_19 = var_1;
    var_20 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            {
                var_21 ^= (arr_4 [i_1 + 2] [i_1 + 3]);

                for (int i_2 = 4; i_2 < 10;i_2 += 1)
                {
                    var_22 *= ((-((29 ? (arr_4 [i_2 - 2] [i_1 - 3]) : (arr_4 [i_2 - 2] [i_1 - 3])))));
                    var_23 = ((((~((var_1 ? var_7 : 32767)))) | (min((arr_0 [i_2 - 4]), ((max((arr_1 [i_1]), var_7)))))));
                    arr_8 [i_0] [3] [i_2] = var_14;
                }
                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {
                    arr_12 [i_0] [i_3] [4] [i_3] = ((((!(((var_12 ? (arr_10 [9]) : var_1))))) ? (min(var_11, ((var_10 ? var_5 : var_17)))) : 1843303091));
                    arr_13 [i_3] = ((((((arr_2 [i_1 - 1]) ? (-2147483647 - 1) : (arr_3 [i_3] [9] [i_3])))) ? ((((((~(arr_4 [i_0] [i_0])))) ? var_14 : ((min((arr_1 [i_1]), var_2)))))) : (arr_5 [i_1 + 2] [i_3 - 1] [i_3] [i_3])));
                    var_24 = (((min(-119, (((!(arr_9 [i_3 - 1] [i_3] [0]))))))) ? (!var_2) : var_17);
                }
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                    {
                        var_25 = (min(2097152, (((var_0 + 2097152) + ((((arr_4 [3] [i_0]) ? 31445 : (arr_9 [i_1] [i_4] [i_5]))))))));
                        var_26 = 74;
                        var_27 += -79;
                        var_28 -= (((((min(var_1, (arr_10 [i_0]))))) ? ((((((((arr_9 [4] [i_4] [i_1]) ? var_12 : 311893685))) || var_15)))) : (((-(arr_18 [i_0]))))));
                        var_29 -= (((((var_7 ? var_15 : (arr_0 [i_5])))) ? ((((((arr_18 [i_1]) - (arr_16 [i_0] [i_4] [i_5])))) ? (min((arr_17 [8] [11] [3] [i_4] [i_4]), (arr_10 [i_0]))) : ((min((arr_9 [i_5] [i_4] [7]), var_3))))) : ((-(arr_17 [i_1 - 1] [i_1] [10] [2] [i_1 - 2])))));
                    }
                    for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                    {
                        var_30 = ((((((arr_19 [i_4] [7] [i_4]) & (arr_19 [9] [i_1 - 3] [i_4])))) ? (((arr_19 [i_4] [i_1 - 3] [i_4]) - (arr_19 [i_6] [2] [i_6]))) : (((((arr_19 [i_6] [i_0] [i_0]) != (arr_19 [i_0] [i_1] [i_4])))))));
                        var_31 = ((~(max(((max(var_12, var_10))), (max(var_13, (arr_16 [i_1] [10] [i_6])))))));
                        var_32 = var_15;
                        arr_23 [3] [i_4] [i_1] [i_1] [0] = (min((min(((var_16 / (arr_15 [i_0] [2] [i_4] [8]))), (arr_14 [9] [1]))), ((~(((arr_14 [i_1] [i_4]) << (((((arr_0 [i_4]) + 199572008)) - 29))))))));
                    }
                    var_33 = var_2;
                    var_34 = -var_14;
                    arr_24 [i_1] [i_1] [i_1] = var_1;
                }
                for (int i_7 = 3; i_7 < 11;i_7 += 1)
                {
                    arr_27 [i_7] [i_0] [9] [i_0] = ((((~(~64665151))) | (((min((arr_10 [i_0]), (arr_16 [4] [i_1] [9]))) >> ((((arr_17 [9] [i_1] [i_1] [i_1] [9]) < (arr_18 [1]))))))));
                    var_35 = (((arr_26 [i_1 - 3] [i_1 + 1] [i_1 + 4] [i_7]) ? (arr_26 [i_0] [i_0] [i_7] [i_7]) : var_2));
                    arr_28 [i_7] [i_1 + 2] = (((((+(((arr_14 [i_1 + 3] [1]) ? var_11 : (arr_14 [i_0] [11])))))) ? (arr_0 [i_1 - 3]) : (arr_6 [i_7] [i_7])));
                }
            }
        }
    }
    var_36 = var_15;
    #pragma endscop
}
