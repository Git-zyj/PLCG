/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_17 = (((((((min(var_10, var_2))) ? (arr_0 [i_0]) : 32767))) ? ((-(var_8 | var_5))) : ((0 ? (((arr_1 [1]) ? var_6 : (arr_2 [i_0]))) : (arr_1 [i_1 + 1])))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {

                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        arr_9 [i_1] [i_1] [i_2] = ((-(arr_1 [i_2])));
                        var_18 |= (!(arr_6 [i_0] [i_0] [i_2]));
                        arr_10 [i_3] [i_2] [i_2] [i_0] [i_2] [i_0] = (max((((((var_14 & (arr_8 [i_3 + 2])))) ? (arr_0 [i_3]) : ((max((arr_1 [i_0]), var_0))))), ((min((arr_0 [i_3 + 3]), (arr_4 [i_0 + 1]))))));
                        arr_11 [i_2] = 19760;
                        arr_12 [i_0 + 1] [i_2] [11] [i_3] = (((arr_8 [i_3]) ? ((1 % (arr_8 [i_2]))) : (((arr_3 [i_3]) ? (((!(arr_5 [i_2])))) : ((21913 & (arr_7 [i_2])))))));
                    }
                    arr_13 [i_2] [i_2] [i_2] = ((((max((((arr_5 [i_2]) ? 4732 : (arr_7 [i_2]))), (((arr_1 [i_0 + 1]) ? (arr_6 [i_0] [i_1] [17]) : (arr_6 [i_2] [i_0] [i_0])))))) ? (arr_3 [i_0]) : ((((((var_11 ? (arr_0 [i_0 + 1]) : -1459)) + 2147483647)) >> ((((~(arr_2 [i_0]))) + 23))))));
                    arr_14 [i_2] [i_1] [i_1] [i_2] = ((((!((min((arr_4 [i_0]), 1))))) ? ((((!(arr_8 [19]))) ? (arr_2 [i_2]) : ((var_6 ? 0 : (arr_6 [i_0 + 1] [i_0] [i_0]))))) : ((-((min((arr_5 [i_2]), (arr_6 [i_0] [i_1] [i_2]))))))));
                    var_19 = ((((((1 * ((min((arr_4 [i_1]), (arr_8 [i_2])))))) + 2147483647)) >> (((max(((max((arr_1 [i_2]), (arr_7 [i_2])))), ((~(arr_4 [i_1]))))) - 11147))));
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_20 = ((((min((arr_0 [i_0]), (arr_6 [i_0 + 1] [i_1 + 1] [i_4])))) + ((~(arr_6 [i_0 + 1] [i_1 + 1] [i_4])))));
                    var_21 += ((((((arr_16 [i_1]) ? ((min(1, (arr_6 [i_0] [i_1 + 1] [i_4])))) : ((max((arr_4 [i_4]), (arr_0 [i_0]))))))) ? (!1) : ((max((arr_1 [i_4]), (arr_2 [i_4]))))));
                    var_22 = (((arr_5 [8]) & (min((((arr_4 [i_0]) | (arr_17 [i_0] [i_0] [i_4]))), ((min((arr_5 [6]), (arr_2 [i_0]))))))));
                }
                var_23 = (min(var_23, ((min(((min(((max((arr_15 [i_1 - 1] [i_0] [i_0 + 1]), (arr_2 [i_0])))), (min(6846, (arr_5 [1])))))), (((((0 ? (arr_15 [i_0 + 1] [i_0] [i_0 + 1]) : (arr_5 [18])))) ? (arr_5 [1]) : ((min((arr_17 [i_0] [i_1 + 1] [i_1]), (arr_16 [i_1 - 1])))))))))));
                arr_18 [i_0] [i_1 - 1] = (arr_4 [i_0 + 1]);
            }
        }
    }
    var_24 = (min(((~((min(1, var_3))))), ((var_1 & ((var_4 ? var_16 : 1))))));
    var_25 += ((var_12 ? var_9 : (max(((var_16 ? var_11 : var_7)), (var_13 != 1)))));
    var_26 = var_2;
    #pragma endscop
}
