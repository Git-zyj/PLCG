/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190946
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) 2147483642);
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (var_4))) : (var_9)));
        var_18 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_5)) ? (arr_1 [18] [i_0]) : (var_12))) : (arr_0 [16U] [i_0])));
        var_19 = var_12;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 17; i_1 += 3) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_0 [i_1] [i_1])))) ? (((int) arr_2 [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1] [i_1])))))));
        var_20 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 - 1]))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 17; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            var_21 = arr_3 [i_2 + 1] [11U];
            var_22 = arr_7 [i_3] [i_2];
            /* LoopNest 2 */
            for (unsigned short i_4 = 3; i_4 < 16; i_4 += 3) 
            {
                for (int i_5 = 3; i_5 < 17; i_5 += 3) 
                {
                    {
                        arr_16 [i_5] [i_4] [10] [3] [11U] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2 - 1] [i_4 - 1]))) + (arr_13 [i_2 - 1]));
                        var_23 = var_2;
                        /* LoopSeq 4 */
                        for (unsigned int i_6 = 2; i_6 < 17; i_6 += 3) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned int) ((int) arr_15 [i_2] [i_2] [(unsigned short)0] [i_2]));
                            var_25 = (~(arr_17 [i_2] [9] [(unsigned short)4] [i_4] [i_4] [17] [i_6]));
                            var_26 = ((((/* implicit */unsigned int) ((int) var_3))) + ((-(arr_20 [i_2] [1U] [i_3] [(unsigned short)7] [10U] [i_5] [3U]))));
                        }
                        for (unsigned int i_7 = 2; i_7 < 17; i_7 += 3) /* same iter space */
                        {
                            var_27 = ((arr_10 [i_4 + 1] [i_7]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [9] [i_3] [i_4 + 2] [i_5] [i_7]))));
                            arr_23 [i_4] [i_3] [13] [13] [i_7] = ((/* implicit */unsigned int) arr_12 [16U] [2] [i_4]);
                        }
                        for (unsigned int i_8 = 2; i_8 < 17; i_8 += 3) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_2 + 1])) - (((int) var_12)))))));
                            var_29 = ((((/* implicit */_Bool) var_2)) ? (134152192U) : (((/* implicit */unsigned int) (+(var_2)))));
                            arr_27 [9] [(unsigned short)2] [i_5] [i_5] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_8] [i_8] [i_8] [i_8] [(unsigned short)2] [i_4 - 1] [i_3])) ? (((/* implicit */unsigned int) arr_17 [i_5] [4] [i_5] [i_5] [(unsigned short)15] [i_4 - 1] [(unsigned short)1])) : (arr_14 [i_3] [i_2] [i_2 + 1])));
                        }
                        for (unsigned short i_9 = 4; i_9 < 17; i_9 += 3) 
                        {
                            var_30 -= ((/* implicit */unsigned int) var_14);
                            var_31 = ((/* implicit */unsigned short) (+(arr_10 [i_9 - 3] [i_9 - 3])));
                            var_32 = ((/* implicit */unsigned short) -1068062405);
                            var_33 = var_9;
                        }
                    }
                } 
            } 
        }
        for (unsigned short i_10 = 0; i_10 < 18; i_10 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_11 = 1; i_11 < 16; i_11 += 3) 
            {
                var_34 = arr_12 [i_11] [4] [i_2];
                arr_39 [i_11] [(unsigned short)15] [i_2] = ((/* implicit */int) arr_9 [i_2 - 1]);
                arr_40 [1] [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) var_15)) ? (4160815103U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [13U]))))));
            }
            /* LoopSeq 1 */
            for (int i_12 = 2; i_12 < 17; i_12 += 3) 
            {
                var_35 = ((/* implicit */unsigned short) arr_41 [i_12] [i_10] [i_2]);
                var_36 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_22 [i_2] [i_2] [i_2] [i_2] [i_2] [2])) ? (arr_3 [i_12] [i_10]) : (arr_41 [1] [i_10] [i_12]))));
                var_37 *= ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) arr_11 [8] [(unsigned short)9] [i_2])) : (arr_4 [i_10]))));
                /* LoopNest 2 */
                for (int i_13 = 2; i_13 < 17; i_13 += 3) 
                {
                    for (int i_14 = 0; i_14 < 18; i_14 += 3) 
                    {
                        {
                            var_38 -= ((/* implicit */unsigned short) ((arr_34 [i_13 + 1] [i_12 - 2] [i_2 - 1]) * (((/* implicit */int) (!(((/* implicit */_Bool) 268402688)))))));
                            arr_50 [i_2] [15] [i_12] [i_13] [(unsigned short)9] = ((/* implicit */unsigned int) ((((int) 2147483642)) ^ (((/* implicit */int) ((arr_34 [i_2] [i_2] [0]) <= (var_3))))));
                            var_39 = ((/* implicit */int) ((unsigned int) 4069784575U));
                            arr_51 [i_13] [1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_41 [i_2] [i_10] [i_14])) ? (arr_48 [i_14] [i_13] [i_12] [i_10] [3]) : (((/* implicit */unsigned int) arr_41 [i_13] [i_12 - 1] [i_10]))));
                        }
                    } 
                } 
            }
        }
        /* LoopNest 3 */
        for (int i_15 = 2; i_15 < 17; i_15 += 3) 
        {
            for (int i_16 = 0; i_16 < 18; i_16 += 3) 
            {
                for (int i_17 = 1; i_17 < 17; i_17 += 3) 
                {
                    {
                        arr_59 [i_15] [i_16] [(unsigned short)13] = ((((((/* implicit */_Bool) arr_32 [i_17] [i_15] [i_16])) ? (((/* implicit */int) arr_49 [i_15] [i_16] [i_17])) : (var_2))) / (((/* implicit */int) arr_47 [i_15 - 1] [i_2 - 1])));
                        /* LoopSeq 1 */
                        for (int i_18 = 2; i_18 < 17; i_18 += 3) 
                        {
                            var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2151728307U)) ? ((-(arr_31 [(unsigned short)12]))) : (((/* implicit */unsigned int) arr_55 [15] [i_15 - 1]))));
                            var_41 = ((/* implicit */int) (-(arr_10 [i_15 - 2] [i_15 - 1])));
                            arr_62 [i_2] [i_15] [i_16] [11] [i_17] [i_18] = ((/* implicit */int) (!(((/* implicit */_Bool) var_8))));
                        }
                    }
                } 
            } 
        } 
        var_42 = (~(var_12));
        var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_48 [i_2 - 1] [i_2] [i_2] [0] [17])) ? (arr_48 [i_2] [i_2 - 1] [i_2] [i_2 + 1] [i_2]) : (arr_48 [(unsigned short)4] [i_2] [i_2] [i_2] [i_2])));
    }
    var_44 = (((((!(((/* implicit */_Bool) var_3)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_9) : (var_0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) var_14)) < ((-(var_4))))))) : (var_9));
}
