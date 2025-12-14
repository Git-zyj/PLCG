/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51528
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 2; i_2 < 20; i_2 += 2) 
                {
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [(unsigned char)10] [i_2 + 1] [i_2])) ? ((-(((/* implicit */int) arr_7 [(unsigned char)2] [i_2 + 1] [i_2 - 2])))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_2 - 1] [i_2])) ? (((/* implicit */int) arr_7 [i_2] [i_2 - 1] [(signed char)10])) : (((/* implicit */int) arr_7 [i_1] [i_2 + 1] [i_2 + 1]))))));
                    /* LoopSeq 3 */
                    for (int i_3 = 1; i_3 < 19; i_3 += 3) /* same iter space */
                    {
                        var_13 = ((/* implicit */long long int) (+(arr_3 [i_2 + 1] [i_2 + 1] [i_2 + 1])));
                        arr_10 [i_0] [i_1] [i_2] [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_5 [i_2 + 1] [i_3 + 2] [i_3 + 1] [i_3 + 2]), (arr_5 [i_2 - 2] [i_3 + 2] [i_3 + 1] [i_3 + 1])))) || (((arr_5 [i_2 - 2] [i_3 + 1] [i_3 + 2] [i_3 + 1]) < (arr_5 [i_2 + 1] [i_3 + 2] [i_3 + 1] [i_3 + 1])))));
                    }
                    for (int i_4 = 1; i_4 < 19; i_4 += 3) /* same iter space */
                    {
                        arr_14 [i_0] [11U] [i_1] [16U] [i_4] = ((/* implicit */unsigned short) arr_0 [10ULL]);
                        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) arr_4 [i_2] [i_4 - 1] [i_2 + 1]))));
                        arr_15 [i_0] [i_0] [i_0] [i_0] = ((unsigned char) (~(2290421152U)));
                        arr_16 [i_0] [i_1] [i_2] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) arr_2 [i_0]);
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 19; i_5 += 3) /* same iter space */
                    {
                        arr_19 [i_0] [i_0] [i_1] [i_2 + 1] [i_5 + 1] |= ((/* implicit */unsigned short) (+(arr_2 [i_5 - 1])));
                        var_15 = ((/* implicit */int) ((unsigned int) arr_11 [i_2 - 1] [i_5 + 1] [i_5] [i_5 - 1]));
                        var_16 = ((/* implicit */short) 2290421152U);
                    }
                    arr_20 [i_2 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_0] [i_1] [(unsigned short)9] [i_2]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [9ULL]))))) : (arr_18 [i_2 + 1] [i_2 - 1] [i_2 - 2] [i_2])))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)39))))) : (((/* implicit */int) ((signed char) 2290421153U))))) : (((((/* implicit */int) arr_1 [i_0] [i_1])) >> (((((((/* implicit */_Bool) arr_0 [17U])) ? (2757020263991646778LL) : (((/* implicit */long long int) 764093397U)))) - (2757020263991646753LL)))))));
                }
                for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) 
                {
                    var_17 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_6])) ? (((/* implicit */long long int) 2004546131U)) : (arr_4 [i_0] [i_1] [i_6]))), (((/* implicit */long long int) arr_13 [19] [4U]))));
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_6 [i_0])), (arr_0 [i_1])))) && (((/* implicit */_Bool) arr_9 [i_0] [(unsigned char)18] [i_6] [i_6] [i_1]))));
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (+(max((arr_0 [i_1]), (((/* implicit */unsigned long long int) 71776119061217280LL))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 2004546143U)) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_1] [i_6])) : (arr_21 [i_1]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [(unsigned short)12] [20U] [1LL] [i_1])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_6])) : (((/* implicit */int) arr_17 [i_0] [i_1] [i_1] [i_6]))))))))));
                }
                for (long long int i_7 = 1; i_7 < 17; i_7 += 4) 
                {
                    var_20 = ((/* implicit */long long int) 2004546142U);
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_29 [2] [i_8] [13U] [i_8] [i_8] = ((/* implicit */long long int) max((2108980401U), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-45))) * (2290421139U)))));
                                var_21 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (+(arr_5 [i_0] [i_7] [i_9] [i_1])))) ? ((+(-448147693691960762LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_7] [i_9 - 1] [i_9] [12ULL] [i_9])))))));
                                arr_30 [i_0] [i_1] [i_7 - 1] [i_8] [i_9] [i_8] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_2 [i_9 - 1])) ? (((/* implicit */int) (signed char)67)) : (arr_2 [i_9 - 1]))) | (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)106)))))));
                            }
                        } 
                    } 
                }
                var_22 |= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 12281897470774373734ULL)) ? (4253464945080002916LL) : (46026112325035468LL)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_2 [i_0]) : (arr_2 [i_1])))) : ((~(((((/* implicit */long long int) arr_22 [i_0] [i_0] [i_0] [9U])) ^ (5562570721192129004LL)))))));
                arr_31 [(unsigned char)8] [i_1] = 286432474851865684ULL;
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_10 = 0; i_10 < 15; i_10 += 3) 
    {
        for (int i_11 = 0; i_11 < 15; i_11 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (short i_12 = 1; i_12 < 12; i_12 += 4) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_13 = 0; i_13 < 15; i_13 += 2) 
                    {
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (+(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 344898182U)), (13402754547311928118ULL))))))))))));
                        arr_42 [i_10] [(_Bool)1] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) 18160311598857685953ULL)))) ? (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_32 [i_10]))))))) : (5043989526397623497ULL)));
                        arr_43 [i_10] [i_11] [(short)7] [i_12] [i_10] = min(((+(((((/* implicit */_Bool) arr_37 [(unsigned short)7] [i_11])) ? (5148217965349723151ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [14] [i_12] [i_11] [i_10] [i_10] [i_10]))))))), ((-(((((/* implicit */_Bool) arr_38 [i_10] [i_11] [i_12])) ? (5043989526397623511ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_10] [i_10] [(signed char)10] [i_12] [i_12] [i_13]))))))));
                    }
                    for (signed char i_14 = 0; i_14 < 15; i_14 += 3) 
                    {
                        var_24 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_10] [i_11] [i_12 + 2] [i_14])) ? (arr_18 [i_10] [i_11] [i_12] [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_10] [11U] [i_14])))))))))));
                        var_25 += (~(max((((((/* implicit */_Bool) arr_39 [i_10] [14LL] [i_12] [i_14] [i_14])) ? (((/* implicit */int) arr_28 [i_10] [i_10] [i_10] [i_10] [i_10])) : (((/* implicit */int) arr_17 [i_14] [i_14] [i_14] [i_14])))), ((+(((/* implicit */int) (unsigned short)31436)))))));
                    }
                    arr_46 [i_10] [i_10] [(signed char)6] = ((/* implicit */unsigned char) 2203013297U);
                    var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_12 - 1] [i_12 + 3] [i_12] [i_12 + 3] [2ULL] [i_12]))) - (2203013322U)))))))));
                    var_27 = ((/* implicit */unsigned long long int) (((((~(((/* implicit */int) (signed char)-45)))) - (((((/* implicit */_Bool) 1572864U)) ? (((/* implicit */int) arr_37 [i_10] [i_12 + 2])) : (arr_23 [i_10] [i_11] [i_12 + 3] [3ULL]))))) >= (min((((/* implicit */int) ((unsigned char) (unsigned char)91))), (((((/* implicit */_Bool) arr_32 [i_10])) ? (((/* implicit */int) arr_25 [i_10] [i_10] [i_11] [i_11] [i_12] [(unsigned char)18])) : (((/* implicit */int) arr_13 [i_11] [i_12]))))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_15 = 2; i_15 < 13; i_15 += 3) 
                {
                    var_28 = ((/* implicit */long long int) 18088101289310318933ULL);
                    arr_49 [i_15 - 1] [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) arr_7 [(unsigned short)20] [i_11] [i_15 - 1]);
                    arr_50 [i_10] [i_10] [i_10] = ((/* implicit */_Bool) arr_24 [i_10] [i_11] [i_15]);
                }
                arr_51 [i_10] [i_11] = ((/* implicit */signed char) ((unsigned char) 5043989526397623482ULL));
                /* LoopSeq 2 */
                for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                {
                    var_29 += ((/* implicit */unsigned char) (+(1572862U)));
                    arr_54 [(unsigned short)10] [i_10] [12U] [10] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */int) arr_27 [i_16 + 1] [16U] [i_10])) - (arr_2 [i_11])))))) ? (((((/* implicit */_Bool) arr_18 [i_16 + 1] [i_11] [i_10] [(short)11])) ? (arr_18 [i_16 + 1] [i_11] [6U] [i_16]) : (arr_18 [i_16 + 1] [i_11] [i_16] [i_11]))) : (((((/* implicit */_Bool) arr_7 [6U] [i_11] [i_10])) ? (((/* implicit */unsigned long long int) -5562570721192129005LL)) : (((((/* implicit */_Bool) arr_39 [i_10] [i_10] [i_11] [4LL] [(signed char)6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)159))) : (arr_0 [i_16 + 1])))))));
                    var_30 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_11 [i_16 + 1] [i_16 + 1] [2ULL] [i_11])), (arr_38 [i_16 + 1] [i_10] [i_10])))) ? (((((/* implicit */_Bool) arr_47 [i_11] [2ULL] [2ULL] [i_10])) ? (arr_18 [(short)13] [i_16 + 1] [19LL] [(short)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_16] [i_16 + 1] [i_11] [i_11]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_47 [i_16 + 1] [10U] [10U] [i_11]))))));
                    var_31 = ((/* implicit */unsigned char) arr_44 [i_10] [(_Bool)1] [i_10]);
                }
                /* vectorizable */
                for (long long int i_17 = 1; i_17 < 14; i_17 += 1) 
                {
                    arr_58 [i_10] [i_10] [i_11] [i_17] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) -1551145254)) && (((/* implicit */_Bool) arr_56 [i_10] [i_17 - 1])))))));
                    var_32 = ((/* implicit */int) ((arr_24 [i_17 - 1] [i_17 - 1] [i_17 - 1]) == (arr_24 [i_17 - 1] [i_17 - 1] [i_17 + 1])));
                    arr_59 [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)9043))))) ? (((/* implicit */int) arr_34 [i_10] [i_10])) : (((/* implicit */int) arr_32 [i_10]))));
                }
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned char) var_2);
    var_34 = ((/* implicit */unsigned long long int) ((unsigned char) max((((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */long long int) var_3)) : (var_11))), (((((/* implicit */_Bool) 2270399135U)) ? (((/* implicit */long long int) 536870656)) : (var_10))))));
}
