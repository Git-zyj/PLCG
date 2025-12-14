/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20336
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) var_15)))))))) ? (((/* implicit */int) ((short) ((var_15) || (((/* implicit */_Bool) arr_1 [i_0 - 1])))))) : (((((/* implicit */int) arr_2 [i_0])) + (((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) var_12))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        arr_9 [i_0 - 1] [i_0 - 1] [i_2 + 3] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) % (var_1)));
                        arr_10 [i_1] [i_3] [(_Bool)1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_2 - 1] [i_2 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_2 + 2] [13]))) : (arr_4 [i_2 + 2] [i_1] [(unsigned short)11])));
                    }
                    arr_11 [i_1] [(unsigned char)10] [(unsigned short)10] [i_1] = ((/* implicit */long long int) arr_4 [i_0 - 1] [i_1] [i_0 - 1]);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_4 = 4; i_4 < 22; i_4 += 2) 
    {
        arr_14 [i_4] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_13 [i_4])) : (((/* implicit */int) var_9)))) / (((/* implicit */int) var_9))));
        arr_15 [i_4 - 2] [i_4 - 4] = ((/* implicit */long long int) var_9);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        /* LoopSeq 3 */
        for (int i_6 = 1; i_6 < 16; i_6 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_7 = 0; i_7 < 17; i_7 += 4) 
            {
                for (short i_8 = 0; i_8 < 17; i_8 += 3) 
                {
                    {
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_22 [i_5]))));
                        /* LoopSeq 1 */
                        for (int i_9 = 0; i_9 < 17; i_9 += 3) 
                        {
                            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_1 [i_5]))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_22 [i_5])) : (((/* implicit */int) arr_12 [(_Bool)1]))))));
                            arr_31 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) var_8))) ? (((/* implicit */int) ((_Bool) arr_18 [i_5] [(unsigned char)7]))) : (((((/* implicit */_Bool) arr_28 [i_5] [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_19 [i_5] [(signed char)6] [i_5])) : (((/* implicit */int) var_9))))));
                            arr_32 [i_6] [i_5] = ((/* implicit */int) arr_13 [i_6 - 1]);
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_6] [i_9])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((_Bool) arr_18 [i_7] [i_7]))) : (((((/* implicit */int) var_6)) ^ (((/* implicit */int) arr_19 [i_5] [i_5] [i_5]))))));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_10 = 0; i_10 < 17; i_10 += 2) 
                        {
                            arr_36 [i_5] [i_6] [i_7] [i_5] [i_6] [i_8] = ((/* implicit */_Bool) ((signed char) ((unsigned int) var_9)));
                            arr_37 [i_5] [i_6 + 1] [i_7] [i_5] [i_10] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_24 [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_5]))));
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_6 + 1] [i_6 + 1] [(_Bool)1] [i_10])) ? (((/* implicit */int) ((var_9) || (((/* implicit */_Bool) arr_22 [i_10]))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_26 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_10])) : (((/* implicit */int) arr_21 [3] [i_6 - 1])))))))));
                            arr_38 [i_5] [i_6 - 1] [i_5] [i_8] [(_Bool)1] [i_5] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_21 [i_6 + 1] [i_6 + 1])) : (((/* implicit */int) arr_21 [i_6 - 1] [i_6 - 1]))));
                        }
                        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_6] [i_6 + 1] [i_5]))) : (arr_35 [i_7] [i_8] [i_8] [i_6 + 1] [i_6 + 1] [i_7]))))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned short i_11 = 0; i_11 < 17; i_11 += 4) 
            {
                arr_41 [i_5] [i_6] [i_5] = ((/* implicit */_Bool) var_8);
                arr_42 [i_5] [11LL] [11LL] [i_5] = ((/* implicit */short) ((unsigned short) arr_34 [i_11] [i_11] [i_6 - 1] [i_6 + 1] [i_6] [i_6] [i_6]));
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_13 = 0; i_13 < 17; i_13 += 4) 
                {
                    arr_48 [i_6] [i_5] [i_13] = ((/* implicit */unsigned int) var_10);
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_5])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_43 [i_5] [(signed char)4])) ? (((/* implicit */int) arr_39 [i_5] [i_5])) : (((/* implicit */int) arr_30 [i_13] [i_5] [i_6 - 1] [i_5] [i_5]))))) : (((long long int) var_7))));
                    var_23 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_5] [i_13]))) : (var_4)))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) arr_2 [i_5])) ? (((/* implicit */int) arr_6 [i_13] [i_6] [i_6 + 1])) : (((/* implicit */int) arr_40 [i_5] [i_13]))))));
                }
                for (long long int i_14 = 3; i_14 < 15; i_14 += 4) 
                {
                    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) arr_6 [(_Bool)1] [(_Bool)1] [(_Bool)1]))));
                    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_18 [i_14 - 2] [(unsigned short)3]) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_5] [i_6 - 1])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_5] [i_6 - 1])) / (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) arr_18 [i_12] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_5] [i_5] [i_12] [i_14]))) : (arr_44 [i_5] [i_6 + 1] [i_6] [i_6 - 1])))));
                }
                /* LoopNest 2 */
                for (long long int i_15 = 0; i_15 < 17; i_15 += 1) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [(_Bool)0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_16 [i_5]) > (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_5] [i_5] [i_5] [i_5] [i_5]))))))) : (arr_50 [i_6 - 1] [i_6] [i_6 - 1] [i_15])));
                            var_27 |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) ^ (((/* implicit */long long int) arr_45 [i_6 - 1] [i_6] [8U]))));
                        }
                    } 
                } 
            }
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                arr_58 [i_5] [i_6 + 1] [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (arr_40 [i_5] [i_5])))) : (arr_5 [i_5] [i_5])));
                arr_59 [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_17] [i_6 - 1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_7 [i_5] [i_17]))));
                var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((unsigned long long int) var_8)))));
                arr_60 [i_5] = ((/* implicit */long long int) ((_Bool) var_10));
            }
        }
        for (int i_18 = 1; i_18 < 16; i_18 += 1) /* same iter space */
        {
            var_29 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_49 [4] [i_18 + 1] [4])) : (((/* implicit */int) arr_7 [(_Bool)1] [(_Bool)1]))));
            arr_63 [i_5] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_5)))) || (((/* implicit */_Bool) var_1)));
            arr_64 [i_5] [i_5] = ((/* implicit */int) var_13);
            arr_65 [i_5] [i_5] [(_Bool)1] |= ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)194))) > (4205170480U));
            arr_66 [i_5] [i_5] [i_5] = ((/* implicit */int) arr_7 [i_5] [i_18 + 1]);
        }
        for (int i_19 = 1; i_19 < 16; i_19 += 1) /* same iter space */
        {
            arr_70 [i_5] [i_19 + 1] = ((short) 3803063338U);
            /* LoopNest 2 */
            for (short i_20 = 0; i_20 < 17; i_20 += 2) 
            {
                for (unsigned int i_21 = 0; i_21 < 17; i_21 += 4) 
                {
                    {
                        var_30 = ((/* implicit */signed char) ((short) arr_13 [i_21]));
                        arr_75 [i_5] [i_5] = ((((/* implicit */_Bool) arr_35 [i_5] [i_5] [i_19] [i_19 + 1] [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_5] [i_5]))) : (((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_7))));
                    }
                } 
            } 
            arr_76 [i_5] [i_5] [i_19] = ((/* implicit */short) ((arr_49 [i_19 + 1] [i_19 + 1] [i_5]) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_5] [i_19 - 1] [i_5])))));
        }
        arr_77 [i_5] [i_5] = ((/* implicit */short) var_14);
        arr_78 [i_5] = ((/* implicit */unsigned short) ((unsigned int) arr_30 [i_5] [i_5] [(signed char)3] [i_5] [i_5]));
    }
    var_31 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) var_11))))) ? (((/* implicit */unsigned long long int) ((((_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_0)))) : (((var_15) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_7)))))) : (min((((/* implicit */unsigned long long int) min((var_4), (((/* implicit */long long int) var_2))))), (var_1)))));
}
