/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191755
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
    for (long long int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            var_18 *= ((/* implicit */_Bool) (+(arr_2 [i_0 + 1])));
                            arr_13 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) (~(-6888628680565406806LL)));
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) * (var_14)));
                            var_20 *= ((/* implicit */unsigned long long int) (unsigned char)124);
                        }
                        for (signed char i_5 = 4; i_5 < 23; i_5 += 2) /* same iter space */
                        {
                            arr_16 [i_3] [i_3] [(unsigned char)9] [i_3] [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) ((arr_11 [i_0 - 1] [(unsigned char)0] [i_3] [i_5 - 1] [i_3]) && ((!((_Bool)1))))))));
                            var_21 = ((/* implicit */unsigned int) ((arr_0 [i_0]) + (((/* implicit */int) ((max((((/* implicit */long long int) (unsigned char)63)), (var_10))) != ((~(-6888628680565406833LL))))))));
                            var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) (+(0ULL)))))));
                            var_23 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */long long int) ((((/* implicit */_Bool) max((-1871217165), (((/* implicit */int) (unsigned char)130))))) ? (arr_15 [i_0 + 1]) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)30262))))))))));
                        }
                        for (signed char i_6 = 4; i_6 < 23; i_6 += 2) /* same iter space */
                        {
                            var_24 &= ((/* implicit */long long int) (-((~(arr_6 [i_0 + 1] [i_0 + 1])))));
                            var_25 = ((/* implicit */unsigned int) min(((unsigned char)255), (min((((/* implicit */unsigned char) var_6)), (arr_7 [i_2] [i_2] [i_2] [i_2])))));
                            var_26 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))))), (((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0 + 1] [i_6] [i_0] [i_0]))) : (var_14))))))));
                        }
                        /* vectorizable */
                        for (signed char i_7 = 0; i_7 < 24; i_7 += 4) 
                        {
                            var_27 = ((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))));
                            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (_Bool)1))));
                        }
                        arr_23 [i_3] = ((/* implicit */unsigned char) ((((-1) != ((-2147483647 - 1)))) ? (((var_14) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25064))))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)124), (((unsigned char) (_Bool)1))))))));
                        var_29 = ((/* implicit */short) var_14);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_2] [i_2] [i_2] [10LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : ((~(arr_24 [(signed char)23] [i_1] [i_1] [i_1] [i_1] [i_1])))));
                            arr_26 [i_3] = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                            var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 2) 
                        {
                            var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (short)-32446)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3)))) + (2147483647))) << (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_9]))) : (arr_4 [i_0 + 1] [i_0 + 1] [i_0]))) - (7378LL))))))));
                            var_33 = ((/* implicit */short) (~((~(var_2)))));
                            var_34 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned int) (short)31268))))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_5)))) & (((((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned int) var_8))))) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) arr_3 [i_0]))))));
                        }
                        var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) var_5))));
                    }
                    /* vectorizable */
                    for (unsigned char i_10 = 1; i_10 < 23; i_10 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_11 = 0; i_11 < 24; i_11 += 2) /* same iter space */
                        {
                            var_36 = ((/* implicit */unsigned short) ((((/* implicit */int) var_13)) != (var_4)));
                            var_37 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) 2147483625)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))));
                            var_38 = ((/* implicit */unsigned short) ((var_6) ? ((+(((/* implicit */int) (unsigned char)141)))) : ((-(((/* implicit */int) arr_7 [i_11] [i_10] [i_2] [i_0]))))));
                        }
                        for (signed char i_12 = 0; i_12 < 24; i_12 += 2) /* same iter space */
                        {
                            var_39 = ((/* implicit */unsigned short) var_12);
                            arr_37 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_5))));
                            var_40 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) 1073741823LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)103))) : (-3132154841046970553LL))) | (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-62)))))));
                            var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) 1754515698U))));
                        }
                        var_42 = ((/* implicit */_Bool) (short)(-32767 - 1));
                        /* LoopSeq 3 */
                        for (unsigned int i_13 = 1; i_13 < 20; i_13 += 4) 
                        {
                            var_43 *= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1])) ? (((((/* implicit */_Bool) -1490151088)) ? (((/* implicit */int) var_6)) : (1071218698))) : (((/* implicit */int) (unsigned char)212))));
                            var_44 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)220)) >> (((((/* implicit */int) arr_27 [i_10 - 1] [i_10 - 1] [i_2] [i_10 + 1] [i_13 - 1])) - (7371)))));
                        }
                        for (int i_14 = 0; i_14 < 24; i_14 += 2) 
                        {
                            arr_42 [i_14] [i_10] [i_10 - 1] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) arr_39 [i_0 - 1] [(short)20] [i_0 - 1]);
                            arr_43 [i_0] [i_1] [i_1] [i_10 + 1] [i_0] = (-(((((/* implicit */_Bool) arr_22 [i_10] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_6 [(short)13] [i_1]))));
                        }
                        for (unsigned short i_15 = 0; i_15 < 24; i_15 += 1) 
                        {
                            var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) var_0))));
                            var_46 = ((/* implicit */signed char) ((unsigned short) arr_4 [i_15] [i_10 + 1] [i_0 + 1]));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_16 = 0; i_16 < 24; i_16 += 1) 
                        {
                            var_47 = (~(((((/* implicit */_Bool) 15U)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (unsigned short)65535)))));
                            var_48 = (~(((/* implicit */int) (unsigned char)255)));
                            arr_48 [i_0] [i_2] [i_16] [i_10] [i_16] = ((/* implicit */int) var_6);
                            var_49 -= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (signed char)-10)) ? (4294967295U) : (((/* implicit */unsigned int) (-2147483647 - 1))))));
                        }
                        var_50 = ((/* implicit */short) (~(((((/* implicit */_Bool) -578172150865800578LL)) ? (var_14) : (3801277584U)))));
                    }
                    /* vectorizable */
                    for (int i_17 = 2; i_17 < 22; i_17 += 4) 
                    {
                        arr_51 [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_19 [i_1] [i_1]))));
                        arr_52 [i_17] [i_17] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [(signed char)0] [i_17] [i_0 + 1] [13LL]))));
                        var_51 = ((/* implicit */long long int) min((var_51), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-6)))))));
                        var_52 = ((/* implicit */unsigned short) min((var_52), (((/* implicit */unsigned short) (~(var_14))))));
                    }
                    arr_53 [i_0] = ((/* implicit */short) var_12);
                    var_53 = ((/* implicit */unsigned char) max((var_53), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_2] [i_2]))) > (((arr_25 [i_0] [(_Bool)1] [(_Bool)1] [i_2]) - (((/* implicit */long long int) 2147483647))))))), (((((var_12) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (signed char)26)) : ((-2147483647 - 1))))) : (var_14))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_18 = 0; i_18 < 20; i_18 += 1) 
    {
        for (long long int i_19 = 0; i_19 < 20; i_19 += 1) 
        {
            for (unsigned char i_20 = 0; i_20 < 20; i_20 += 4) 
            {
                {
                    var_54 = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned char)193)), ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))));
                    /* LoopNest 2 */
                    for (long long int i_21 = 0; i_21 < 20; i_21 += 4) 
                    {
                        for (long long int i_22 = 0; i_22 < 20; i_22 += 1) 
                        {
                            {
                                arr_70 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] = ((/* implicit */unsigned int) (unsigned char)216);
                                arr_71 [i_22] [(signed char)12] [(signed char)3] [i_19] [(signed char)12] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [(signed char)12] [i_22])) | (max((((/* implicit */int) arr_14 [i_20] [i_20])), (var_4))))))));
                                var_55 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_18] [i_19] [i_20] [i_18])) ? (((var_16) ^ (((/* implicit */unsigned int) var_17)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_68 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_18])) ? (((/* implicit */long long int) var_7)) : (1073741823LL)))) ? (-956007645) : (2147483647))) : (((((/* implicit */int) max((((/* implicit */unsigned char) arr_11 [i_18] [i_18] [i_21] [i_18] [i_18])), ((unsigned char)5)))) << (((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-90)), ((unsigned short)11669)))) - (65441)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
