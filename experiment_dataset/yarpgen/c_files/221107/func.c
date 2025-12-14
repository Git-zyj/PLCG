/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221107
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
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_6 [(short)8] [(short)8] = ((/* implicit */unsigned short) 1930360345U);
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_2] [i_0 - 1])) ? (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (unsigned char)210)))), (((((arr_5 [i_0 + 1] [i_0]) + (2147483647))) << (((((((/* implicit */int) arr_2 [i_2])) + (51))) - (16)))))))) : (((unsigned long long int) (unsigned char)210)))))));
                    arr_10 [i_0] [i_1] [i_1] |= ((/* implicit */int) (((+(arr_4 [i_0] [i_0] [i_0]))) >> ((((-(var_9))) - (1239203047)))));
                }
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    var_12 *= ((/* implicit */unsigned int) max((((((min((-1), (((/* implicit */int) (unsigned char)210)))) + (2147483647))) >> (((((((/* implicit */int) (unsigned char)44)) - (var_9))) - (1239203097))))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-96)))))))));
                    var_13 ^= ((((/* implicit */_Bool) ((648503711) | (((/* implicit */int) (!(((/* implicit */_Bool) 2147483647)))))))) ? (((/* implicit */int) (unsigned char)21)) : (var_1));
                    var_14 += ((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1]);
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((var_7) % (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0 - 1] [i_0])))) > (((/* implicit */unsigned long long int) arr_9 [i_1] [i_0 + 2] [i_1])))))));
                }
                /* vectorizable */
                for (unsigned short i_4 = 1; i_4 < 10; i_4 += 2) 
                {
                    arr_15 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((int) (unsigned char)255));
                    arr_16 [i_0] [i_4] [i_4] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)7)) * (((/* implicit */int) (unsigned char)45)))) / (arr_11 [i_0 + 1] [i_0 + 2] [i_4 + 1])));
                }
                /* LoopSeq 4 */
                for (int i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) (short)24007);
                                arr_25 [i_1] [i_1] [i_5] [i_5] [i_7] [i_5] [i_5] = ((/* implicit */int) (((~(-215126725))) != (((((/* implicit */_Bool) max((arr_13 [i_5] [i_5]), (((/* implicit */unsigned long long int) arr_19 [7U] [i_5] [i_0]))))) ? (((/* implicit */int) arr_12 [i_0 + 1] [i_5] [i_5])) : ((+(-616023135)))))));
                                arr_26 [i_7] [i_5] [i_5] [i_5] [i_5] [i_5] [i_0 + 1] = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) 131071)), (min((((/* implicit */unsigned long long int) var_10)), (arr_23 [i_5] [i_1] [i_1] [i_1]))))), (((/* implicit */unsigned long long int) ((unsigned short) (~(((/* implicit */int) (unsigned char)127))))))));
                                arr_27 [i_0] [i_0] [i_0] [i_5] [i_0] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)9)) ^ (((/* implicit */int) arr_24 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_0 + 1])))))));
                            }
                        } 
                    } 
                    arr_28 [i_5] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_11 [i_5] [5ULL] [7])) ? (var_8) : (((/* implicit */int) arr_14 [i_0 + 2])))), (131058)))) ? (((/* implicit */unsigned long long int) max((max((856890944), (var_1))), (max((arr_11 [i_0 + 1] [i_1] [i_5]), (((/* implicit */int) (signed char)-24))))))) : (max((arr_13 [i_5] [i_0 + 2]), (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */int) arr_21 [i_1] [i_0 - 2] [i_0] [i_0 - 1])) != (((/* implicit */int) var_0)))))));
                    var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)100))));
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (!(((/* implicit */_Bool) 2046881706U)))))));
                }
                /* vectorizable */
                for (signed char i_8 = 0; i_8 < 11; i_8 += 3) 
                {
                    arr_32 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_0 + 2]);
                    arr_33 [i_0] [i_0] [i_8] [i_8] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_6))));
                    /* LoopSeq 4 */
                    for (unsigned int i_9 = 0; i_9 < 11; i_9 += 2) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned int) ((unsigned char) (+(arr_17 [i_9] [i_9]))));
                        /* LoopSeq 2 */
                        for (unsigned char i_10 = 1; i_10 < 9; i_10 += 3) 
                        {
                            arr_39 [i_0] [i_0] [i_0] [i_9] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-113))))) ? (((/* implicit */unsigned long long int) -87974111)) : (((((/* implicit */unsigned long long int) arr_22 [i_0])) - (arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 2])))));
                            var_21 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2))) & (2248085589U)));
                        }
                        for (int i_11 = 3; i_11 < 10; i_11 += 4) 
                        {
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) 268435424))) >= (var_8))))));
                            arr_42 [i_0] [i_1] [i_0] [i_11] [i_11] = ((/* implicit */unsigned int) (-(2045767435)));
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((unsigned short) 131059)))));
                            arr_43 [i_11] [(signed char)8] [i_0 - 2] [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)12250);
                        }
                    }
                    for (unsigned int i_12 = 0; i_12 < 11; i_12 += 2) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned int) -1822947845);
                        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) arr_20 [i_12]))));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_4 [(_Bool)1] [i_0 + 2] [i_0 + 2]) : (((/* implicit */unsigned int) var_5))))) ? ((-(((/* implicit */int) (unsigned short)65534)))) : (((/* implicit */int) (unsigned char)236))));
                        arr_46 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) arr_41 [i_0 - 1] [i_0 - 1] [(unsigned short)3] [i_0 - 1] [i_0 - 1]))));
                    }
                    for (unsigned int i_13 = 0; i_13 < 11; i_13 += 3) 
                    {
                        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_0] [i_0 + 2] [i_0 + 2])) ? (arr_13 [i_13] [i_0 + 1]) : (((/* implicit */unsigned long long int) arr_18 [i_0]))));
                        arr_50 [i_0] [i_13] [i_0] [i_13] [i_0] [i_0] = ((arr_18 [i_0 + 2]) >> ((((~(var_2))) - (3998472554U))));
                        /* LoopSeq 1 */
                        for (int i_14 = 2; i_14 < 8; i_14 += 3) 
                        {
                            arr_53 [i_0] [i_0] [i_13] [i_13] [i_0 - 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) | (((/* implicit */int) var_6))))) ? ((~(-2045767422))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)43)) && (((/* implicit */_Bool) arr_24 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 2] [i_0 - 1])))))));
                            var_28 = ((/* implicit */int) arr_7 [i_14 + 1]);
                            var_29 = ((/* implicit */unsigned int) (-(((((/* implicit */unsigned long long int) arr_5 [i_0 - 2] [6])) & (arr_7 [i_0])))));
                            arr_54 [i_13] [i_1] [i_1] [i_13] [i_14 + 3] = (i_13 % 2 == zero) ? ((-(((((-131073) + (2147483647))) >> (((arr_13 [i_13] [i_13]) - (18405461580472665573ULL))))))) : ((-(((((-131073) + (2147483647))) >> (((((arr_13 [i_13] [i_13]) - (18405461580472665573ULL))) - (14077252460420413998ULL)))))));
                        }
                    }
                    for (unsigned char i_15 = 0; i_15 < 11; i_15 += 4) 
                    {
                        arr_58 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) var_4)) <= (63))))));
                        arr_59 [i_0] [0U] [i_8] [i_15] = ((/* implicit */unsigned short) ((arr_1 [i_0 + 2] [i_15]) / (((/* implicit */int) (signed char)-33))));
                    }
                    var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_0 + 1] [i_0 + 2])) ? (arr_19 [i_0 + 1] [i_0 - 2] [i_0 - 1]) : ((-2147483647 - 1))));
                }
                /* vectorizable */
                for (int i_16 = 1; i_16 < 9; i_16 += 3) 
                {
                    var_31 += ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)235))));
                    arr_62 [2] [2] [i_16] [i_16] = -400895502;
                }
                /* vectorizable */
                for (unsigned int i_17 = 0; i_17 < 11; i_17 += 1) 
                {
                    arr_65 [i_0] [i_0 - 2] [i_0] = ((/* implicit */unsigned char) ((arr_40 [8] [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0]) ? (((/* implicit */int) arr_40 [4] [i_0] [i_0] [i_0] [i_0 - 1] [i_0])) : (var_1)));
                    /* LoopSeq 4 */
                    for (unsigned char i_18 = 0; i_18 < 11; i_18 += 4) 
                    {
                        arr_69 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) arr_24 [i_0 - 1] [i_1] [i_0 - 2] [i_1] [i_1]));
                        var_32 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) (signed char)24)))));
                    }
                    for (signed char i_19 = 2; i_19 < 7; i_19 += 4) /* same iter space */
                    {
                        arr_72 [i_0] [5] [i_17] [i_17] [i_0] [i_0] = ((/* implicit */unsigned short) var_7);
                        var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -1747165143)) ? (var_2) : (((/* implicit */unsigned int) arr_64 [i_19] [i_0 + 2] [i_0 + 2])))))));
                        arr_73 [i_0 + 2] [i_1] [i_0 + 2] [i_0 + 2] [i_19] = ((/* implicit */unsigned int) arr_66 [i_0] [i_0 + 2] [i_0] [i_0 + 2]);
                        var_34 = ((((/* implicit */int) arr_70 [i_19 + 1] [i_19 + 1] [i_19 + 3] [i_19 + 3] [i_19 + 2] [i_19 + 1])) >= (((/* implicit */int) arr_70 [i_19 + 3] [9U] [i_19 + 4] [9U] [i_19 + 1] [i_19 + 1])));
                    }
                    for (signed char i_20 = 2; i_20 < 7; i_20 += 4) /* same iter space */
                    {
                        var_35 *= ((/* implicit */int) ((((/* implicit */int) (unsigned char)8)) <= (((/* implicit */int) (unsigned char)244))));
                        var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_20] [i_20] [i_20] [i_20 + 2] [i_20] [i_20 + 4])) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) var_4)))) : (((int) var_9))));
                        var_37 = ((/* implicit */int) (unsigned short)56270);
                        var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? ((+(((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) ((unsigned short) arr_70 [i_0] [i_0] [i_17] [i_17] [i_20] [i_17])))));
                    }
                    for (signed char i_21 = 2; i_21 < 7; i_21 += 4) /* same iter space */
                    {
                        var_39 = ((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)233))) - (var_7)))));
                        arr_79 [i_17] [i_17] [i_17] [i_17] [i_0] = arr_18 [i_0];
                    }
                    var_40 ^= arr_17 [i_0 + 2] [i_1];
                }
            }
        } 
    } 
    var_41 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) -771382096)) ? (((/* implicit */int) (_Bool)1)) : (131068)))) ? (min((((/* implicit */unsigned long long int) 1610612736U)), (var_7))) : (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) var_0))));
}
