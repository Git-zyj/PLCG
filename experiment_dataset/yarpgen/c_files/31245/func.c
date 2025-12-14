/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31245
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 9; i_1 += 2) 
        {
            {
                arr_6 [(_Bool)1] [i_0] [i_0] = ((/* implicit */signed char) (((((-(7355807922047931086LL))) != (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (unsigned short)65530))))))) ? ((+(((((/* implicit */_Bool) 7355807922047931094LL)) ? (-7355807922047931099LL) : (7355807922047931096LL))))) : ((((!(((/* implicit */_Bool) 3205471378U)))) ? (((/* implicit */long long int) (~(3205471377U)))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (-7355807922047931080LL)))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) /* same iter space */
                {
                    var_16 = ((/* implicit */int) (+((~(2589224177U)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        var_17 = ((/* implicit */long long int) max((((/* implicit */int) arr_5 [i_0])), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0] [i_0]))))) ? ((-(((/* implicit */int) arr_3 [i_1 - 4] [i_3])))) : ((-(((/* implicit */int) arr_10 [i_3]))))))));
                        arr_12 [i_1] [i_3] [6LL] [i_3] [(unsigned char)8] = ((/* implicit */signed char) ((((/* implicit */_Bool) -7355807922047931078LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)72))) : (-7355807922047931066LL)));
                        arr_13 [i_0] [i_0] [7U] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-(7355807922047931074LL))) / (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)109)) ? (arr_2 [i_0]) : (((/* implicit */int) (signed char)27)))))))) ? (max((7355807922047931083LL), (6143372508758182141LL))) : (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) -1))))))))));
                        var_18 = ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_7 [i_0] [i_0])), (arr_8 [0U] [i_2] [i_3])))) ^ (max(((-(18446744073709551608ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1521299513U))))))));
                    }
                    var_19 = (+((-((-(1099494850560LL))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        arr_16 [i_0] [i_1] [(signed char)6] [i_4] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) -948776856)) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [(unsigned char)4] [i_1 + 1])) : (((/* implicit */int) arr_11 [i_1] [i_1] [i_2] [i_1] [i_2]))))));
                        var_20 -= ((/* implicit */unsigned long long int) (+(-896304135)));
                        var_21 = ((/* implicit */_Bool) (unsigned short)42771);
                    }
                    for (signed char i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        arr_21 [i_0] [1U] [i_2] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) arr_10 [i_2])), (7355807922047931092LL))), (((/* implicit */long long int) 896304137))))) ? (((/* implicit */long long int) (-(19)))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_5]))) : (1099494850574LL)))));
                        var_22 -= ((/* implicit */signed char) 14);
                        var_23 = ((/* implicit */int) max((var_23), (20)));
                    }
                    /* vectorizable */
                    for (unsigned int i_6 = 2; i_6 < 9; i_6 += 3) 
                    {
                        var_24 = ((/* implicit */int) ((((((/* implicit */_Bool) 30)) && (((/* implicit */_Bool) arr_0 [i_0] [i_0])))) ? (1966391640U) : ((((_Bool)1) ? (1966391650U) : (2589224194U)))));
                        arr_26 [(_Bool)1] [i_1 + 1] [i_1] [i_1] [9] [i_6] = ((/* implicit */signed char) 27);
                    }
                    for (unsigned long long int i_7 = 3; i_7 < 8; i_7 += 1) 
                    {
                        arr_29 [i_7] [i_2] [i_1 - 2] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_1 [i_2] [i_1 - 1]), (arr_1 [i_0] [i_7])))) ? (11222896607056648181ULL) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) 252997010)) > (1705743088U)))), (arr_8 [i_1] [(signed char)5] [i_1]))))));
                        arr_30 [i_0] [i_1] [i_2] [i_7] [i_1 - 3] [i_2] = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 28)), ((-(1966391636U)))))), ((-((+(1048575ULL)))))));
                        arr_31 [i_7] [i_7] [i_2] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((-381954939) / ((~(((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [(_Bool)1] [i_7])))))))));
                        arr_32 [i_7] [i_1] [i_1] [i_1] [9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)126)))))))) ? (max((((1ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) arr_17 [7] [i_7 + 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((((/* implicit */_Bool) -10)) || (((/* implicit */_Bool) (unsigned short)40081)))), (((((/* implicit */_Bool) -1099494850543LL)) && (((/* implicit */_Bool) 1695601332U))))))))));
                        var_25 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)48))));
                    }
                    var_26 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)175))));
                }
                for (unsigned char i_8 = 0; i_8 < 10; i_8 += 3) /* same iter space */
                {
                    arr_35 [i_0] [i_8] = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) arr_0 [i_1] [i_1])), (3964690626650103858LL))) <= (1099494850555LL)));
                    var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned short)40079)) ? (-1099494850540LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)22))))))))));
                    var_28 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)124)) ? (-1099494850567LL) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1)))))))) ? (((((/* implicit */_Bool) (signed char)-125)) ? ((+(((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [i_1])))) : ((-(((/* implicit */int) (signed char)-127)))))) : (((((_Bool) (unsigned short)8)) ? (((((/* implicit */_Bool) (signed char)-86)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)44)))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)26))))))));
                    arr_36 [i_0] [i_1 + 1] [i_8] [i_8] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)122))));
                }
                var_29 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 2948236870U)) ? (10411984946328870865ULL) : (((/* implicit */unsigned long long int) ((5155137741287753609LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned int i_9 = 0; i_9 < 16; i_9 += 4) 
    {
        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)90)) ? (2678314537927849339ULL) : (((/* implicit */unsigned long long int) 2976056549U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)113))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_9])) ? (((/* implicit */int) (unsigned char)130)) : (((/* implicit */int) arr_37 [12U]))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-115))))) : (((((/* implicit */_Bool) -2637992473983203748LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)8))) : (arr_38 [i_9])))))));
        var_31 = ((/* implicit */int) ((((/* implicit */_Bool) arr_37 [14ULL])) ? (max((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) arr_37 [i_9])) ? (arr_38 [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-109))))))) : (((((/* implicit */_Bool) arr_37 [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_9]))) : (1318910742U)))));
        var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) 5155137741287753604LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1318910740U)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_37 [15ULL])) && (((/* implicit */_Bool) (signed char)-19))))) : ((+(((/* implicit */int) (signed char)-126))))))) : (((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [i_9])) ? (3610408690U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)120)))))) : (((((/* implicit */_Bool) arr_37 [i_9])) ? (2622718337673301569ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))))));
    }
    for (unsigned char i_10 = 0; i_10 < 13; i_10 += 2) /* same iter space */
    {
        var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) 1428655039)), (-5155137741287753589LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 684558595U)))))) : (15LL))))));
        var_34 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (-(arr_38 [i_10])))))) ? ((+((-(18446744073709551611ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((414794049007527065LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-110)))))) ? (((((/* implicit */int) (unsigned char)103)) - (1470982714))) : (((/* implicit */int) (!((_Bool)1)))))))));
    }
    for (unsigned char i_11 = 0; i_11 < 13; i_11 += 2) /* same iter space */
    {
        var_35 -= ((/* implicit */signed char) ((((684558593U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))) ? (((/* implicit */unsigned long long int) (+((((_Bool)1) ? (((/* implicit */int) (unsigned char)37)) : (((/* implicit */int) (signed char)70))))))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)77))) / (arr_40 [(signed char)6] [i_11])))) ? (((/* implicit */unsigned long long int) max((718784377), (((/* implicit */int) arr_43 [i_11]))))) : (((((/* implicit */_Bool) arr_39 [i_11])) ? (15824025736036250053ULL) : (((/* implicit */unsigned long long int) 2908221674U))))))));
        var_36 = ((/* implicit */int) (~(min((((/* implicit */long long int) 3610408705U)), (9119529319590381540LL)))));
    }
    /* vectorizable */
    for (unsigned char i_12 = 0; i_12 < 13; i_12 += 2) /* same iter space */
    {
        arr_49 [i_12] = ((/* implicit */unsigned short) arr_46 [i_12]);
        arr_50 [i_12] [i_12] = ((/* implicit */unsigned int) (-(arr_39 [i_12])));
        var_37 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)242))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_42 [i_12]))))) : (((((/* implicit */_Bool) (unsigned char)227)) ? (2147483639) : (((/* implicit */int) (signed char)-84))))));
        arr_51 [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_37 [i_12])) << (((/* implicit */int) (_Bool)1))))) ? ((+(((/* implicit */int) arr_47 [i_12])))) : (((/* implicit */int) (signed char)-72))));
    }
    /* LoopNest 3 */
    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
    {
        for (unsigned long long int i_14 = 1; i_14 < 14; i_14 += 4) 
        {
            for (unsigned long long int i_15 = 0; i_15 < 16; i_15 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_16 = 0; i_16 < 16; i_16 += 2) 
                    {
                        arr_60 [i_13 - 1] [i_13 - 1] [i_15] [i_14] [i_14 + 1] [8U] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_38 [i_16])))))))));
                        arr_61 [i_14 + 1] [i_14 - 1] [i_14 - 1] [i_16] [i_14] [i_14] = ((/* implicit */_Bool) max(((unsigned short)53190), (((/* implicit */unsigned short) (_Bool)1))));
                    }
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 16; i_17 += 3) 
                    {
                        for (signed char i_18 = 4; i_18 < 15; i_18 += 4) 
                        {
                            {
                                arr_68 [i_13] [i_13] [i_14] [0] [i_18] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 9119529319590381525LL))));
                                var_38 -= ((/* implicit */int) (unsigned char)1);
                            }
                        } 
                    } 
                    var_39 -= (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_57 [i_13] [i_14] [i_15] [i_15]) : (((/* implicit */int) (signed char)77))))) ? ((-(((/* implicit */int) arr_37 [i_13])))) : (((((/* implicit */int) (signed char)65)) / (-1))))));
                    var_40 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)26884)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)36))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-53)) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) (signed char)-81))))) ? (((((/* implicit */_Bool) arr_66 [(signed char)14] [i_15] [i_14 + 1] [i_14 + 1] [(signed char)14])) ? (arr_52 [(_Bool)1]) : (((/* implicit */unsigned long long int) arr_54 [i_13] [i_14])))) : ((+(2188694517350459280ULL)))))));
                }
            } 
        } 
    } 
    var_41 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))), ((+(907611015)))))) * (((((/* implicit */unsigned long long int) (-(var_2)))) * ((-(var_15)))))));
}
