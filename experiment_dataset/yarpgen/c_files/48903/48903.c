/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    var_12 = (max(var_12, (arr_8 [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_13 = (min(6165553436578307669, (((((min((arr_12 [i_4] [i_1] [i_2] [i_1]), var_5))) ? ((min(var_7, var_11))) : var_10)))));
                                var_14 = var_4;
                                var_15 ^= (((!(arr_13 [i_3 - 2] [i_2 + 1] [i_1 + 2] [i_0 - 1]))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_16 &= (min((((!(arr_14 [0] [4] [i_0 - 2] [i_2 - 2] [i_2 - 2])))), (arr_4 [i_0] [i_1] [i_1])));
                                var_17 = (arr_5 [i_0 + 2] [i_5]);
                                var_18 = (min(var_9, (arr_4 [i_0] [i_2] [i_5])));
                                var_19 = (!var_6);
                                var_20 = min(((min((arr_2 [i_2 + 1]), (!var_11)))), (min((arr_17 [i_0 - 2] [i_0 - 2] [i_0] [i_0] [i_0 - 1] [i_0 - 2]), (((arr_14 [i_0] [i_1] [i_1] [i_5] [i_6]) ? (arr_20 [i_0] [i_1 - 1]) : var_10)))));
                            }
                        }
                    }
                    var_21 = (arr_12 [i_0] [i_0] [7] [6]);
                    var_22 = (arr_3 [i_2] [i_2]);
                }
                var_23 = (arr_13 [9] [9] [i_1] [i_1 + 2]);
                var_24 = ((+((var_4 ? (arr_3 [i_0 + 1] [i_0 + 1]) : (arr_3 [6] [i_1])))));
                var_25 = ((((((arr_2 [i_0]) ? (arr_13 [i_0] [i_0] [i_0] [i_0]) : (var_9 != var_7)))) ? ((((min(var_7, (arr_4 [i_0] [i_1] [i_0])))) ? (arr_5 [i_0] [i_1 + 1]) : ((min(var_2, (arr_16 [i_0] [0] [0] [i_1 + 1])))))) : ((((arr_9 [i_0] [i_1 + 2] [i_0 + 1]) > (arr_11 [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_1 + 1]))))));
            }
        }
    }
    var_26 = var_9;
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 23;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            {

                for (int i_9 = 0; i_9 < 0;i_9 += 1)
                {
                    var_27 = (((((-32757 ? 10943 : 473003856))) ? (((arr_26 [i_9]) ? ((min(var_3, (arr_24 [i_7] [4])))) : (arr_29 [i_7] [i_8]))) : ((((((arr_29 [i_7 - 1] [i_9 + 1]) + 2147483647)) << (((((arr_29 [i_7 - 2] [i_9 + 1]) + 250999085)) - 17)))))));
                    var_28 = (arr_28 [i_7 - 1] [i_7 - 1] [i_7 - 1]);
                }
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    var_29 = (min((arr_22 [i_8]), (((var_0 ? var_3 : var_7)))));
                    var_30 = (((arr_30 [i_7 + 1] [i_7 + 1] [i_8] [i_8]) ? (arr_30 [i_7 + 1] [i_7 + 1] [i_8] [i_8]) : (arr_30 [i_7 - 2] [i_7 + 1] [i_8] [i_7 - 2])));
                }
                var_31 = var_9;
                var_32 = (min(var_32, var_8));
                var_33 = (arr_26 [i_8]);
                var_34 = (min(var_34, var_7));
            }
        }
    }
    #pragma endscop
}
