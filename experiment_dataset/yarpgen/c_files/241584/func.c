/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241584
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((((/* implicit */int) (((+(var_3))) != (((/* implicit */long long int) ((/* implicit */int) min((var_8), (arr_2 [i_0] [i_0])))))))) < (((/* implicit */int) ((unsigned char) (-(((/* implicit */int) arr_0 [i_0])))))))))));
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(arr_1 [i_0])))) == ((-(var_1)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            var_14 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_6 [(signed char)11] [i_1] [i_1])) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)248))) : (8566414449682017863ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_2]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))) : (9223372036854775807LL))))));
            arr_7 [i_1] [i_2] [i_1] = ((-4263165606185457555LL) + (min((((/* implicit */long long int) arr_4 [i_1])), (((((/* implicit */_Bool) (signed char)-20)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_3 = 2; i_3 < 14; i_3 += 2) 
            {
                arr_10 [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_1]);
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 2; i_4 < 14; i_4 += 2) 
                {
                    var_15 -= ((/* implicit */unsigned char) (~(var_5)));
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_4 + 1] [i_4 - 1])) ? (((((/* implicit */_Bool) -3158419064544724527LL)) ? (0ULL) : (12482071986020808389ULL))) : (arr_6 [i_1] [i_4] [i_1])));
                }
            }
            for (signed char i_5 = 1; i_5 < 12; i_5 += 2) 
            {
                arr_15 [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_11 [i_5 + 3] [i_5 + 1])) : (((/* implicit */int) arr_11 [i_5 + 1] [i_5 - 1]))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_3 [i_1])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_11))))), (((/* implicit */long long int) arr_2 [i_1] [i_5]))))) : (((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1] [0LL] [12ULL]))) == (var_5)))));
                arr_16 [i_1] [i_2] [(signed char)4] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_12 [i_5 + 2] [i_5 + 2])) == (((/* implicit */int) arr_12 [i_5 + 1] [i_5 + 1]))))) != (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_12 [i_5 + 3] [i_5 + 1])) : (((/* implicit */int) arr_12 [i_5 + 1] [i_5 + 2]))))));
                var_17 = ((/* implicit */unsigned char) max(((-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 2992684987809198775LL)) : (var_7))))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [(signed char)9] [i_1] [(unsigned char)2] [i_5]))))) ? (arr_6 [i_1] [i_2] [i_1]) : (min((var_2), (12858245480261573241ULL)))))));
                var_18 ^= ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2]))) / (-8727327781658629880LL))) + (((((/* implicit */_Bool) var_6)) ? (2992684987809198775LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_5])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_9 [i_1] [i_2]))) ? ((~(var_3))) : (((((/* implicit */_Bool) arr_2 [i_5] [i_1])) ? (arr_9 [i_1] [i_2]) : (var_3)))))) : (max((((((/* implicit */_Bool) 4263165606185457554LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-52))) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2992684987809198757LL)) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) arr_11 [i_2] [i_1]))))))));
            }
        }
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_0))) % (((((((/* implicit */unsigned long long int) var_3)) != (var_7))) ? (((((/* implicit */_Bool) -1LL)) ? (arr_5 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1])))))));
        /* LoopSeq 1 */
        for (signed char i_6 = 1; i_6 < 12; i_6 += 1) 
        {
            var_20 = ((/* implicit */unsigned char) ((long long int) arr_18 [i_1] [i_6]));
            arr_20 [i_1] [i_1] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) -972056721573730862LL))));
        }
        arr_21 [i_1] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_2 [1LL] [i_1]))))));
        /* LoopSeq 1 */
        for (signed char i_7 = 1; i_7 < 13; i_7 += 2) 
        {
            var_21 = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) arr_2 [i_1] [i_1])), (arr_1 [15LL]))) / (((/* implicit */long long int) (-(((/* implicit */int) arr_19 [i_1] [i_7] [i_7])))))));
            var_22 ^= (-(max(((-(var_2))), (((arr_22 [0ULL] [i_7]) + (var_2))))));
            var_23 &= max((arr_12 [i_1] [i_1]), (((unsigned char) arr_3 [(unsigned char)10])));
            var_24 = ((/* implicit */signed char) (~(max(((~(18446744073709551615ULL))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned char)17]))) ^ (13755435300864894903ULL)))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_8 = 3; i_8 < 14; i_8 += 3) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) (signed char)-1))))));
                var_26 = ((/* implicit */unsigned char) arr_23 [i_1]);
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 4) 
                {
                    var_27 = min((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_18 [12ULL] [(unsigned char)7])) : (((/* implicit */int) arr_3 [i_1])))) + (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1] [(unsigned char)0] [i_1]))) > (arr_17 [14ULL] [i_7]))))))), (((((/* implicit */_Bool) arr_23 [i_1])) ? (-2992684987809198776LL) : (var_6))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_10 = 0; i_10 < 15; i_10 += 3) 
                    {
                        var_28 = arr_22 [i_1] [i_7 + 2];
                        var_29 -= ((/* implicit */unsigned char) var_0);
                        arr_32 [i_1] [i_7] [(unsigned char)14] [i_9] [i_10] [i_1] = ((/* implicit */signed char) (-(((long long int) var_11))));
                    }
                }
            }
            for (unsigned long long int i_11 = 3; i_11 < 14; i_11 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (signed char i_12 = 4; i_12 < 13; i_12 += 3) 
                {
                    arr_39 [i_1] [i_7] = ((6490738085487193247ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))));
                    arr_40 [(unsigned char)6] [i_1] = ((/* implicit */unsigned long long int) (((+((-(arr_31 [i_12] [(unsigned char)14] [i_12] [i_1] [i_7] [i_1] [i_1]))))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_23 [i_1])) > (((/* implicit */int) ((var_7) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)57))))))))))));
                    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [i_1] [i_7 + 1] [i_11 - 3] [i_1])) ? (((((/* implicit */_Bool) arr_36 [i_1] [i_7 + 1] [i_11 - 3] [i_11])) ? (arr_36 [i_1] [i_7 + 1] [i_11 - 3] [(signed char)8]) : (arr_36 [i_1] [i_7 + 1] [i_11 - 3] [i_11]))) : (arr_36 [i_1] [i_7 + 1] [i_11 - 3] [13LL])));
                }
                var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_7 + 1] [i_11 - 2]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_7])) ? ((+(((/* implicit */int) arr_4 [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) : (9223372036854775807LL)));
            }
        }
    }
    for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 1) /* same iter space */
    {
        arr_43 [i_13] = var_10;
        /* LoopSeq 2 */
        for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 4) 
        {
            arr_47 [i_13] [(signed char)14] [(signed char)14] |= ((/* implicit */long long int) (~(var_1)));
            arr_48 [i_13] = ((/* implicit */unsigned long long int) min((max((((((/* implicit */_Bool) arr_35 [(signed char)12] [i_14])) ? (3300082631019512103LL) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_13] [i_13] [i_13] [i_14]))))), (((long long int) (signed char)90)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_14] [i_13] [(unsigned char)0]))) : (((((/* implicit */_Bool) 6935505995313808588LL)) ? (arr_36 [i_14] [4LL] [i_14] [i_14]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
        }
        for (long long int i_15 = 0; i_15 < 15; i_15 += 4) 
        {
            var_32 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_15] [i_13])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)73))) == (var_1)))) : (((/* implicit */int) min((arr_0 [i_15]), (((/* implicit */unsigned char) var_9))))))))));
            var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_15]))) : (var_1)))) ? (((((/* implicit */int) var_0)) / (((/* implicit */int) arr_41 [i_13])))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_13])) < (((/* implicit */int) arr_0 [i_13])))))));
        }
        var_34 += ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_44 [i_13] [i_13] [i_13])), (arr_28 [i_13] [i_13] [0LL])))) || (((/* implicit */_Bool) arr_49 [i_13] [i_13] [i_13]))));
    }
    var_35 *= ((/* implicit */unsigned char) ((signed char) min((((/* implicit */long long int) var_9)), (((long long int) (signed char)-34)))));
    var_36 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_1) : (0ULL)))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_8), (var_8))))))))));
}
