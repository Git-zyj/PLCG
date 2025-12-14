/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215213
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
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) > (arr_0 [i_2 + 1])))), (((((/* implicit */_Bool) arr_0 [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (4155684381163341764LL)))));
                    arr_9 [i_0] [i_0] = ((/* implicit */_Bool) 7705064479490806338LL);
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) != ((+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) var_8))))))));
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 19; i_3 += 3) 
    {
        for (signed char i_4 = 1; i_4 < 21; i_4 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    for (signed char i_6 = 1; i_6 < 21; i_6 += 1) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                            {
                                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) var_1))));
                                var_20 -= ((/* implicit */_Bool) (-(537743208646195923LL)));
                                var_21 = ((/* implicit */unsigned short) min((max((-537743208646195936LL), (((/* implicit */long long int) arr_15 [i_3 - 1] [i_3 - 1] [i_3 - 1])))), (((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_3] [i_3 - 1] [i_3 - 1])) - (((/* implicit */int) var_11)))))));
                            }
                            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                            {
                                arr_26 [i_3] [i_4 - 1] [i_4] [i_4] [i_4] = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (min((12710506466757424849ULL), (((/* implicit */unsigned long long int) (signed char)49)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                            }
                            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                            {
                                arr_30 [i_3 + 1] [i_3] [i_5] [i_6] [i_9] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_20 [i_3] [(signed char)4] [i_3 + 1] [i_4])) > (((/* implicit */int) (unsigned short)21683)))) ? (((((/* implicit */_Bool) var_9)) ? ((+(((/* implicit */int) (unsigned short)30)))) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_15 [i_4] [i_4] [i_4])) > (((/* implicit */int) arr_27 [i_9] [i_6] [5U] [i_4] [i_3] [i_3]))))) != (((((/* implicit */_Bool) arr_24 [i_3] [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)1)))))))));
                                var_23 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (min((arr_23 [i_3] [i_4 + 1] [i_5] [i_3] [i_5] [i_5] [i_5]), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) min((var_2), (var_15))))))) ? (((/* implicit */int) ((((/* implicit */long long int) 1202388969)) > (min((-8506394299482598612LL), (((/* implicit */long long int) -878371621))))))) : (((/* implicit */int) var_9))));
                                var_24 = ((/* implicit */int) ((3474578326587989187LL) != (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) var_2))))))));
                                var_25 &= ((/* implicit */unsigned short) arr_22 [i_5] [i_5] [i_5]);
                            }
                            for (int i_10 = 2; i_10 < 21; i_10 += 3) 
                            {
                                arr_35 [i_3] [i_3] [8] [i_3] = ((/* implicit */_Bool) arr_33 [i_3] [i_3] [(unsigned short)0]);
                                var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((long long int) var_16)))));
                                arr_36 [i_3] [i_4] [12] [i_3] [i_4] [i_10 - 1] = ((/* implicit */unsigned short) -119092133);
                            }
                            arr_37 [i_3] [i_3] [i_4 + 1] [i_3] [i_6 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((537743208646195913LL), (((/* implicit */long long int) var_9))))) | (((arr_21 [i_3] [i_3] [(unsigned short)14] [i_3 + 1] [i_3] [2LL] [i_3 + 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))) ? (((/* implicit */int) ((((/* implicit */int) var_13)) > (((/* implicit */int) ((signed char) (unsigned short)65531)))))) : (((/* implicit */int) ((_Bool) arr_12 [i_3 + 3] [i_4] [i_3])))));
                            /* LoopSeq 4 */
                            for (short i_11 = 0; i_11 < 22; i_11 += 3) 
                            {
                                var_27 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_15 [i_3] [i_4 - 1] [i_5]))) ? (((/* implicit */int) ((unsigned short) (unsigned short)43381))) : (((/* implicit */int) var_6))))), (35184372088768LL)));
                                arr_40 [i_3] [i_3] [i_11] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2742))) > (arr_23 [i_3 + 1] [i_4] [i_3] [i_4 - 1] [i_11] [i_3 + 2] [14U])))), (((((((/* implicit */int) arr_33 [i_4] [i_4] [i_4])) > (((/* implicit */int) var_0)))) ? (((((/* implicit */_Bool) (short)1047)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)73))) : (var_2))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-64)))))));
                            }
                            /* vectorizable */
                            for (long long int i_12 = 0; i_12 < 22; i_12 += 1) 
                            {
                                arr_44 [i_3] [i_3] [i_5] [13] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_6 + 1] [i_4 + 1] [i_4 + 1] [i_3 - 1] [i_3 - 1])) ? (-537743208646195892LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                                var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) arr_10 [i_3] [i_3 + 1]))));
                            }
                            /* vectorizable */
                            for (signed char i_13 = 0; i_13 < 22; i_13 += 2) 
                            {
                                arr_49 [i_3] [i_4] [i_5] [i_6] [i_13] = ((/* implicit */unsigned char) var_2);
                                var_29 = ((/* implicit */unsigned char) (+(arr_12 [i_4 + 1] [i_4] [i_3])));
                                arr_50 [i_3] [i_4 + 1] [i_5] [i_3] [i_13] = ((/* implicit */long long int) ((arr_45 [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 + 1]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0))));
                                var_30 = ((/* implicit */unsigned char) -537743208646195920LL);
                                arr_51 [i_3] [i_4] [i_5] [i_6] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -8506394299482598612LL)) ? (var_15) : (arr_28 [i_3] [i_4] [i_5] [i_3 + 2] [i_13])));
                            }
                            /* vectorizable */
                            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                            {
                                arr_56 [i_3 - 1] [i_4] [i_3] [i_6] [i_14] [i_14] = ((/* implicit */unsigned short) arr_25 [i_3]);
                                var_31 = ((/* implicit */int) arr_21 [i_3] [i_4] [i_4] [i_5] [i_5] [i_6] [i_14]);
                            }
                            /* LoopSeq 1 */
                            for (unsigned char i_15 = 0; i_15 < 22; i_15 += 2) 
                            {
                                arr_60 [i_3] [i_3] [i_5] [i_5] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (9223372036854775795LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) var_16)) ? (-537743208646195913LL) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) : (((/* implicit */long long int) ((/* implicit */int) (short)24983)))))) ? (min(((-(((/* implicit */int) var_3)))), (((/* implicit */int) ((-4155684381163341768LL) != (var_2)))))) : (((/* implicit */int) (!(((5908103609756681367ULL) != (((/* implicit */unsigned long long int) var_4)))))))));
                                arr_61 [i_3] [i_4] [i_5] [i_3] = ((/* implicit */_Bool) ((((-537743208646195913LL) > (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)21597))))))) ? ((((~(arr_28 [i_5] [i_6 + 1] [i_15] [18] [i_4 + 1]))) >> (((((/* implicit */int) arr_14 [i_6 + 1] [i_4 - 1] [i_3])) - (17422))))) : (((/* implicit */long long int) (~(var_10))))));
                                arr_62 [i_3 + 2] [i_4] [i_5] [i_3] [i_6] [i_4] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (short)-911))) ? (((((((/* implicit */int) arr_33 [i_3] [i_3 + 3] [i_3])) + (2147483647))) << (((var_10) - (1457464064))))) : (((/* implicit */int) (unsigned char)192))));
                                arr_63 [i_4] [i_3] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) -1252696408)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) arr_58 [(short)16] [i_3])) : (var_15)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) > (var_15)))) : (1209732030))) : (((/* implicit */int) var_3))));
                                var_32 -= ((/* implicit */int) min(((unsigned short)65517), (((/* implicit */unsigned short) (signed char)105))));
                            }
                        }
                    } 
                } 
                arr_64 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) arr_15 [i_3] [i_3] [i_4]);
                var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) ((_Bool) min(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_3] [i_3] [i_4] [i_4]))) : (var_4))), (((/* implicit */long long int) min((1202388964), (((/* implicit */int) (_Bool)1)))))))))));
            }
        } 
    } 
    var_34 = ((/* implicit */unsigned short) var_10);
}
