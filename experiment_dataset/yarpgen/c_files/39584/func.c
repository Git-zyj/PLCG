/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39584
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned long long int) -64LL);
        var_11 = ((/* implicit */unsigned long long int) max((arr_0 [i_0] [i_0]), ((unsigned short)24)));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (8261434966727260803ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))))));
    }
    var_12 = ((/* implicit */long long int) min(((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65520))) | (var_8))))), (((/* implicit */unsigned long long int) var_1))));
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_3 = 2; i_3 < 13; i_3 += 4) 
                {
                    for (unsigned long long int i_4 = 2; i_4 < 15; i_4 += 1) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) 
                            {
                                arr_17 [i_1] [i_1] [4U] [i_4] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3994653817U))));
                                var_13 = ((/* implicit */unsigned int) max((((unsigned long long int) var_7)), (((/* implicit */unsigned long long int) 300313483U))));
                                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) arr_16 [i_5] [i_4 - 2] [i_3] [(unsigned char)8] [i_1]))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 4294967295U)))) : (-6568418825987591751LL)));
                                var_15 = (((+(4261026502U))) << (((((((/* implicit */_Bool) (~(4230605271U)))) ? (8588886016LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))) - (8588885985LL))));
                            }
                            for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 2) /* same iter space */
                            {
                                var_16 = ((/* implicit */short) max(((~(((/* implicit */int) ((arr_16 [15LL] [i_4] [i_3 - 2] [i_2] [i_1]) <= (arr_18 [i_1])))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3))) - (arr_18 [i_1])))))))));
                                arr_21 [i_3] [i_2] [i_2] [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) == (((553676673U) & (arr_8 [i_6] [i_4 - 1] [i_3 - 1])))));
                                var_17 += ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)8184)), (var_6)))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))) : (((/* implicit */int) (unsigned short)9))));
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) < (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_8 [i_1] [(unsigned char)1] [i_1]) <= (1874263464U))))) == (((unsigned long long int) var_4)))))));
                            }
                            for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 2) /* same iter space */
                            {
                                arr_25 [i_7] [i_4] [13ULL] [13ULL] [i_1] &= ((/* implicit */unsigned int) (unsigned short)6);
                                arr_26 [(short)10] [i_7] [i_4] [i_3 + 3] [i_2] [i_1] = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_15 [i_4 - 2] [i_2] [i_3 + 1] [i_2] [i_7] [i_1] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [i_3 + 3] [i_4] [7LL]))) : (((((/* implicit */_Bool) arr_23 [i_7] [1LL] [15ULL] [(short)11] [6LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))) : (var_8)))))));
                                var_19 -= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_7]) <= (1783416025606742893ULL))))) : (arr_7 [i_1])))));
                            }
                            for (unsigned int i_8 = 0; i_8 < 16; i_8 += 4) 
                            {
                                var_20 = arr_12 [(unsigned char)7] [(unsigned char)7] [(unsigned char)8] [i_3];
                                var_21 = ((/* implicit */int) (((~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_4)) : (arr_24 [i_2] [i_3] [10ULL]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_4 + 1]))))))));
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_3 + 3])))))) < (min((((/* implicit */unsigned int) var_7)), (arr_6 [i_4 + 1])))));
                                var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_5)) != (((unsigned long long int) ((arr_16 [i_2] [i_2] [i_3] [i_3] [9ULL]) > (((/* implicit */unsigned long long int) arr_13 [i_1] [1U] [(unsigned char)3] [13U] [i_8] [i_4])))))));
                                arr_30 [i_8] [4] [i_3 + 2] [i_1] [i_1] = min((((unsigned long long int) 4294967290U)), (((/* implicit */unsigned long long int) min((((/* implicit */int) min((((/* implicit */short) arr_22 [i_1] [i_2] [6LL] [i_4] [i_8])), (arr_10 [i_8] [i_4] [i_2] [8ULL])))), ((+(((/* implicit */int) var_0))))))));
                            }
                            arr_31 [(unsigned short)15] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 13493745692562710207ULL))))) >> (((((((/* implicit */_Bool) var_0)) ? (arr_24 [i_3] [i_3 + 2] [i_3 + 3]) : (((/* implicit */unsigned long long int) arr_13 [14ULL] [i_3 - 1] [i_3 + 2] [i_3] [i_3 - 2] [5U])))) - (2648762989524199354ULL)))));
                            var_24 += ((/* implicit */unsigned long long int) ((long long int) ((arr_5 [i_1]) >= (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)7))))))));
                            var_25 = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) arr_28 [i_3 + 3] [i_2] [i_3] [i_4 - 1] [6])), (arr_16 [i_3 - 2] [i_3 - 2] [i_3 + 1] [i_4 - 2] [4LL]))) >= (((unsigned long long int) 497045300U))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_9 = 0; i_9 < 16; i_9 += 4) 
                {
                    var_26 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((32764U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)21))))))));
                    arr_35 [0U] [i_2] = ((/* implicit */unsigned int) arr_14 [0ULL] [i_2] [i_9] [i_2] [i_2]);
                    var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) min((var_1), (((unsigned int) min((((/* implicit */unsigned long long int) (unsigned char)14)), (arr_24 [i_9] [i_2] [i_1])))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_10 = 2; i_10 < 12; i_10 += 2) 
                    {
                        arr_40 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (~(32754U)));
                        arr_41 [i_9] [i_10 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) (~(arr_5 [i_2]))))) | (((/* implicit */int) ((unsigned short) (unsigned short)65489)))));
                        var_28 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_4 [2U]))) ? (2237820220U) : (min((2057147073U), (var_3))))));
                        var_29 = ((unsigned long long int) 18446744073709551597ULL);
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 2) 
                    {
                        arr_44 [i_1] [i_2] [i_2] [i_11] [14ULL] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)7)), (((((/* implicit */int) ((2501364990U) < (4294934540U)))) >> (((min((2501365009U), (4294967287U))) - (2501364990U)))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 3) 
                        {
                            arr_48 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((unsigned short)52), (((/* implicit */unsigned short) (short)-32256))))) ? (min((2057147096U), (((/* implicit */unsigned int) 1363584927)))) : (((/* implicit */unsigned int) -2147483638))));
                            var_30 &= ((/* implicit */unsigned long long int) 1073741696U);
                            arr_49 [(short)11] [i_2] [i_2] [i_2] [15LL] [5U] [1U] = min((((/* implicit */unsigned long long int) ((((2057147083U) >= (arr_6 [i_9]))) ? ((+(1775954905U))) : (var_5)))), (((((/* implicit */_Bool) arr_8 [i_1] [i_11] [i_12])) ? (((/* implicit */unsigned long long int) arr_8 [i_1] [i_12] [i_12])) : (arr_27 [i_1] [i_2] [i_9] [i_11] [11ULL] [(unsigned short)1]))));
                            var_31 = ((/* implicit */long long int) ((unsigned short) var_8));
                        }
                        for (long long int i_13 = 0; i_13 < 16; i_13 += 4) 
                        {
                            arr_53 [3U] [3U] = ((short) 0U);
                            var_32 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~((-(1300105144U))))))));
                            var_33 = ((/* implicit */int) arr_47 [i_1] [i_2] [i_11] [i_11] [i_13] [i_1]);
                            var_34 = ((/* implicit */int) 15420149418759271852ULL);
                            var_35 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)22942)), ((unsigned short)0)))) ? (((/* implicit */unsigned long long int) arr_51 [(unsigned char)13] [i_1])) : ((-(arr_45 [i_1] [i_2] [i_9] [i_11] [i_13])))));
                        }
                        var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(2147483640)))), (((((/* implicit */unsigned int) arr_20 [i_11] [9U] [12ULL] [i_9] [i_2] [i_1])) & (766131784U)))))) && (((/* implicit */_Bool) ((unsigned int) ((unsigned int) 2237820222U))))));
                    }
                }
                /* LoopNest 2 */
                for (long long int i_14 = 0; i_14 < 16; i_14 += 3) 
                {
                    for (unsigned int i_15 = 0; i_15 < 16; i_15 += 2) 
                    {
                        {
                            var_37 = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) ((arr_4 [i_14]) >= (((/* implicit */unsigned long long int) 2057147079U))))))), (((/* implicit */int) ((150704524U) <= (((/* implicit */unsigned int) 2014450692)))))));
                            var_38 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_32 [i_1] [i_2] [i_14] [5LL]))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_16 = 2; i_16 < 7; i_16 += 4) 
    {
        var_39 = arr_36 [i_16];
        arr_60 [3ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) ((long long int) arr_46 [i_16] [i_16 - 2] [i_16] [i_16 - 2] [i_16 - 1])))) && (((/* implicit */_Bool) ((min((((/* implicit */long long int) var_1)), (var_4))) / (((((/* implicit */_Bool) arr_5 [i_16 - 2])) ? (((/* implicit */long long int) 2147483625)) : (arr_9 [i_16] [i_16 + 3] [10ULL] [i_16]))))))));
        var_40 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_42 [i_16] [i_16 + 2])) : (((((/* implicit */_Bool) var_9)) ? (arr_23 [i_16] [i_16] [12ULL] [7] [i_16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1258408963048494489ULL))))))))));
    }
}
