/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211161
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
    var_13 = ((/* implicit */unsigned long long int) var_10);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        var_14 = ((/* implicit */unsigned long long int) (short)17575);
                        arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_3 + 2]))));
                        arr_12 [i_1] [i_0] [i_1] [i_1] [i_3 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0] [i_3]))))) ? (arr_3 [i_3] [i_1] [i_3 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-36)))));
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 4; i_4 < 19; i_4 += 1) 
                        {
                            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-79)) - (((/* implicit */int) (unsigned char)199))))) ? (((/* implicit */int) (unsigned short)65534)) : (((/* implicit */int) (!((_Bool)1)))))))));
                            arr_15 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)128)) + (((/* implicit */int) (short)32767))));
                            arr_16 [i_0] [i_0] [i_2] [i_0] [i_1] [i_3] [i_0] = ((/* implicit */_Bool) (-((~(((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-22906)))))));
                            var_17 = ((/* implicit */long long int) ((arr_2 [i_4 - 4]) == (((/* implicit */long long int) (-(((/* implicit */int) (short)26652)))))));
                        }
                        for (unsigned char i_5 = 2; i_5 < 20; i_5 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned short) arr_5 [i_0] [i_0]);
                            var_19 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_2] [i_5 - 2] [i_5 + 1]))));
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) < (arr_18 [i_1] [i_1] [i_0] [i_0] [i_5 + 1]))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)37))) & (0ULL))) : (var_7)))));
                            var_21 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_1])) : (((/* implicit */int) (_Bool)1))));
                            var_22 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)135))));
                        }
                        for (unsigned char i_6 = 2; i_6 < 18; i_6 += 2) 
                        {
                            arr_23 [i_3 + 2] [i_3 + 2] [i_1] [i_3 + 2] [i_3] [i_3] = ((signed char) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_6])) - (((/* implicit */int) (unsigned short)48530))));
                            arr_24 [i_0] [i_1] [i_2] [i_2] [i_6] &= (_Bool)1;
                            arr_25 [i_1] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)17905))));
                        }
                    }
                    for (long long int i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 1; i_8 < 20; i_8 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) (signed char)71)) ? (((/* implicit */int) arr_19 [i_7] [i_8 + 1] [i_8 + 1])) : (((/* implicit */int) (signed char)-113)))));
                            arr_31 [i_1] = ((/* implicit */long long int) 4294967285U);
                            arr_32 [i_0] [i_1] [i_0] [i_2] [i_7] [i_1] = ((/* implicit */_Bool) (~(max((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (704778051U))), (((/* implicit */unsigned int) (unsigned char)177))))));
                        }
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_3 [i_7] [i_1] [i_0])))) ? (((/* implicit */int) ((short) (-(((/* implicit */int) (signed char)-35)))))) : (((/* implicit */int) (((~(arr_18 [i_0] [i_1] [i_7] [i_7] [i_7]))) == (max((((/* implicit */unsigned int) (unsigned short)41800)), (arr_18 [i_0] [i_1] [i_0] [i_2] [i_7]))))))));
                    }
                    for (unsigned long long int i_9 = 2; i_9 < 20; i_9 += 1) 
                    {
                        var_25 = (-(((((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))) & (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_0]))) - (arr_4 [i_0] [i_0]))))));
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (_Bool)1))));
                    }
                    var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)75)) * (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) min((((/* implicit */short) (signed char)23)), ((short)(-32767 - 1))))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)15487)) && (((/* implicit */_Bool) (unsigned char)75))))))), ((~(((/* implicit */int) (short)30450)))))))));
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-6460)) + (((/* implicit */int) var_3))))) && (((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (var_2)))))))));
    /* LoopNest 3 */
    for (unsigned char i_10 = 0; i_10 < 12; i_10 += 3) 
    {
        for (unsigned char i_11 = 0; i_11 < 12; i_11 += 4) 
        {
            for (unsigned int i_12 = 0; i_12 < 12; i_12 += 4) 
            {
                {
                    arr_45 [i_10] [i_10] [i_11] [i_10] |= arr_29 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11];
                    /* LoopSeq 1 */
                    for (short i_13 = 0; i_13 < 12; i_13 += 2) 
                    {
                        var_29 = ((/* implicit */signed char) min((((arr_17 [i_10] [i_10] [i_10] [i_10] [i_13]) >> (((((/* implicit */int) min(((unsigned short)1977), (((/* implicit */unsigned short) (short)6759))))) - (1965))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)212))))) - (((/* implicit */int) arr_6 [i_10] [i_10] [i_13])))))));
                        var_30 ^= ((/* implicit */unsigned char) max((arr_39 [i_12] [i_12]), (max((8196921497099074356LL), (((((/* implicit */_Bool) (short)-1)) ? (4773454394231573789LL) : (((/* implicit */long long int) ((/* implicit */int) (short)27833)))))))));
                        var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)94)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)118))) : (170726534543859434ULL))), (((/* implicit */unsigned long long int) arr_28 [i_13] [i_12] [i_10] [i_10] [i_13]))))) ? ((((!(((/* implicit */_Bool) (signed char)-85)))) ? (520713059U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 9112276722531649234LL)) && (((/* implicit */_Bool) 8795958804480LL)))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) min((arr_34 [i_12]), ((unsigned char)43)))) % (((/* implicit */int) ((arr_40 [i_10] [i_10] [i_12]) || (((/* implicit */_Bool) arr_21 [i_12] [i_12] [i_12] [(signed char)20] [i_12] [i_13] [i_12])))))))))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_14 = 1; i_14 < 10; i_14 += 1) /* same iter space */
                        {
                            arr_50 [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */signed char) (short)-7854);
                            arr_51 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(max((arr_41 [i_10] [i_14]), (((/* implicit */unsigned int) var_8))))))) > (((559470812786926371ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49981)))))));
                            arr_52 [i_10] [i_10] = ((/* implicit */unsigned long long int) (unsigned char)248);
                        }
                        for (unsigned char i_15 = 1; i_15 < 10; i_15 += 1) /* same iter space */
                        {
                            var_32 = (unsigned char)154;
                            var_33 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)54)), (max((((/* implicit */unsigned short) (signed char)-17)), ((unsigned short)35517))))))));
                            arr_55 [i_10] [i_11] [i_13] [i_13] [i_15] &= ((/* implicit */signed char) (_Bool)1);
                            var_34 = ((/* implicit */signed char) (+(1956740556091742716ULL)));
                        }
                        /* LoopSeq 4 */
                        for (signed char i_16 = 0; i_16 < 12; i_16 += 4) /* same iter space */
                        {
                            var_35 = ((/* implicit */short) ((((/* implicit */int) (short)2)) >> ((((+(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)80))) * (arr_41 [i_16] [i_10]))))) - (718874053U)))));
                            var_36 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) ((signed char) var_5))), (((((/* implicit */int) arr_36 [i_10])) / (((/* implicit */int) arr_42 [i_10] [i_12] [i_10]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) min((arr_3 [3U] [i_10] [i_16]), (((/* implicit */unsigned long long int) arr_47 [i_16] [i_10] [i_16] [i_16]))))))) : (max((((/* implicit */unsigned int) arr_13 [i_10] [i_11] [i_12] [i_13] [i_16])), (max((arr_21 [i_10] [i_11] [i_11] [i_13] [(short)18] [i_13] [i_16]), (((/* implicit */unsigned int) arr_36 [i_10]))))))));
                        }
                        for (signed char i_17 = 0; i_17 < 12; i_17 += 4) /* same iter space */
                        {
                            var_37 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */short) (unsigned char)67)), ((short)16396))))) | (max((14299693199664238457ULL), (((/* implicit */unsigned long long int) 3969513424439496874LL))))));
                            arr_61 [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((((((/* implicit */int) (short)-30420)) + (2147483647))) << (((((((/* implicit */int) (signed char)-1)) + (14))) - (13))))) != ((((_Bool)1) ? (((/* implicit */int) arr_6 [i_10] [i_17] [i_10])) : (((/* implicit */int) var_6)))))))));
                            arr_62 [i_17] |= ((/* implicit */signed char) -715788213526481791LL);
                        }
                        for (signed char i_18 = 0; i_18 < 12; i_18 += 4) /* same iter space */
                        {
                            var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_64 [i_10] [i_11] [i_11] [i_13] [i_10])) && (max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_10] [i_10] [i_13]))) > (1865750153298599261ULL))), ((!((_Bool)0)))))));
                            var_39 += ((/* implicit */unsigned char) (unsigned short)32760);
                            var_40 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_1 [i_10]))))));
                            arr_65 [i_10] [i_11] [i_11] = (!(((/* implicit */_Bool) (unsigned char)75)));
                            arr_66 [i_10] [i_10] [i_12] [i_18] [i_10] [i_18] [i_13] = ((/* implicit */signed char) 3478497408617625334LL);
                        }
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            var_41 = ((/* implicit */signed char) ((((/* implicit */int) arr_30 [i_19] [i_13] [i_12] [i_11] [i_10])) % ((~(((/* implicit */int) arr_13 [i_10] [i_10] [i_12] [i_13] [i_19]))))));
                            arr_70 [i_10] [i_11] [i_12] [i_13] [i_10] [i_19] = ((/* implicit */unsigned long long int) 185216986805675558LL);
                        }
                    }
                }
            } 
        } 
    } 
}
