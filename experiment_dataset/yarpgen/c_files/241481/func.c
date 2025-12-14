/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241481
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
    var_15 = ((/* implicit */signed char) min((((/* implicit */int) var_1)), (((((/* implicit */int) min((var_12), (((/* implicit */short) var_2))))) & (((/* implicit */int) var_12))))));
    var_16 = ((/* implicit */short) 9367759183452777649ULL);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) | (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) < (9367759183452777649ULL))))))) / (var_4)));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((unsigned char)255), (((/* implicit */unsigned char) (signed char)78))))) || (((/* implicit */_Bool) arr_0 [i_0 + 1]))));
            arr_5 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (4060067933U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)50))))) * (arr_4 [i_0] [i_0 + 2] [i_0])))) | ((~(arr_0 [i_0 - 3])))));
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (var_5)))) | (((((/* implicit */_Bool) ((arr_4 [15ULL] [i_1] [i_0]) / (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (min((((/* implicit */long long int) (unsigned char)19)), (var_3)))))));
                    var_19 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) 4070321346693771922ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)11924)))) + (((/* implicit */int) (unsigned char)9)))) <= (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)49509)) || (((/* implicit */_Bool) (unsigned short)12067)))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_20 = ((/* implicit */signed char) ((((/* implicit */int) arr_7 [13] [i_1] [i_4] [i_4 - 1])) > (((/* implicit */int) (signed char)-73))));
                        arr_14 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)25273)) ? (((/* implicit */int) arr_9 [i_4 - 1] [i_3] [i_2] [i_1] [i_0 + 2] [i_0 + 2])) : (((/* implicit */int) (_Bool)0))));
                        var_21 = ((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0] [i_3]);
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        var_22 += max((((3386520946848395637ULL) & (((/* implicit */unsigned long long int) (-(2388995798U)))))), (((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */int) (unsigned short)53468)), (0))))));
                        arr_17 [i_0 + 1] [i_1] [i_1] [i_0] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */int) var_8)) | (((/* implicit */int) (unsigned char)16))));
                    }
                    for (short i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        var_23 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16027)) ? (((/* implicit */unsigned long long int) ((arr_8 [i_0] [i_2] [i_3]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11))))) : (((9367759183452777649ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))) ? (((((/* implicit */int) arr_6 [i_6] [i_1] [i_2] [i_3])) - (var_5))) : (((/* implicit */int) ((((unsigned long long int) var_0)) != (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14)))))))));
                        var_24 = ((/* implicit */unsigned char) var_12);
                        var_25 = ((/* implicit */long long int) arr_11 [i_0 - 2] [i_1] [i_0 - 2] [i_3] [i_6]);
                        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) arr_12 [i_0] [i_0] [i_1] [(signed char)0] [i_3] [i_3] [i_6]))));
                    }
                    for (unsigned long long int i_7 = 2; i_7 < 23; i_7 += 4) 
                    {
                        var_27 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)53497))));
                        var_28 = min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)53467)) && (((/* implicit */_Bool) var_1))))), (arr_3 [i_0] [i_1]));
                        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_7] [i_2] [i_7]))));
                        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) arr_22 [i_0 + 2] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]))));
                        var_31 = ((/* implicit */unsigned char) ((unsigned short) arr_8 [i_0 - 1] [i_7 - 1] [i_0]));
                    }
                }
                for (unsigned char i_8 = 0; i_8 < 24; i_8 += 4) /* same iter space */
                {
                    arr_27 [i_0] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0 - 1] [i_8] [i_2] [i_0] [i_1] [i_1]))) * (((arr_11 [i_0] [i_1] [i_2] [i_2] [i_8]) ? (var_9) : (((/* implicit */unsigned int) var_6))))))) ? (((min((6482582061704072812ULL), (9907735492398576075ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0 - 3] [i_0 - 3] [i_0 - 2] [i_0 + 2] [i_0 - 3] [i_0 + 1] [i_0 + 1]))))) : (max((((/* implicit */unsigned long long int) ((short) var_12))), (11964162012005478803ULL)))));
                    var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) && (((((/* implicit */_Bool) arr_6 [i_8] [i_1] [i_2] [i_8])) && (((var_2) || (((/* implicit */_Bool) var_6)))))))))));
                    var_33 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((_Bool) (unsigned short)49509))), (min((var_4), (((/* implicit */unsigned int) arr_7 [i_0 - 2] [i_2] [i_1] [i_8]))))));
                    var_34 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -4595207080943914515LL)), (1543658762288240827ULL)));
                }
                for (unsigned char i_9 = 0; i_9 < 24; i_9 += 4) /* same iter space */
                {
                    arr_30 [(unsigned char)20] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_9)) + (arr_3 [i_0] [16ULL])))) ? (min((arr_3 [i_0] [i_1]), (((/* implicit */long long int) 2431530436U)))) : (((/* implicit */long long int) ((/* implicit */int) ((18446744073709551615ULL) <= (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1]))))))));
                    var_35 = ((/* implicit */unsigned char) (~(((((arr_15 [i_0] [i_0] [i_0 - 3]) + (2147483647))) << ((((((-(((/* implicit */int) arr_21 [i_0])))) + (22819))) - (14)))))));
                }
                var_36 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6482582061704072813ULL)) ? (var_5) : (((/* implicit */int) (_Bool)1))))) ? (0ULL) : (((/* implicit */unsigned long long int) arr_4 [i_0 + 1] [i_1] [i_0])));
            }
            for (signed char i_10 = 0; i_10 < 24; i_10 += 2) /* same iter space */
            {
                arr_33 [i_0 - 3] [i_0] [i_0] = ((/* implicit */_Bool) 13653197758773361439ULL);
                /* LoopSeq 2 */
                for (unsigned char i_11 = 0; i_11 < 24; i_11 += 4) 
                {
                    var_37 -= ((/* implicit */unsigned long long int) var_7);
                    var_38 = ((/* implicit */unsigned short) ((var_8) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (unsigned char)251)) / (((/* implicit */int) arr_20 [i_0 + 2] [i_11] [i_10] [i_11] [i_1] [i_1] [i_1]))))));
                    var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) min((((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_12)))), (((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_0 - 2] [i_1] [i_10] [i_11] [18U])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (_Bool)1)))))))));
                    /* LoopSeq 4 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_40 = ((/* implicit */unsigned char) max((min((11964162012005478803ULL), (((/* implicit */unsigned long long int) arr_24 [i_0])))), (((/* implicit */unsigned long long int) (signed char)-2))));
                        var_41 = ((/* implicit */_Bool) max((var_41), ((!(((((/* implicit */int) (unsigned short)16027)) > ((-(((/* implicit */int) (_Bool)1))))))))));
                    }
                    for (int i_13 = 1; i_13 < 22; i_13 += 4) 
                    {
                        arr_44 [i_10] [(_Bool)1] [i_0] [i_10] [i_10] = ((/* implicit */long long int) ((((((/* implicit */int) (signed char)0)) & ((((_Bool)0) ? (((/* implicit */int) (signed char)39)) : (((/* implicit */int) (_Bool)1)))))) ^ (((((/* implicit */int) (short)31580)) >> (((35888059530608640ULL) - (35888059530608635ULL)))))));
                        var_42 = ((/* implicit */unsigned char) var_3);
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        var_43 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-106)) ? (((/* implicit */int) (signed char)-10)) : (((/* implicit */int) (signed char)106)))) - (arr_25 [(short)4] [i_0 - 2] [i_0 + 2])));
                        var_44 = ((/* implicit */_Bool) 268434944U);
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                    {
                        var_45 += ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)10))) / ((((-(8662925994728610143LL))) / (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)16027)) ? (((/* implicit */int) arr_46 [(short)13] [i_0 + 2] [i_1] [i_10] [i_11] [i_11] [(_Bool)1])) : (((/* implicit */int) var_12)))))))));
                        var_46 = ((/* implicit */unsigned long long int) ((268434944U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    }
                }
                for (unsigned long long int i_16 = 2; i_16 < 23; i_16 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_47 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_40 [i_16 - 1] [12ULL] [i_16 + 1] [i_16] [i_0] [i_16 + 1])) || (((/* implicit */_Bool) (+(((/* implicit */int) var_11))))))) ? (((17831896446093394058ULL) * (max((((/* implicit */unsigned long long int) var_10)), (15061468426833039533ULL))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_38 [i_17] [i_16 - 2] [i_10] [i_0 - 3] [i_0 - 3])))))));
                        arr_60 [i_17] [i_0] [i_0] [i_0 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((4735717679694704979ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) && (((/* implicit */_Bool) (signed char)-106))));
                    }
                    var_48 = ((/* implicit */unsigned char) arr_24 [i_0]);
                }
                arr_61 [i_0] [i_0] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_0] [(unsigned short)21] [(unsigned short)21] [i_0 - 2] [i_0] [i_0 + 1]))) : (arr_51 [i_0 - 1] [i_0] [i_1] [i_10] [10ULL] [i_10] [i_10])));
                var_49 = (-(((/* implicit */int) (unsigned short)24576)));
            }
            for (signed char i_18 = 0; i_18 < 24; i_18 += 2) /* same iter space */
            {
                var_50 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), (arr_38 [i_18] [i_1] [i_1] [i_0 + 2] [i_0 - 3]))))) - (((arr_1 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                var_51 = ((/* implicit */_Bool) min((var_51), (((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) 2215461837U))))));
                var_52 = ((/* implicit */unsigned int) min((var_6), (((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) ((((/* implicit */int) (unsigned char)106)) > (((/* implicit */int) var_14))))))))));
                var_53 += ((/* implicit */_Bool) (unsigned char)14);
                /* LoopNest 2 */
                for (unsigned char i_19 = 0; i_19 < 24; i_19 += 2) 
                {
                    for (int i_20 = 1; i_20 < 22; i_20 += 4) 
                    {
                        {
                            var_54 = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) (-2147483647 - 1))), (var_3))), (((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-11))) * (arr_4 [i_0 + 1] [i_1] [i_0]))) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)39))))))));
                            var_55 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_50 [i_0] [i_1] [7]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-23)))))) ? ((~(((/* implicit */int) arr_20 [19LL] [i_0 - 3] [i_0 - 3] [i_0] [i_0 - 3] [i_0 + 2] [i_0 - 2])))) : (((/* implicit */int) arr_55 [i_0] [i_0] [i_0 - 3] [i_0]))));
                            var_56 = ((/* implicit */signed char) arr_22 [(unsigned char)18] [(unsigned short)13] [i_1] [i_19] [i_20 - 1] [i_18]);
                            var_57 = ((/* implicit */unsigned char) ((max((0ULL), (14543651425275949787ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
            }
        }
        var_58 = ((/* implicit */signed char) (+(2017244666U)));
    }
    var_59 = ((/* implicit */_Bool) var_9);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_21 = 2; i_21 < 16; i_21 += 4) /* same iter space */
    {
        arr_71 [i_21] = var_1;
        var_60 += ((((/* implicit */int) var_12)) / (((/* implicit */int) ((11721020797020507384ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)4)))))));
        var_61 = ((/* implicit */unsigned int) min((var_61), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
        var_62 |= ((/* implicit */_Bool) 0ULL);
    }
    for (unsigned short i_22 = 2; i_22 < 16; i_22 += 4) /* same iter space */
    {
        var_63 = max(((((!(((/* implicit */_Bool) var_0)))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)42)), (var_0)))))), (((((/* implicit */int) (unsigned char)139)) > (((((/* implicit */int) arr_12 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22] [i_22])) * (((/* implicit */int) arr_26 [i_22 + 1] [i_22 - 1] [i_22] [i_22] [i_22 + 2] [i_22 + 2])))))));
        arr_76 [i_22 - 1] [i_22] = ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63))) / (3903092648433601828ULL))) / (3903092648433601829ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)39)) > (((/* implicit */int) ((((/* implicit */int) arr_55 [i_22] [i_22] [i_22 + 1] [i_22])) >= (((/* implicit */int) arr_39 [i_22] [i_22] [i_22] [i_22 + 2] [17ULL]))))))))));
    }
}
