/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25938
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
    var_17 += ((/* implicit */signed char) (((_Bool)1) ? (((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (((/* implicit */int) (unsigned short)57716)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) ((short) var_14)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 2; i_2 < 9; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 1; i_3 < 8; i_3 += 2) 
                    {
                        var_18 += ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_2])) : (arr_1 [i_2 + 1] [i_2 + 1]))));
                        var_19 = ((/* implicit */int) (unsigned short)15);
                        var_20 = ((/* implicit */_Bool) max((var_20), (((((/* implicit */_Bool) 11588568030854217732ULL)) || (((/* implicit */_Bool) (signed char)24))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 3; i_4 < 9; i_4 += 1) 
                        {
                            var_21 = ((((((/* implicit */_Bool) 890557602U)) || (((/* implicit */_Bool) arr_8 [i_4] [i_3])))) || (((/* implicit */_Bool) (signed char)-21)));
                            var_22 *= (signed char)36;
                        }
                        for (short i_5 = 0; i_5 < 10; i_5 += 1) 
                        {
                            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [i_5])) ? (arr_11 [i_0] [(unsigned char)0] [(unsigned char)0] [i_3 + 1] [i_5]) : (((/* implicit */int) var_9))))) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_2 - 2] [i_3 - 1])));
                            var_24 = ((/* implicit */int) arr_4 [i_0] [i_3] [i_0]);
                            var_25 = ((((/* implicit */int) arr_13 [i_5] [i_1] [i_2 - 1] [i_1] [i_0])) % (((/* implicit */int) var_4)));
                        }
                    }
                    for (short i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) arr_12 [i_6]))));
                        var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_2] [i_1] [i_2 - 2] [i_2 - 2])) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) arr_13 [i_2] [i_1] [i_2 - 1] [i_2 - 2] [i_2 - 1]))))) ? (((((/* implicit */int) (signed char)96)) ^ (((/* implicit */int) (signed char)-20)))) : (((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_2 - 1])) ? (((/* implicit */int) (unsigned short)40668)) : (((/* implicit */int) arr_13 [i_2] [i_1] [i_2 - 2] [i_2 - 2] [i_2 - 1])))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 1; i_7 < 9; i_7 += 1) 
                    {
                        for (int i_8 = 0; i_8 < 10; i_8 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned long long int) ((short) (_Bool)1));
                                var_29 *= ((/* implicit */short) max((((int) 0)), (((/* implicit */int) ((((/* implicit */int) (signed char)-29)) >= (((/* implicit */int) (_Bool)1)))))));
                                var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) arr_10 [i_2] [i_7] [i_2] [i_1] [i_2]))));
                                var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) (signed char)54))));
                            }
                        } 
                    } 
                    var_32 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) max(((signed char)121), ((signed char)-1)))) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_2 - 1] [i_2 - 2]))))) ? (((/* implicit */unsigned int) var_2)) : (min((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-36))) : (arr_20 [i_2] [i_1] [i_2]))), (((((/* implicit */_Bool) arr_17 [i_0] [i_2] [i_2] [(unsigned short)6])) ? (arr_20 [i_2] [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))))));
                    arr_23 [i_0] [i_1] [i_1] = arr_7 [i_0] [i_1] [i_0];
                    var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)12027))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_1] [(short)7] [i_0] [i_0] [i_2 + 1])) ? (arr_17 [i_2] [i_1] [(short)3] [i_1]) : (arr_17 [i_0] [i_1] [i_2 + 1] [i_1]))))));
                }
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned short i_9 = 0; i_9 < 10; i_9 += 1) 
                {
                    arr_27 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)20152)) ? (arr_21 [i_9] [i_1] [i_0] [i_0] [i_0] [i_0]) : ((-(((/* implicit */int) var_8))))));
                    var_34 = ((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) var_11)));
                    var_35 = ((/* implicit */int) min((var_35), (((((/* implicit */_Bool) 3271584407U)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-23))) != (890557602U)))) : (((/* implicit */int) (unsigned short)39643))))));
                    var_36 *= ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-1))));
                    var_37 *= ((/* implicit */short) (_Bool)1);
                }
                for (unsigned long long int i_10 = 1; i_10 < 9; i_10 += 2) 
                {
                    arr_30 [i_0] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_7 [i_10 - 1] [i_0] [i_0])) / (arr_29 [i_1] [i_1] [i_0] [i_1])))) ? (((((/* implicit */_Bool) arr_7 [i_10 - 1] [i_1] [i_10 + 1])) ? (arr_7 [i_10 + 1] [i_10 + 1] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)56))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2164057753U)) ? (((/* implicit */int) arr_16 [i_10 + 1] [i_0] [i_10] [i_0])) : (((/* implicit */int) var_13)))))));
                    var_38 *= arr_2 [i_10 + 1] [(short)2] [i_10 - 1];
                    var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) ((arr_10 [(unsigned short)6] [i_0] [i_1] [i_10] [i_10]) < (((((/* implicit */_Bool) 2130909543U)) ? (arr_10 [4] [i_1] [i_10 - 1] [i_10 + 1] [i_10 + 1]) : (arr_10 [8U] [i_0] [i_0] [i_1] [i_10 - 1]))))))));
                    var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)34)) ? (((((/* implicit */_Bool) (signed char)42)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)-71)))) : (((/* implicit */int) ((short) (signed char)44)))))) ? (((((/* implicit */_Bool) ((unsigned int) arr_9 [i_0] [i_0]))) ? (arr_11 [i_10] [i_10 - 1] [i_10 - 1] [i_10] [i_10]) : (min((((/* implicit */int) (short)(-32767 - 1))), (arr_21 [i_0] [i_1] [i_1] [i_1] [i_10] [i_0]))))) : (max((((1984) ^ (1328192938))), (((((/* implicit */int) arr_24 [i_10] [i_1] [i_0])) / (980519904)))))));
                }
                for (int i_11 = 3; i_11 < 6; i_11 += 3) 
                {
                    var_41 *= ((/* implicit */unsigned long long int) var_8);
                    var_42 = arr_21 [i_1] [i_1] [2U] [i_11] [i_11] [i_1];
                    var_43 *= ((/* implicit */short) -980519905);
                }
                for (unsigned short i_12 = 0; i_12 < 10; i_12 += 1) 
                {
                    arr_36 [7] [i_1] [7] [i_1] = ((((/* implicit */int) arr_12 [i_12])) > (((/* implicit */int) var_12)));
                    var_44 = ((((var_3) <= (((/* implicit */int) (_Bool)1)))) ? (((((/* implicit */_Bool) (signed char)-45)) ? (((/* implicit */int) arr_9 [i_1] [i_12])) : (((/* implicit */int) arr_9 [i_0] [i_0])))) : (((((/* implicit */int) arr_3 [i_0] [i_12])) | (((/* implicit */int) arr_3 [i_0] [i_1])))));
                    var_45 *= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_12]))) / (max((arr_5 [i_0] [6U] [i_1] [i_12]), (((/* implicit */unsigned long long int) arr_21 [i_0] [1LL] [i_12] [i_12] [i_1] [i_1]))))));
                }
                var_46 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)(-32767 - 1))) % (((/* implicit */int) ((signed char) (signed char)-1)))))) ? (((/* implicit */int) (unsigned char)13)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned short)38885))))) ? (((/* implicit */int) min(((short)32767), (((/* implicit */short) arr_14 [i_0] [i_0] [i_1] [i_1]))))) : (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) arr_32 [i_1] [i_1] [(unsigned short)4])) : (((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
    var_47 = ((/* implicit */signed char) min((var_47), (((/* implicit */signed char) ((int) var_3)))));
    var_48 += ((/* implicit */int) ((unsigned long long int) ((var_12) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((-2422617589700224613LL) == (((/* implicit */long long int) -980519904))))))));
    var_49 = ((/* implicit */signed char) min((var_49), (((/* implicit */signed char) var_16))));
}
