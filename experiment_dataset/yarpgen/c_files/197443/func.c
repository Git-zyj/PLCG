/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197443
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
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) min((var_15), (((/* implicit */unsigned long long int) -97972327)))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) (signed char)-35);
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (signed char)0))) ? ((-(8350924646172249634ULL))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */int) (signed char)-28)) + (732069414))))))));
            var_21 = ((/* implicit */unsigned short) arr_0 [i_0] [i_1]);
            arr_5 [i_0] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((5397653498925059783ULL), (((/* implicit */unsigned long long int) -5))))) && ((!(((/* implicit */_Bool) 1882312410)))))) || ((!((!(((/* implicit */_Bool) 9077389973982185806ULL))))))));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 12; i_2 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned int i_3 = 1; i_3 < 13; i_3 += 1) 
            {
                arr_12 [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)6)) % ((-(1993118136)))));
                var_22 = ((/* implicit */unsigned int) var_18);
            }
            for (int i_4 = 0; i_4 < 14; i_4 += 3) /* same iter space */
            {
                arr_15 [i_0] [(signed char)3] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned short)52559)) << (((((/* implicit */int) (signed char)119)) - (109))))) & (((arr_3 [i_0] [i_2] [i_0]) / (((/* implicit */int) (signed char)-48))))));
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (~(((unsigned long long int) arr_13 [i_4])))))));
                arr_16 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */int) (signed char)-80)) : (-922820252))) < (((/* implicit */int) ((((/* implicit */unsigned long long int) 2147483647)) >= (11343088588283045875ULL))))));
                arr_17 [(signed char)6] [i_0] [i_4] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)52559))));
            }
            for (int i_5 = 0; i_5 < 14; i_5 += 3) /* same iter space */
            {
                var_24 *= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_9 [i_0 - 1]))));
                var_25 += ((/* implicit */int) (unsigned short)40045);
                /* LoopSeq 1 */
                for (unsigned short i_6 = 0; i_6 < 14; i_6 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        arr_25 [i_0] [i_2] [i_2] [i_6] [i_0] [i_6] = ((/* implicit */signed char) (+(5486620864557152398ULL)));
                        arr_26 [i_0] [3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(4194303))))));
                    }
                    /* LoopSeq 1 */
                    for (int i_8 = 0; i_8 < 14; i_8 += 1) 
                    {
                        arr_29 [i_0] [i_6] [i_5] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_0)))) ? (((/* implicit */int) ((arr_14 [(signed char)1] [i_0] [i_5]) == (((/* implicit */unsigned long long int) arr_24 [i_6]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                        var_26 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_22 [i_2 - 1] [i_2 + 2] [i_2 + 1] [i_2 + 2] [i_2 - 1] [i_2 + 2]))));
                        var_27 = ((/* implicit */unsigned long long int) 4095);
                        arr_30 [i_0] [i_0] [i_5] [i_6] [(unsigned short)13] = ((/* implicit */unsigned long long int) ((int) (signed char)-40));
                        arr_31 [2] [i_5] [8ULL] |= ((/* implicit */signed char) ((((/* implicit */int) arr_20 [i_0])) - (((/* implicit */int) var_1))));
                    }
                }
            }
            arr_32 [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) ((arr_11 [i_2 + 2] [i_2]) | (((/* implicit */unsigned long long int) 681128498))));
        }
        for (int i_9 = 1; i_9 < 12; i_9 += 3) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned short) ((((int) max((arr_0 [i_0] [i_9]), (((/* implicit */unsigned int) (signed char)80))))) <= (max((((/* implicit */int) min(((signed char)20), ((signed char)(-127 - 1))))), ((-(arr_21 [i_9] [11ULL] [i_9] [i_0] [i_0])))))));
            arr_36 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_14)), (min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0])), (var_16)))))) || (((/* implicit */_Bool) 2147483647))));
        }
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 12; i_10 += 1) 
        {
            for (unsigned int i_11 = 0; i_11 < 14; i_11 += 1) 
            {
                {
                    var_29 &= ((/* implicit */signed char) 0);
                    arr_41 [i_0] [i_0] = ((/* implicit */signed char) ((min((arr_0 [i_0] [(unsigned short)10]), (((/* implicit */unsigned int) var_10)))) >> (((((/* implicit */int) ((signed char) var_16))) - (38)))));
                }
            } 
        } 
    }
    for (unsigned int i_12 = 1; i_12 < 22; i_12 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_13 = 0; i_13 < 23; i_13 += 3) 
        {
            for (int i_14 = 0; i_14 < 23; i_14 += 3) 
            {
                {
                    var_30 = (-(1964869338555618920ULL));
                    /* LoopSeq 2 */
                    for (signed char i_15 = 3; i_15 < 22; i_15 += 3) /* same iter space */
                    {
                        var_31 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((signed char) 136083614U))) || (((((/* implicit */_Bool) (unsigned short)30752)) && (((/* implicit */_Bool) 17939055221145091808ULL)))))) || (((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_16)))) || (((/* implicit */_Bool) max((2015973820), (-1784433072))))))));
                        var_32 = ((/* implicit */signed char) max((arr_44 [i_12 + 1] [i_12 - 1]), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) 781131307))) >> (((((((/* implicit */_Bool) var_2)) ? (arr_42 [i_12]) : (arr_46 [i_12]))) + (155534964))))))));
                        var_33 = max((((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned long long int) var_13)), (var_11))))), (max((((/* implicit */int) ((unsigned short) (unsigned short)49021))), ((-(((/* implicit */int) (signed char)0)))))));
                        /* LoopSeq 2 */
                        for (int i_16 = 0; i_16 < 23; i_16 += 3) 
                        {
                            arr_55 [i_12] [i_13] [i_14] [i_15] [i_16] = ((/* implicit */signed char) min(((~((~(var_16))))), (((/* implicit */unsigned long long int) arr_50 [i_12] [i_12] [i_12 - 1]))));
                            arr_56 [i_13] [i_13] [i_14] [i_14] [i_15] [i_16] = ((/* implicit */unsigned short) 4294967295U);
                            arr_57 [i_12] [2] [i_13] = ((int) max(((unsigned short)8585), ((unsigned short)25137)));
                        }
                        for (signed char i_17 = 0; i_17 < 23; i_17 += 3) 
                        {
                            var_34 = ((/* implicit */signed char) max((min((min((18446744073709551611ULL), (18446744073709551608ULL))), (((/* implicit */unsigned long long int) ((unsigned short) arr_49 [i_12] [i_13] [i_14] [i_14] [i_15] [i_17]))))), (((/* implicit */unsigned long long int) (-(arr_46 [i_12 + 1]))))));
                            var_35 += ((/* implicit */signed char) ((int) min((((unsigned long long int) arr_53 [12ULL] [21] [i_17] [i_15] [i_17] [i_15])), (((/* implicit */unsigned long long int) ((-1664372042) & (((/* implicit */int) (signed char)0))))))));
                        }
                    }
                    for (signed char i_18 = 3; i_18 < 22; i_18 += 3) /* same iter space */
                    {
                        arr_63 [i_13] = ((unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) 15249042510375643932ULL)))))));
                        var_36 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned long long int) (signed char)-7)), (var_11))))) << (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-9)) && (((/* implicit */_Bool) (unsigned short)65524)))))));
                    }
                }
            } 
        } 
        arr_64 [i_12] [i_12] = ((/* implicit */int) (~(((((/* implicit */_Bool) 5397653498925059780ULL)) ? (((/* implicit */unsigned long long int) arr_47 [i_12 + 1] [i_12 + 1] [19])) : (var_16)))));
    }
    for (unsigned long long int i_19 = 1; i_19 < 16; i_19 += 1) 
    {
        arr_68 [i_19] [(signed char)16] = ((/* implicit */int) min((((unsigned long long int) 18446744073709551608ULL)), (((((/* implicit */_Bool) arr_66 [i_19])) ? (((/* implicit */unsigned long long int) arr_66 [i_19 + 2])) : (var_11)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_20 = 2; i_20 < 15; i_20 += 1) 
        {
            var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) ((5022671798949764619ULL) != (((var_18) - (18446744073709551615ULL))))))));
            arr_72 [(signed char)2] [i_20] [i_20] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) (unsigned short)65535))) ? (((/* implicit */int) arr_62 [i_19] [i_19 + 2] [i_19 + 1] [i_20])) : (((/* implicit */int) (signed char)25))));
            var_38 = ((signed char) var_18);
            arr_73 [i_19] [(unsigned short)16] &= ((/* implicit */signed char) (+(arr_46 [i_20])));
            var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) ((unsigned long long int) (signed char)(-127 - 1))))));
        }
        for (int i_21 = 0; i_21 < 18; i_21 += 3) 
        {
            var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) || (((/* implicit */_Bool) -6)))))));
            arr_77 [i_21] [i_19] = ((/* implicit */signed char) min((max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))))), (((unsigned short) 765623364U)))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-34)) && (((/* implicit */_Bool) var_0)))))));
            arr_78 [14] [i_21] [i_21] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_75 [(signed char)16] [i_21])) / (((/* implicit */int) arr_54 [i_21] [10ULL] [i_21] [10ULL] [i_19]))))), (arr_53 [i_19] [i_19] [12] [(unsigned short)22] [i_21] [i_21])));
        }
    }
}
