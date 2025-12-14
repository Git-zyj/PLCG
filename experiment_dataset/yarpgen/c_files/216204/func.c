/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216204
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        arr_3 [i_0] = var_15;
        arr_4 [(signed char)0] &= ((/* implicit */unsigned short) (-(var_14)));
        var_17 *= ((/* implicit */short) ((arr_1 [(_Bool)1]) % (((/* implicit */int) arr_2 [i_0 + 2] [i_0 - 2]))));
    }
    for (int i_1 = 4; i_1 < 10; i_1 += 3) 
    {
        var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)3)), (arr_1 [(_Bool)1])))) ? (min((((((/* implicit */_Bool) (signed char)-68)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-12543))) : (4294967295U))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (signed char)-2)), (var_1)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 3; i_2 < 8; i_2 += 1) 
        {
            for (unsigned short i_3 = 2; i_3 < 8; i_3 += 3) 
            {
                {
                    var_19 += ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-26)) && (((/* implicit */_Bool) var_9))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_16))))));
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((signed char) (signed char)2)))));
                    arr_12 [i_2] = ((/* implicit */_Bool) -1445381943);
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        arr_16 [i_1] [i_4] [i_2] [i_4] [i_3 + 1] [i_4] = ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)107)), (var_5)))) ? (((/* implicit */int) min(((signed char)0), (((/* implicit */signed char) arr_7 [i_2 + 2] [i_2 + 4]))))) : (((/* implicit */int) max((var_1), (((/* implicit */unsigned short) arr_7 [i_2 - 2] [i_2]))))));
                        /* LoopSeq 3 */
                        for (short i_5 = 4; i_5 < 10; i_5 += 4) 
                        {
                            arr_19 [i_1] [i_2] [i_3] [i_2] [i_5 - 2] = ((/* implicit */unsigned short) 1939550051U);
                            arr_20 [(signed char)1] [i_2] [i_2] [i_4] [i_5] = ((((/* implicit */_Bool) (unsigned short)58964)) ? (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) var_4)) / (((/* implicit */int) (unsigned short)49984)))) : (((/* implicit */int) var_7)))) : (((/* implicit */int) arr_7 [9U] [i_5])));
                        }
                        for (signed char i_6 = 3; i_6 < 8; i_6 += 4) 
                        {
                            arr_24 [i_1] [i_1] [i_3 + 3] [i_4] [i_2] = var_15;
                            var_21 -= ((/* implicit */_Bool) max((((/* implicit */int) min((((/* implicit */unsigned short) arr_21 [i_2])), (min((((/* implicit */unsigned short) (signed char)-82)), (var_7)))))), (((((/* implicit */_Bool) -2147483632)) ? (var_5) : (((/* implicit */int) arr_14 [i_2] [i_2 - 1] [i_4] [i_2 - 1]))))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 12; i_7 += 4) 
                        {
                            arr_27 [i_7] &= ((/* implicit */short) var_8);
                            var_22 = ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (signed char)86))));
                            var_23 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((((/* implicit */int) var_7)), (var_5))) ^ (((/* implicit */int) arr_8 [i_1]))))) ? (((/* implicit */int) min((arr_26 [i_1] [i_3 + 4] [i_1 - 3] [i_4] [i_2 - 2] [i_3 + 4] [i_4]), (((/* implicit */unsigned short) (signed char)101))))) : (min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-68)) : (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) -4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_25 [i_2 + 1] [i_3] [i_4]))))))));
                            arr_28 [(signed char)1] [i_7] [i_2] [(short)7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) min(((signed char)97), (var_3)))) + (22)));
                        }
                        var_24 = ((/* implicit */signed char) min((var_24), (arr_15 [i_1] [i_2] [i_3] [i_4])));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        for (signed char i_9 = 0; i_9 < 12; i_9 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) 3186904942U))));
                                var_26 ^= ((/* implicit */int) ((unsigned int) -2147483632));
                                var_27 -= ((/* implicit */long long int) ((((/* implicit */int) min((var_1), (max((((/* implicit */unsigned short) (signed char)107)), ((unsigned short)9248)))))) / (((((/* implicit */_Bool) min((((/* implicit */short) var_10)), (arr_32 [6])))) ? (((((/* implicit */int) var_0)) << (((var_14) - (3430559644U))))) : (arr_1 [(_Bool)1])))));
                                var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_6 [i_3 + 2])) ? (((/* implicit */int) arr_6 [i_3 + 2])) : (((/* implicit */int) arr_6 [i_3 - 2])))), (((/* implicit */int) max(((signed char)-75), ((signed char)48)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_35 [i_1] [i_1] = ((/* implicit */_Bool) var_5);
        /* LoopSeq 2 */
        for (short i_10 = 0; i_10 < 12; i_10 += 2) 
        {
            arr_39 [i_1] = var_4;
            /* LoopSeq 3 */
            for (int i_11 = 0; i_11 < 12; i_11 += 2) 
            {
                /* LoopNest 2 */
                for (short i_12 = 1; i_12 < 10; i_12 += 1) 
                {
                    for (signed char i_13 = 0; i_13 < 12; i_13 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */_Bool) 133693440);
                            var_30 |= ((/* implicit */signed char) max((((/* implicit */long long int) (-(((/* implicit */int) (signed char)-21))))), (min((2790232171762386498LL), (((/* implicit */long long int) var_5))))));
                            var_31 += ((/* implicit */unsigned int) ((-2790232171762386506LL) / (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */short) var_10)), (arr_13 [i_1] [i_10] [i_11] [i_12] [i_13] [i_10])))) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) (signed char)-1)))))));
                            arr_50 [i_1] [i_10] [i_11] [i_12 - 1] [i_13] = ((/* implicit */short) (_Bool)1);
                        }
                    } 
                } 
                var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-15634)) ? (((/* implicit */int) arr_0 [2] [i_11])) : (((/* implicit */int) (unsigned short)56287))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_14 [(signed char)6] [(signed char)6] [i_11] [(_Bool)1])), ((unsigned short)41121)))) : (((/* implicit */int) var_10))))) ? (((/* implicit */long long int) min((arr_48 [i_1] [i_1] [1] [i_11] [(unsigned short)7]), ((~(((/* implicit */int) (short)10678))))))) : (max((((/* implicit */long long int) (~(268434944)))), (max((((/* implicit */long long int) var_1)), (arr_9 [(signed char)8] [i_11])))))));
                arr_51 [2U] [i_10] = arr_40 [i_1] [(signed char)5];
            }
            for (signed char i_14 = 0; i_14 < 12; i_14 += 3) 
            {
                arr_55 [i_14] [i_14] = ((/* implicit */short) min((((((/* implicit */int) arr_8 [i_1])) + ((~(arr_49 [i_10] [i_10] [i_14] [i_14] [i_1 + 2]))))), (var_13)));
                var_33 = ((/* implicit */int) (unsigned short)58960);
            }
            for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
            {
                var_34 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)112))));
                /* LoopNest 2 */
                for (signed char i_16 = 2; i_16 < 11; i_16 += 3) 
                {
                    for (short i_17 = 0; i_17 < 12; i_17 += 4) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned short) arr_62 [i_1] [i_1 - 1] [i_15] [(unsigned short)8] [i_17] [i_17] [i_17]);
                            var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) (signed char)110))));
                        }
                    } 
                } 
            }
            var_37 = ((/* implicit */_Bool) max((var_11), (((/* implicit */short) (signed char)-29))));
        }
        for (signed char i_18 = 4; i_18 < 8; i_18 += 3) 
        {
            var_38 = ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-82)), ((unsigned short)9274)));
            arr_69 [i_18] [i_18] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_1)) >> (((((/* implicit */int) (signed char)82)) - (62))))) % ((~(((/* implicit */int) max((var_8), (((/* implicit */unsigned short) (_Bool)1)))))))));
        }
    }
    var_39 = ((/* implicit */_Bool) var_14);
}
