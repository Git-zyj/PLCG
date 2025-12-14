/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228393
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
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned int) var_0));
            var_20 = ((/* implicit */signed char) (!(arr_4 [i_0 - 1])));
            /* LoopSeq 2 */
            for (signed char i_2 = 3; i_2 < 12; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_3 = 2; i_3 < 11; i_3 += 4) 
                {
                    for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        {
                            var_21 = (~(((/* implicit */int) arr_0 [i_0 + 3])));
                            var_22 *= ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36499))) : (-1570657323833877690LL))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_19)))))));
                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((var_14) + (2147483647))) >> (((1756835902) - (1756835893)))))) ? (((/* implicit */int) (short)30806)) : ((~(((/* implicit */int) var_3))))));
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_25 = ((/* implicit */unsigned int) (+(arr_15 [i_0 - 1] [i_0 + 1] [i_2 - 2] [i_2] [i_2 - 3] [i_2 - 2])));
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((arr_13 [i_5] [i_2 - 3] [i_1] [i_0 + 3] [i_0 + 1]) != (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
                        var_27 = ((/* implicit */unsigned char) (~(-1756835902)));
                        arr_20 [i_0 + 3] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (!(((_Bool) arr_4 [i_5])));
                    }
                    for (unsigned short i_7 = 4; i_7 < 10; i_7 += 4) 
                    {
                        var_28 = ((/* implicit */signed char) (~(((/* implicit */int) arr_17 [i_2 + 1]))));
                        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) * (var_1)))) ? (((/* implicit */int) arr_2 [i_1])) : (((int) arr_22 [i_1])))))));
                        var_30 = ((/* implicit */int) ((unsigned int) var_7));
                    }
                    arr_24 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */signed char) (-(var_8)));
                }
                /* LoopSeq 3 */
                for (signed char i_8 = 0; i_8 < 13; i_8 += 4) 
                {
                    var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1570657323833877684LL)) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) var_17))))) ? (((var_17) ? (var_13) : (var_13))) : (((/* implicit */unsigned long long int) (+(2369707355U))))));
                    arr_27 [i_0 + 3] [i_1] [i_2 - 1] [7U] [i_8] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_13 [i_0] [i_0] [i_0] [i_0 - 1] [i_0])) - (var_0)))) ? (12220285472448093597ULL) : (((/* implicit */unsigned long long int) ((var_10) ? (-1570657323833877673LL) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_8] [i_1] [i_8] [7U] [i_1]))))))));
                    arr_28 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_0 + 1]))));
                }
                for (int i_9 = 0; i_9 < 13; i_9 += 4) 
                {
                    arr_33 [i_9] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)0))));
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_36 [i_0] [i_0] [i_0] [i_0 + 4] = (!(((_Bool) 1756835891)));
                        arr_37 [i_0] [i_9] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) var_1)))));
                        arr_38 [i_10] [i_9] [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned int) var_15);
                    }
                    var_32 = ((((/* implicit */_Bool) arr_19 [i_0 + 4])) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_1] [i_2 + 1] [i_9])) : (((/* implicit */int) arr_16 [i_0 + 4] [i_0 + 4] [i_0] [i_0 + 2] [i_0 + 1] [i_0])))));
                    arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_0);
                }
                for (int i_11 = 0; i_11 < 13; i_11 += 4) 
                {
                    arr_43 [i_0] [i_1] [i_2] [i_2] [i_0] [i_11] = ((/* implicit */_Bool) ((unsigned char) arr_13 [i_0] [i_0] [i_0 + 4] [i_2 + 1] [i_2]));
                    var_33 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                    var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 615275135)) ? (((/* implicit */int) (unsigned char)157)) : (((/* implicit */int) (unsigned char)255)))))));
                }
            }
            for (int i_12 = 0; i_12 < 13; i_12 += 4) 
            {
                /* LoopSeq 1 */
                for (long long int i_13 = 0; i_13 < 13; i_13 += 4) 
                {
                    var_35 *= ((/* implicit */_Bool) var_11);
                    arr_50 [i_0] = ((/* implicit */long long int) (~((~(var_13)))));
                    /* LoopSeq 3 */
                    for (unsigned int i_14 = 0; i_14 < 13; i_14 += 4) 
                    {
                        var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)52586)))))));
                        var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */long long int) var_1)) : (var_19)));
                        arr_54 [i_1] [i_12] [i_13] [i_0] = ((/* implicit */_Bool) 2047LL);
                        arr_55 [i_0] [i_0] [i_0 + 4] [i_0] [i_14] [i_13] = ((/* implicit */signed char) ((_Bool) ((var_14) < (((/* implicit */int) (unsigned char)152)))));
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_38 *= (~(((unsigned int) var_5)));
                        var_39 = (signed char)3;
                        arr_59 [i_15] [i_0] [3] [i_13] [i_12] [i_0] [i_0] = ((/* implicit */long long int) (+((+(((/* implicit */int) arr_16 [i_15] [i_13] [i_12] [i_1] [i_1] [i_0 + 2]))))));
                    }
                    for (int i_16 = 2; i_16 < 10; i_16 += 4) 
                    {
                        arr_62 [i_0] [i_12] [i_1] [i_0] = ((/* implicit */long long int) var_18);
                        var_40 = ((/* implicit */unsigned long long int) ((((unsigned int) var_16)) | (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned short i_17 = 0; i_17 < 13; i_17 += 4) 
                    {
                        var_41 *= ((/* implicit */unsigned char) arr_13 [i_0 + 2] [i_1] [i_12] [i_13] [i_17]);
                        var_42 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_61 [i_0 - 1] [i_12] [(signed char)1]))));
                    }
                    for (unsigned long long int i_18 = 0; i_18 < 13; i_18 += 4) /* same iter space */
                    {
                        var_43 = ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((/* implicit */int) arr_57 [i_0 + 4] [i_0] [i_0 + 3] [i_0 + 4] [i_0] [i_0] [i_0 - 1])) : (((int) var_15)));
                        var_44 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1])) >> (((/* implicit */int) arr_64 [i_0 + 4] [i_0 + 3] [i_0 + 3] [i_0] [i_0 + 2] [i_0] [i_0 + 4]))));
                        arr_68 [i_0] [i_1] = ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0 + 4] [i_0] [i_0 - 1]);
                        var_45 = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) 0LL))) >= ((~(((/* implicit */int) arr_26 [i_0 + 1] [i_12] [i_12]))))));
                    }
                    for (unsigned long long int i_19 = 0; i_19 < 13; i_19 += 4) /* same iter space */
                    {
                        arr_71 [i_0] [i_1] [i_1] [i_12] [i_12] [i_13] [i_0] = ((/* implicit */signed char) (+(arr_45 [11U] [i_0 + 3] [i_0 + 2] [i_0 + 2])));
                        arr_72 [i_0] = ((long long int) ((unsigned long long int) 1756835903));
                    }
                }
                /* LoopSeq 1 */
                for (unsigned char i_20 = 0; i_20 < 13; i_20 += 4) 
                {
                    var_46 = ((/* implicit */unsigned int) max((var_46), (((/* implicit */unsigned int) ((signed char) arr_75 [i_0] [i_0 - 1] [i_1] [i_12] [i_12] [i_20])))));
                    arr_76 [i_20] [i_0] [i_0] [i_0 + 3] = ((/* implicit */unsigned long long int) var_15);
                    var_47 = ((/* implicit */int) arr_70 [i_0] [i_1] [i_1] [i_12] [i_12] [i_20]);
                    var_48 *= ((/* implicit */unsigned int) ((1886982377) | (1527879351)));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_21 = 0; i_21 < 13; i_21 += 4) 
                {
                    for (unsigned int i_22 = 0; i_22 < 13; i_22 += 4) 
                    {
                        {
                            arr_81 [i_0] [i_0] [i_12] [i_21] [i_22] = ((/* implicit */signed char) ((((/* implicit */_Bool) 615275118)) ? (-438374390) : (-753164336)));
                            var_49 = ((/* implicit */short) ((((arr_42 [i_0 + 1] [i_1] [i_12] [i_12]) + (2147483647))) >> (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            }
            var_50 = ((/* implicit */_Bool) (-(((/* implicit */int) var_11))));
            var_51 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_15) : (((/* implicit */long long int) var_14)))))));
        }
        /* LoopSeq 1 */
        for (signed char i_23 = 0; i_23 < 13; i_23 += 4) 
        {
            var_52 = ((/* implicit */unsigned long long int) ((max((((unsigned int) (unsigned short)52571)), (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)12840)), (1065312569)))))) > (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
            var_53 = ((((/* implicit */_Bool) min((arr_12 [i_0]), (-1756835885)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_12 [i_0]) : (((/* implicit */int) var_10))))));
            var_54 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(max((var_9), (arr_11 [i_23] [i_23] [i_0] [i_0] [i_0] [i_0])))))) && (((/* implicit */_Bool) ((signed char) 1136266302)))));
        }
    }
    var_55 = ((/* implicit */unsigned int) var_8);
    var_56 = ((/* implicit */unsigned long long int) max((var_0), (((/* implicit */long long int) var_18))));
    var_57 = ((/* implicit */signed char) (+(((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (483638921U))) ^ (((/* implicit */unsigned int) var_14))))));
}
