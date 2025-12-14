/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47157
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
    var_10 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((var_8), (((/* implicit */int) (unsigned short)2139)))))))), (max((max((((/* implicit */unsigned long long int) (unsigned short)2139)), (5995815205933116979ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-72)) && (((/* implicit */_Bool) var_5)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_6 [i_1] [(signed char)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 5995815205933116962ULL)) && ((_Bool)1)));
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    arr_9 [i_0] [i_0] &= ((/* implicit */signed char) ((short) var_8));
                    arr_10 [i_0] [(_Bool)1] = ((/* implicit */unsigned char) ((signed char) (signed char)-71));
                }
                for (long long int i_3 = 0; i_3 < 11; i_3 += 2) /* same iter space */
                {
                    var_11 |= ((/* implicit */signed char) max((((/* implicit */int) ((signed char) ((unsigned char) var_7)))), ((((_Bool)0) ? (((/* implicit */int) (short)-1369)) : (((/* implicit */int) (short)1381))))));
                    arr_14 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_1])) % (((/* implicit */int) arr_13 [i_0] [i_0] [(signed char)10] [i_1]))))) ? (var_8) : (((/* implicit */int) var_9)))), (((/* implicit */int) arr_12 [i_1] [i_1] [i_3]))));
                }
                for (long long int i_4 = 0; i_4 < 11; i_4 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 8; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_5 + 3])) ^ (((/* implicit */int) var_7))))) ? (((/* implicit */int) min((((/* implicit */short) arr_3 [i_5 + 1])), (arr_7 [i_0] [i_5 - 1] [i_5] [i_5 + 3])))) : ((+((+(((/* implicit */int) (unsigned char)182)))))))))));
                                arr_24 [3LL] [i_1] [i_1] [i_4] [i_5] [i_1] [(_Bool)1] = ((/* implicit */_Bool) (signed char)-89);
                            }
                        } 
                    } 
                    arr_25 [i_0] [i_0] [i_1] [i_4] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (unsigned short)63399)) : (((/* implicit */int) ((signed char) arr_16 [i_4] [i_1] [i_1] [i_0])))));
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        var_13 = ((/* implicit */short) max((var_13), ((short)28279)));
                        arr_29 [i_0] [i_0] [i_0] [i_0] = ((arr_0 [i_1]) && (((/* implicit */_Bool) max((((short) arr_13 [i_0] [i_1] [7] [i_7])), (max((((/* implicit */short) arr_18 [i_7] [i_4] [i_1] [i_1] [i_1] [(unsigned short)0])), (arr_7 [i_0] [i_0] [i_4] [i_7])))))));
                        var_14 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) 1938917932725263505LL)), (10517674769223023501ULL))), (((/* implicit */unsigned long long int) ((arr_18 [i_0] [i_1] [i_1] [i_4] [i_4] [i_7]) ? (((/* implicit */int) (unsigned short)63396)) : (((/* implicit */int) (signed char)-40)))))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_8 = 2; i_8 < 10; i_8 += 2) 
                    {
                        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8] [i_8])) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) arr_5 [i_8] [i_8] [i_8 - 2])))))));
                        var_16 ^= ((/* implicit */unsigned char) ((short) (signed char)71));
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 0; i_9 < 11; i_9 += 2) 
                        {
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_36 [i_8 + 1] [i_8 + 1] [i_8 + 1]) : (arr_36 [i_8 - 1] [i_8 - 1] [i_4])));
                            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)35)) ? (16566723724525127291ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96)))))))))));
                            var_19 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_27 [i_0] [i_1] [i_4] [i_8] [i_4] [i_8]))));
                        }
                    }
                    var_20 = ((/* implicit */unsigned short) var_0);
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_10 = 0; i_10 < 11; i_10 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_11 = 3; i_11 < 10; i_11 += 2) 
                    {
                        arr_42 [i_11] = ((/* implicit */unsigned int) arr_31 [i_0] [i_1]);
                        var_21 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_20 [i_10] [i_11 - 2] [i_11 - 2] [i_11 - 1])) + (2147483647))) << (((/* implicit */int) ((((/* implicit */int) (signed char)100)) <= (((/* implicit */int) (signed char)54)))))));
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_11 - 1] [i_1] [i_10])) / (((/* implicit */int) (signed char)-40))));
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */int) arr_18 [(_Bool)0] [i_0] [i_0] [i_1] [i_10] [i_11 - 2])) + (((/* implicit */int) arr_18 [i_11] [i_11] [i_10] [i_1] [i_0] [i_0])))))));
                        /* LoopSeq 1 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            arr_46 [i_0] [i_1] [i_10] [i_11] [i_12] &= ((/* implicit */unsigned short) arr_36 [i_0] [i_1] [i_11]);
                            var_24 *= ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (signed char)15))));
                            var_25 = (+(var_8));
                            var_26 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-66))));
                            arr_47 [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_23 [i_11 - 2] [i_11 - 3] [i_11 - 2] [i_11] [i_11 + 1]))));
                        }
                    }
                    for (unsigned char i_13 = 0; i_13 < 11; i_13 += 2) 
                    {
                        arr_51 [i_0] [(_Bool)1] [i_10] = ((/* implicit */long long int) ((unsigned int) arr_36 [i_13] [i_10] [i_0]));
                        arr_52 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_0] [i_0] [i_13]))));
                    }
                    for (short i_14 = 0; i_14 < 11; i_14 += 2) 
                    {
                        arr_55 [i_0] [i_1] [i_10] [i_14] |= ((/* implicit */long long int) ((short) 1716299164U));
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) arr_37 [i_0] [i_10] [(_Bool)1] [i_10]))));
                    }
                    var_28 = ((/* implicit */short) var_6);
                    /* LoopSeq 1 */
                    for (long long int i_15 = 1; i_15 < 10; i_15 += 2) 
                    {
                        var_29 += ((/* implicit */signed char) var_0);
                        var_30 *= ((/* implicit */signed char) ((var_4) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-15)))));
                        arr_58 [i_0] [i_1] [(unsigned char)1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_1] [i_15 - 1] [i_15 - 1] [i_15] [i_15 - 1]))) >= (((2578668131U) / (2013265920U)))));
                        var_31 -= ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-97)) % (((/* implicit */int) (signed char)39))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 0; i_16 < 11; i_16 += 2) 
                    {
                        for (unsigned long long int i_17 = 0; i_17 < 11; i_17 += 2) 
                        {
                            {
                                arr_65 [i_16] [i_10] [i_0] [i_0] = ((/* implicit */long long int) ((signed char) arr_12 [i_0] [i_0] [i_0]));
                                var_32 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_10] [i_0])))))) != (((unsigned int) (_Bool)1))));
                                var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((arr_16 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_16 [i_1] [(signed char)2] [i_16] [i_17])) : (((/* implicit */int) arr_16 [i_0] [i_1] [i_16] [i_17])))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_18 = 3; i_18 < 10; i_18 += 2) 
    {
        arr_69 [i_18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)25257)) : (((/* implicit */int) var_9)))), (((/* implicit */int) ((arr_68 [i_18]) > (((/* implicit */long long int) ((/* implicit */int) var_5))))))))) ? (max((((/* implicit */unsigned long long int) max((arr_68 [i_18]), (arr_67 [i_18] [i_18])))), (min((var_4), (((/* implicit */unsigned long long int) arr_66 [i_18])))))) : (min((((/* implicit */unsigned long long int) (signed char)-27)), (((var_4) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_66 [i_18])))))))));
        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_68 [i_18])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_66 [i_18]))) : (arr_68 [i_18])));
        arr_70 [i_18] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_68 [i_18])), (((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)108)))))));
        arr_71 [i_18] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-72)) && (((/* implicit */_Bool) (signed char)(-127 - 1)))))), (arr_68 [i_18]))))));
    }
}
