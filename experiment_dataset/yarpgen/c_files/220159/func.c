/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220159
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */int) var_8)) - (((/* implicit */int) var_16))))))) ? (((unsigned long long int) ((((/* implicit */_Bool) 1382975054U)) ? (((/* implicit */unsigned long long int) 1382975029U)) : (var_13)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3U)) ? (2385762309U) : (((((/* implicit */_Bool) var_5)) ? (4294967287U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
    var_18 = ((/* implicit */int) var_2);
    var_19 = ((/* implicit */signed char) (-((~(((/* implicit */int) max((var_11), (var_16))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */_Bool) max(((+(((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) var_16))))))), (arr_2 [i_0] [i_1])));
                        var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_9)), (-1710010)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) - (arr_3 [i_3] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)46)))))) ? (((3U) & (((/* implicit */unsigned int) arr_2 [i_0] [i_1])))) : (((/* implicit */unsigned int) (-((+(((/* implicit */int) (unsigned char)140)))))))));
                        var_22 -= ((/* implicit */unsigned int) ((int) arr_2 [i_3] [i_0 + 1]));
                    }
                    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                        {
                            arr_13 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (1382975054U) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_13) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) >> (((((/* implicit */int) arr_4 [i_0 - 2])) - (7357)))))) && (((((/* implicit */_Bool) 14830516885437607790ULL)) || (((/* implicit */_Bool) arr_4 [i_0 + 1]))))));
                            var_25 = ((/* implicit */unsigned short) min((((/* implicit */short) (!(((/* implicit */_Bool) (~(18446744073709551612ULL))))))), (min((arr_4 [i_1]), (((/* implicit */short) ((arr_1 [15U] [16ULL]) < (var_4))))))));
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 10174374464113138073ULL)) ? (((/* implicit */int) (unsigned short)64723)) : (((/* implicit */int) var_3))))))) ? (min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_15)), (13U)))), (max((var_13), (((/* implicit */unsigned long long int) var_16)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) var_6)))));
                            var_28 = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_19 [i_2 + 2] [i_2 - 3] [i_2 - 2] [i_0 + 1] [i_0 - 2])))), (((/* implicit */int) (unsigned short)819))));
                            var_29 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_11)), (var_0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6307288071156575635LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5))))) : ((~(2574133755640792479ULL)))))));
                        }
                        arr_20 [i_1] [i_2] = ((/* implicit */unsigned int) arr_1 [i_4] [i_2]);
                        var_30 = ((/* implicit */unsigned long long int) arr_0 [i_2 + 1] [i_0 - 2]);
                    }
                    for (unsigned short i_8 = 0; i_8 < 20; i_8 += 2) /* same iter space */
                    {
                        var_31 = ((/* implicit */int) ((((/* implicit */_Bool) (-(1382975065U)))) ? (((arr_1 [i_0 + 1] [i_2 + 1]) + (var_4))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_13)) ? (arr_6 [i_8] [i_1] [(unsigned char)15] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65532))))) << (((((/* implicit */int) (signed char)61)) - (43))))))));
                        arr_24 [i_2] [i_1] [11U] [i_8] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) var_6)), ((+(((unsigned int) arr_16 [i_0 - 1] [i_1] [(signed char)5] [i_8]))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_9 = 0; i_9 < 20; i_9 += 2) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 3) 
                        {
                            var_32 = ((/* implicit */unsigned char) ((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_5 [(unsigned char)0] [i_1] [i_2])))) + ((+(((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_9]))))));
                            var_33 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (arr_0 [i_2] [i_0 - 2]) : (2032043139)));
                        }
                        for (unsigned long long int i_11 = 4; i_11 < 17; i_11 += 1) 
                        {
                            arr_33 [i_0 - 1] [i_0 + 1] [i_0] [i_2] [(signed char)8] [i_0 - 1] = ((/* implicit */int) (unsigned char)73);
                            arr_34 [i_0] [i_2] [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_21 [i_2] [i_2]))));
                            arr_35 [i_11] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) ((arr_16 [i_0] [i_1] [i_2] [i_2]) | (arr_16 [i_0] [i_1] [i_2] [i_9])));
                            arr_36 [5ULL] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) arr_18 [i_2] [i_11 - 2] [i_2] [i_0 - 2] [i_2 - 1]);
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 2) 
                        {
                            var_34 = ((/* implicit */signed char) var_9);
                            var_35 = ((/* implicit */signed char) (-(arr_14 [i_0 + 1] [(unsigned char)11] [i_0] [i_0 - 2] [i_0 - 1])));
                        }
                        for (int i_13 = 0; i_13 < 20; i_13 += 3) 
                        {
                            arr_44 [i_13] [i_2] [i_2] [i_0] = ((/* implicit */short) var_0);
                            var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) (_Bool)1))));
                        }
                        var_37 = ((/* implicit */_Bool) (((_Bool)0) ? (((var_7) / (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_0 + 1] [i_0 + 1] [i_2 - 3] [i_9] [i_1] [i_0 - 1] [(unsigned short)3]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)200)))));
                    }
                    var_38 = ((/* implicit */_Bool) 471656472U);
                    var_39 = ((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) (-(arr_3 [13ULL] [i_0])))))));
                    /* LoopSeq 2 */
                    for (int i_14 = 0; i_14 < 20; i_14 += 3) /* same iter space */
                    {
                        arr_48 [i_0 + 1] [i_2] [i_0] [i_14] = max(((+(arr_16 [i_0 - 2] [i_0 + 1] [i_0 + 1] [9ULL]))), (((/* implicit */unsigned long long int) var_5)));
                        var_40 = ((/* implicit */unsigned long long int) (-((~(min((arr_10 [i_14] [i_2] [i_1] [(unsigned short)19]), (((/* implicit */unsigned int) var_6))))))));
                    }
                    for (int i_15 = 0; i_15 < 20; i_15 += 3) /* same iter space */
                    {
                        var_41 ^= ((/* implicit */short) max(((unsigned char)29), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)0)))))) == (var_7))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_16 = 0; i_16 < 20; i_16 += 2) 
                        {
                            var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((var_2) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_1] [i_2])))))), (var_15)))) ? (((/* implicit */int) (unsigned char)164)) : ((-(((-1727524608) - (((/* implicit */int) (unsigned short)65529))))))));
                            var_43 = ((/* implicit */_Bool) min((max((min((2574133755640792479ULL), (((/* implicit */unsigned long long int) 2032043144)))), (((/* implicit */unsigned long long int) var_12)))), ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61377))) + (var_4)))))));
                        }
                    }
                }
            } 
        } 
    } 
}
