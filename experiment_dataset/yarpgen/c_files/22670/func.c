/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22670
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_0] [i_2] [i_2] [i_1] = ((/* implicit */signed char) 289853085);
                        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_3])) ? (min((arr_5 [i_2]), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_5), (((/* implicit */short) arr_9 [i_1] [i_2] [i_1]))))))));
                        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)-100)) ? (16777216) : (((/* implicit */int) (unsigned short)3840)))), (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_6)) : (max((((/* implicit */int) (unsigned char)249)), (22))))))));
                        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3])) ? (1432348305U) : (arr_6 [i_0] [i_1] [i_2])))) ? (min((((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_3])), (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_9 [i_1] [i_2] [i_3])), (arr_3 [i_3]))))))))));
                        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (-(var_2))))));
                    }
                    for (unsigned int i_4 = 3; i_4 < 9; i_4 += 3) 
                    {
                        var_15 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)255)), (-798907351))))));
                        arr_13 [i_2] |= ((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) (signed char)80)), (var_9))), ((+(min((((/* implicit */unsigned int) var_1)), (var_9)))))));
                        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((int) var_5)))));
                    }
                    var_17 = ((/* implicit */unsigned long long int) arr_3 [i_2]);
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 4) 
    {
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_5] [i_5])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (short)23040)))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_5] [i_5])) ? (((/* implicit */int) arr_14 [i_5] [i_5])) : (((/* implicit */int) arr_14 [i_5] [i_5]))))) + (max((((/* implicit */unsigned long long int) arr_14 [i_5] [i_5])), (var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_15 [i_5] [i_5]), (((/* implicit */signed char) ((((/* implicit */int) var_10)) != (((/* implicit */int) arr_15 [i_5] [i_5]))))))))))))));
        arr_16 [i_5] = ((/* implicit */int) min((var_2), (((((/* implicit */_Bool) (signed char)-14)) ? (9176834353643909744ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-17)))))));
    }
    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) 
    {
        var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_6] [i_6])))))));
        /* LoopSeq 3 */
        for (signed char i_7 = 1; i_7 < 23; i_7 += 2) 
        {
            arr_23 [i_7] [i_6] [i_6] = ((/* implicit */unsigned int) arr_19 [(signed char)20]);
            var_20 ^= arr_22 [i_6] [13ULL] [i_6];
            var_21 = ((/* implicit */signed char) var_9);
        }
        for (signed char i_8 = 0; i_8 < 24; i_8 += 1) 
        {
            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)111)) ? (max((((/* implicit */unsigned long long int) max((var_4), (arr_17 [i_6] [i_8])))), (((((/* implicit */_Bool) arr_20 [i_6] [i_8])) ? (arr_19 [i_6]) : (arr_24 [i_8]))))) : (((((/* implicit */_Bool) (signed char)99)) ? (arr_19 [i_6]) : (arr_19 [i_6])))));
            arr_26 [i_6] [i_8] [i_8] = ((/* implicit */short) arr_19 [i_6]);
        }
        for (signed char i_9 = 0; i_9 < 24; i_9 += 3) 
        {
            arr_30 [i_9] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) 262143U)), (((long long int) arr_29 [i_6]))))) + (arr_19 [i_9])));
            arr_31 [i_9] [i_9] = arr_17 [i_9] [i_9];
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), (arr_21 [i_6] [i_6])))) ? (((((/* implicit */int) (unsigned char)3)) - (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)24616))));
        }
        var_24 += ((/* implicit */unsigned int) var_3);
    }
    for (unsigned int i_10 = 0; i_10 < 25; i_10 += 1) 
    {
        arr_34 [i_10] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-105))));
        arr_35 [i_10] [i_10] = ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_32 [i_10])) ? (var_9) : (((/* implicit */unsigned int) 384)))))) ? (((/* implicit */unsigned int) (~(var_1)))) : (min((var_4), (((/* implicit */unsigned int) arr_32 [i_10])))));
        /* LoopSeq 2 */
        for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) max((min((((/* implicit */unsigned long long int) arr_32 [i_11])), (max((9269909720065641871ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))), (((/* implicit */unsigned long long int) arr_33 [i_10] [i_11])))))));
            /* LoopSeq 3 */
            for (signed char i_12 = 2; i_12 < 22; i_12 += 3) 
            {
                var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (unsigned char i_14 = 3; i_14 < 24; i_14 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 384)) ? (((/* implicit */int) arr_32 [i_12 + 3])) : (((/* implicit */int) arr_32 [i_12 - 2]))))));
                            var_28 *= ((/* implicit */unsigned char) (+(min((arr_42 [(_Bool)1] [i_12] [i_12 + 1]), (((/* implicit */unsigned long long int) 262141U))))));
                            arr_47 [i_11] [i_11] [i_12] [i_11] [i_13] [i_13] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_42 [i_12 + 2] [i_12 + 1] [i_14]), (arr_42 [i_12 + 2] [i_12 + 1] [i_12 + 1])))) ? (arr_38 [i_10] [i_10]) : (((((/* implicit */_Bool) ((unsigned int) 262130U))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))))) : (arr_43 [i_10] [i_11] [i_10] [i_11] [i_10])))));
                            arr_48 [i_10] [24ULL] [i_12] [i_12] [24ULL] [i_11] = arr_32 [i_12];
                        }
                    } 
                } 
                arr_49 [24] [i_11] [i_12] [i_11] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) arr_36 [i_10] [i_11] [i_12 - 1])), (var_8))), (((/* implicit */unsigned int) arr_36 [i_10] [i_11] [i_12 - 1]))));
            }
            for (unsigned short i_15 = 2; i_15 < 22; i_15 += 1) 
            {
                var_29 ^= ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 65528)) - (min((((/* implicit */unsigned long long int) arr_50 [i_11] [i_15])), (arr_46 [i_10] [i_10] [i_15] [i_15] [i_10] [i_10])))))) ? (((int) var_0)) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (var_2)))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) arr_40 [i_15] [2U] [2U] [i_10])) ? (((/* implicit */int) var_6)) : (var_1))))));
                var_30 = ((unsigned long long int) (!((!(((/* implicit */_Bool) (signed char)-95))))));
            }
            /* vectorizable */
            for (unsigned long long int i_16 = 0; i_16 < 25; i_16 += 1) 
            {
                arr_56 [i_11] [i_10] [i_11] [i_16] = ((((/* implicit */_Bool) arr_51 [i_16] [i_16] [i_16] [i_10])) ? (((/* implicit */unsigned long long int) var_7)) : (arr_51 [i_10] [i_10] [i_10] [i_10]));
                /* LoopSeq 4 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)24616))))) : (var_8)));
                    arr_60 [i_11] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-69)) % (((((/* implicit */int) (signed char)-4)) % (-153215815)))));
                    arr_61 [(signed char)18] |= ((unsigned char) (signed char)-1);
                }
                for (unsigned int i_18 = 0; i_18 < 25; i_18 += 4) 
                {
                    var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) ((short) var_9)))));
                    var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_18] [i_10])) ? (((/* implicit */int) arr_39 [i_16] [i_18])) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-105))) : (arr_37 [i_10])));
                }
                for (unsigned int i_19 = 0; i_19 < 25; i_19 += 1) 
                {
                    var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) var_9))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_63 [i_10] [i_11] [i_16] [i_19])));
                    var_35 *= ((/* implicit */int) (((((_Bool)1) ? (arr_52 [i_11] [i_16] [(signed char)10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_10] [i_10]))))) != (((/* implicit */unsigned long long int) ((arr_41 [i_10] [i_10] [i_16] [i_10]) ? (((/* implicit */unsigned int) var_7)) : (var_9))))));
                }
                for (int i_20 = 0; i_20 < 25; i_20 += 2) 
                {
                    arr_68 [i_10] [i_11] [i_10] [i_11] [i_10] = ((/* implicit */unsigned long long int) var_4);
                    var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) ((arr_36 [i_10] [i_16] [i_10]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : ((~(17243342044242524592ULL))))))));
                    var_37 = arr_41 [i_16] [i_16] [i_16] [i_16];
                }
            }
            var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) min((((((/* implicit */_Bool) 4294967293U)) ? (arr_65 [i_11] [20U] [i_11] [i_10] [i_10] [i_10]) : (arr_65 [i_10] [i_10] [i_11] [i_11] [i_10] [i_10]))), (((/* implicit */int) ((1073741816) > (arr_65 [i_10] [i_10] [i_10] [i_10] [i_11] [i_11])))))))));
            arr_69 [i_11] [i_10] [i_10] = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-2450))) - (4294967295U)))) ? ((+(2744538917U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)9))))), (1238979855U)));
            arr_70 [(signed char)0] |= ((/* implicit */signed char) var_5);
        }
        for (unsigned long long int i_21 = 0; i_21 < 25; i_21 += 1) /* same iter space */
        {
            var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_72 [(unsigned char)12]), (arr_63 [i_10] [i_21] [(unsigned char)17] [(unsigned char)17])))) ? (((((/* implicit */_Bool) arr_63 [i_10] [i_21] [i_21] [i_21])) ? (arr_63 [i_10] [13ULL] [i_10] [i_10]) : (arr_63 [i_10] [24U] [i_21] [i_21]))) : (((/* implicit */unsigned long long int) ((unsigned int) -705865363))))))));
            var_40 += ((/* implicit */int) max((((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned char) var_3))), (((((/* implicit */_Bool) arr_59 [8] [8])) ? (1073741788) : (((/* implicit */int) var_6))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)86)) ? (((/* implicit */int) (short)2478)) : (((/* implicit */int) (signed char)66))))) ? (min((((/* implicit */unsigned long long int) arr_40 [i_10] [(signed char)4] [i_10] [i_10])), (9223372036854775808ULL))) : ((~(4539159828675261339ULL)))))));
        }
    }
    var_41 = ((/* implicit */long long int) var_7);
    var_42 = ((/* implicit */unsigned int) min((var_42), (min((min(((~(var_9))), (((/* implicit */unsigned int) var_0)))), (((((2744538917U) | (2744538885U))) | (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)3)) << (((1073741819) - (1073741801))))))))))));
}
