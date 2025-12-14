/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194657
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
    var_10 = ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_11 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)23422))))) ? (3869187748U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4102990302U))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_12 |= ((/* implicit */_Bool) arr_1 [i_0] [i_3]);
                                arr_14 [i_1] = ((/* implicit */_Bool) ((arr_5 [i_0] [i_1] [i_3] [i_4]) / (min((arr_10 [(_Bool)1] [i_3] [i_1] [i_1] [i_1 + 1] [i_0]), (((arr_8 [i_0] [i_1 - 1] [i_0] [i_1]) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_1])))))))));
                                var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_7 [i_0] [i_1] [i_1] [i_0]) | (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (max((((/* implicit */unsigned long long int) var_4)), (var_7))) : (((/* implicit */unsigned long long int) ((var_4) / (((/* implicit */int) var_1)))))))) ? ((+(arr_8 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1]))) : (arr_12 [i_0] [i_1]));
                                var_14 = ((/* implicit */unsigned short) min((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)23422)))), ((+(min((((/* implicit */int) arr_2 [i_4])), (-374279176)))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_9)) ? (arr_10 [i_1 + 1] [i_0] [i_1] [(unsigned short)1] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 + 1] [i_1]))))), (((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1 + 1] [i_1 - 1] [i_2] [i_0] [i_2]))) / (arr_10 [i_1 + 1] [i_1] [i_1] [(signed char)10] [i_1] [i_0])))));
                    var_16 |= ((/* implicit */unsigned short) arr_13 [(unsigned short)7] [i_2] [i_1] [i_0] [i_0]);
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) max((58720256U), (((/* implicit */unsigned int) (short)-32762)))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_5 = 0; i_5 < 13; i_5 += 4) 
    {
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) arr_3 [i_5] [i_5]))));
        var_19 &= ((/* implicit */long long int) ((3869187748U) == (((/* implicit */unsigned int) ((/* implicit */int) (short)8256)))));
        var_20 |= ((/* implicit */unsigned long long int) arr_9 [i_5] [i_5] [i_5] [i_5] [i_5]);
    }
    for (unsigned short i_6 = 2; i_6 < 12; i_6 += 4) 
    {
        arr_20 [(unsigned char)2] = ((/* implicit */signed char) var_5);
        /* LoopSeq 1 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_21 = ((/* implicit */unsigned long long int) arr_17 [i_7]);
            var_22 = ((/* implicit */short) arr_4 [i_6] [i_6]);
            arr_24 [i_6 + 1] [i_7] &= ((/* implicit */signed char) max((((((/* implicit */_Bool) 864264656)) ? (16646144ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)19))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_6]))))))));
        }
        var_23 = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)48658))))), (min((((((/* implicit */_Bool) arr_5 [i_6 + 1] [i_6 + 1] [i_6 + 1] [6])) ? (((/* implicit */int) arr_11 [i_6] [i_6 - 1] [i_6] [i_6] [i_6])) : (((/* implicit */int) var_0)))), (((/* implicit */int) ((((/* implicit */int) arr_4 [i_6] [i_6])) >= (((/* implicit */int) arr_1 [i_6] [i_6 - 1])))))))));
        arr_25 [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_22 [12ULL] [i_6] [i_6]))));
    }
    for (signed char i_8 = 0; i_8 < 25; i_8 += 4) 
    {
        arr_28 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)123)), (1606249374U)))) != (max((max((((/* implicit */long long int) 58720256U)), (9223372036854775807LL))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-89)) - (((/* implicit */int) arr_26 [(unsigned short)11])))))))));
        /* LoopSeq 4 */
        for (unsigned char i_9 = 0; i_9 < 25; i_9 += 4) 
        {
            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_30 [i_8] [i_9]), (arr_30 [i_8] [i_9])))) ? ((+(((var_7) * (((/* implicit */unsigned long long int) arr_27 [i_8])))))) : (((/* implicit */unsigned long long int) arr_31 [i_8] [i_8]))));
            var_25 |= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((signed char) arr_29 [i_9]))), (((((/* implicit */_Bool) (short)-23423)) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) / (7142403901482233632LL))) : (3701828073992810474LL)))));
            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (signed char)12)) : (((/* implicit */int) (signed char)-20)))))));
        }
        for (unsigned short i_10 = 4; i_10 < 24; i_10 += 4) 
        {
            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)60)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (min((((/* implicit */unsigned long long int) max((arr_27 [i_10]), (((/* implicit */int) arr_26 [i_8]))))), (var_9)))));
            /* LoopNest 2 */
            for (signed char i_11 = 0; i_11 < 25; i_11 += 4) 
            {
                for (unsigned short i_12 = 0; i_12 < 25; i_12 += 4) 
                {
                    {
                        var_28 = ((/* implicit */unsigned long long int) (((~(arr_34 [i_8] [i_10 + 1] [i_10] [i_10]))) == (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) max((((/* implicit */int) var_0)), (arr_35 [i_8]))))))));
                        var_29 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)35)) ^ (((/* implicit */int) (short)-18876)))))));
                        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [(unsigned short)20]))) : (((((/* implicit */_Bool) ((unsigned char) var_5))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_35 [i_8])), (arr_34 [i_8] [(_Bool)1] [22ULL] [i_12])))) : (arr_30 [i_10 - 4] [i_10 - 1]))))))));
                    }
                } 
            } 
        }
        for (int i_13 = 0; i_13 < 25; i_13 += 4) 
        {
            arr_42 [i_8] [i_8] [i_8] |= ((/* implicit */int) (-(3869187779U)));
            arr_43 [i_8] [i_13] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 5665679926841815883LL)))) == (arr_29 [i_8])));
            var_31 = ((/* implicit */unsigned char) (~(((((/* implicit */int) (unsigned short)16871)) + (((/* implicit */int) (unsigned short)10780))))));
            var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_38 [i_8] [i_13]))) | (((((/* implicit */_Bool) var_4)) ? (arr_34 [i_8] [i_8] [i_8] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))) ? (((/* implicit */int) ((signed char) arr_31 [i_8] [i_8]))) : (min((((((/* implicit */_Bool) (unsigned char)195)) ? (-1530934228) : (((/* implicit */int) (unsigned char)60)))), (max((1731626013), (((/* implicit */int) var_3))))))));
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 25; i_14 += 4) 
        {
            arr_46 [i_8] [i_8] = ((/* implicit */unsigned long long int) arr_37 [i_8] [i_8] [i_8] [i_8]);
            var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_8] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_14]))) : (((arr_34 [i_14] [i_8] [i_8] [i_8]) | (((/* implicit */long long int) ((/* implicit */int) (short)-21814)))))));
            arr_47 [i_8] [i_8] = ((/* implicit */unsigned short) arr_32 [i_8] [16ULL] [i_8]);
            /* LoopSeq 1 */
            for (unsigned int i_15 = 3; i_15 < 24; i_15 += 4) 
            {
                var_34 = ((/* implicit */long long int) ((_Bool) (short)8256));
                var_35 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [0U]))))) == (((/* implicit */int) var_8))));
            }
        }
        /* LoopNest 3 */
        for (short i_16 = 0; i_16 < 25; i_16 += 4) 
        {
            for (long long int i_17 = 0; i_17 < 25; i_17 += 4) 
            {
                for (int i_18 = 2; i_18 < 22; i_18 += 4) 
                {
                    {
                        var_36 = ((/* implicit */int) max((((arr_58 [i_18 + 2] [i_18 + 2] [i_18 - 1] [i_18 + 2]) - (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((/* implicit */long long int) ((arr_34 [i_8] [i_8] [i_8] [i_8]) > (((/* implicit */long long int) ((((/* implicit */_Bool) arr_54 [i_8] [11U] [i_16])) ? (((/* implicit */int) var_1)) : (var_4)))))))));
                        var_37 = ((/* implicit */signed char) max((var_37), (arr_51 [i_8])));
                        arr_59 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((var_7), (((/* implicit */unsigned long long int) (unsigned char)75)))), (((/* implicit */unsigned long long int) arr_53 [i_8]))))) ? (arr_34 [i_17] [i_18 - 2] [i_18 - 2] [i_18]) : (arr_31 [i_8] [i_16])));
                    }
                } 
            } 
        } 
    }
}
