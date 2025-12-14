/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26403
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            {
                var_13 += ((/* implicit */unsigned long long int) ((((min((var_4), (((/* implicit */long long int) var_7)))) + (((/* implicit */long long int) ((((/* implicit */int) var_3)) & (((/* implicit */int) arr_5 [i_1] [i_1 - 3] [i_1]))))))) << (((((/* implicit */int) max(((short)32763), (((/* implicit */short) var_9))))) - (32751)))));
                arr_6 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned short) (((-(((/* implicit */int) max((((/* implicit */unsigned char) var_9)), (var_11)))))) >= (((/* implicit */int) min(((unsigned char)239), ((unsigned char)13))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 11; i_2 += 3) 
    {
        for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 11; i_4 += 3) 
                {
                    for (int i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        {
                            arr_18 [i_3] = ((/* implicit */short) (+(((/* implicit */int) (short)32764))));
                            var_14 *= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_17 [(_Bool)1] [i_4 + 1] [i_4 + 1] [(_Bool)0] [i_4])), (arr_4 [(_Bool)1] [(_Bool)1])));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned int i_6 = 2; i_6 < 11; i_6 += 2) /* same iter space */
                {
                    var_15 = ((/* implicit */unsigned long long int) (~((~(min((((/* implicit */long long int) 4294967282U)), (var_0)))))));
                    arr_23 [i_3] [i_3] [i_2] = ((/* implicit */unsigned short) (((+(arr_8 [i_2 + 1] [i_6 - 1]))) * (((/* implicit */int) ((((/* implicit */long long int) min((var_12), (((/* implicit */int) arr_7 [i_2]))))) == (max((((/* implicit */long long int) (signed char)35)), (9223372036854775804LL))))))));
                    var_16 = ((/* implicit */unsigned char) max((((((/* implicit */int) (short)32760)) - (((/* implicit */int) arr_10 [i_3] [i_3] [i_3])))), (((/* implicit */int) max((arr_12 [i_2 - 1] [i_2 - 1] [i_2 + 1] [(unsigned char)0]), (arr_12 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]))))));
                    var_17 += ((/* implicit */unsigned int) ((long long int) (signed char)32));
                    /* LoopSeq 4 */
                    for (short i_7 = 2; i_7 < 11; i_7 += 3) 
                    {
                        var_18 |= ((/* implicit */unsigned long long int) arr_21 [i_2] [i_3] [i_6 - 1] [(_Bool)1]);
                        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) -2139493391)))) ? (((/* implicit */int) (signed char)107)) : (((/* implicit */int) max(((signed char)-115), ((signed char)38)))))))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) max((arr_22 [i_6] [4U]), (arr_28 [i_2] [i_3] [i_8])))), (min((min((arr_3 [i_2] [(unsigned char)8]), (((/* implicit */unsigned int) arr_7 [i_6 - 2])))), (((/* implicit */unsigned int) ((arr_4 [i_8] [i_8]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))))))));
                        var_21 = ((/* implicit */long long int) var_12);
                        var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) (signed char)7)) > (((/* implicit */int) (signed char)99))))), (max((((/* implicit */long long int) var_10)), (arr_15 [i_3] [i_3] [i_2 - 1])))));
                        arr_29 [i_3] [i_3] [i_6] [i_3] [i_6] [(unsigned char)6] = ((/* implicit */unsigned int) (signed char)121);
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (((_Bool)0) && (((/* implicit */_Bool) (signed char)123)))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        var_24 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [(short)4] [i_2 - 1] [i_6 - 1])) ? (var_12) : (((/* implicit */int) arr_16 [(short)4] [i_2 - 1] [(short)4]))));
                        var_25 -= ((/* implicit */unsigned char) ((short) arr_28 [i_2 - 1] [i_2 + 1] [i_9]));
                        var_26 *= ((/* implicit */long long int) arr_11 [i_9] [i_2 + 1]);
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_27 |= ((/* implicit */signed char) min((var_8), (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_7))) | (var_0))) == (((/* implicit */long long int) ((int) var_0))))))));
                        var_28 -= ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_2 + 1])) ? (((/* implicit */int) var_2)) : (-1008210061)))) + (min((((/* implicit */unsigned int) (short)-9574)), (arr_34 [i_6])))));
                    }
                }
                for (unsigned int i_11 = 2; i_11 < 11; i_11 += 2) /* same iter space */
                {
                    arr_40 [i_2] [i_2] [5LL] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */int) (short)-9584)) : (((/* implicit */int) (short)32742))));
                    var_29 = ((/* implicit */long long int) min(((signed char)(-127 - 1)), ((signed char)91)));
                    arr_41 [i_2] [i_3] [i_11 - 1] = ((/* implicit */signed char) ((((/* implicit */int) max((arr_38 [i_2 - 1]), (((/* implicit */unsigned short) arr_21 [i_11 - 1] [i_11] [i_11 - 1] [i_2 + 1]))))) - (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (short)32755)) - (32753)))))));
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_30 = ((/* implicit */unsigned char) ((unsigned long long int) ((2644644926U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)233))))));
                    arr_44 [(unsigned char)8] |= ((/* implicit */_Bool) ((unsigned int) (signed char)114));
                    var_31 = ((/* implicit */int) max((((((/* implicit */int) arr_9 [i_12] [i_3] [i_2])) < (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))), ((!(((/* implicit */_Bool) 18446744073709551612ULL))))));
                }
                /* vectorizable */
                for (long long int i_13 = 0; i_13 < 12; i_13 += 3) 
                {
                    var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((int) (short)32735)) <= (((/* implicit */int) var_7)))))));
                    var_33 = ((/* implicit */int) max((var_33), (((((/* implicit */int) arr_12 [i_2 - 1] [11ULL] [i_13] [i_13])) % (((/* implicit */int) (short)-32760))))));
                    var_34 = ((/* implicit */int) (-(arr_4 [i_3] [(_Bool)1])));
                    var_35 = arr_33 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_13] [(short)11] [i_2];
                    var_36 = ((/* implicit */int) var_6);
                }
                /* LoopNest 2 */
                for (long long int i_14 = 1; i_14 < 11; i_14 += 1) 
                {
                    for (unsigned short i_15 = 2; i_15 < 9; i_15 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) arr_46 [i_3] [i_15] [i_3] [i_15])), (arr_1 [i_2] [(unsigned char)2]))) % (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_10)), ((short)24999)))))))), (((max((18446744073709551599ULL), (((/* implicit */unsigned long long int) (short)-15915)))) << (((18446744073709551588ULL) - (18446744073709551585ULL)))))));
                            arr_53 [i_2] [i_3] [(_Bool)0] [i_3] [i_3] = ((/* implicit */_Bool) min((((((((/* implicit */_Bool) arr_5 [i_15] [i_3] [i_14 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_15] [i_3] [i_2]))) : (var_0))) ^ (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)200)), ((short)9971))))))), ((-(min((((/* implicit */long long int) (unsigned short)63190)), (-9223372036854775804LL)))))));
                            var_38 &= ((/* implicit */short) arr_33 [i_2] [(unsigned char)6] [i_2 - 1] [(unsigned char)6] [i_2 + 1] [i_2]);
                            /* LoopSeq 1 */
                            for (unsigned int i_16 = 0; i_16 < 12; i_16 += 1) 
                            {
                                arr_56 [i_2] [i_2] [i_2] [i_14] [i_14] [i_3] [i_16] = ((/* implicit */unsigned char) var_6);
                                var_39 = ((/* implicit */long long int) ((short) max((var_11), (((/* implicit */unsigned char) arr_49 [i_15 - 2] [i_14] [i_14 - 1] [i_2 + 1])))));
                                var_40 = ((/* implicit */int) max((((/* implicit */long long int) ((arr_34 [i_3]) > (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))), ((-((+(arr_15 [i_3] [i_3] [i_14 + 1])))))));
                                arr_57 [i_16] [(signed char)11] [i_3] [i_3] [i_3] [i_2 - 1] = ((/* implicit */int) max((((/* implicit */long long int) arr_5 [i_2 + 1] [i_3] [(unsigned char)7])), (var_5)));
                            }
                        }
                    } 
                } 
                var_41 = ((/* implicit */unsigned int) (((((_Bool)1) ? (((/* implicit */int) (short)-3313)) : (((/* implicit */int) (signed char)-90)))) <= (((/* implicit */int) max((((/* implicit */short) (signed char)116)), ((short)-32759))))));
            }
        } 
    } 
}
