/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231113
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
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 3; i_3 < 11; i_3 += 3) 
                    {
                        {
                            arr_10 [i_1] [i_2] [i_1 - 1] [i_1] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) arr_4 [i_0] [i_1])), (arr_5 [i_0] [i_1] [i_2] [5ULL])))) ? (((/* implicit */int) (unsigned short)20)) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_2]))))));
                            /* LoopSeq 4 */
                            for (unsigned char i_4 = 1; i_4 < 12; i_4 += 3) 
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_1] [0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_3] [i_3 - 3] [i_3 + 2] [i_3 + 2])) && (((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_3]))));
                                arr_14 [i_0] [i_1] [i_1] [i_1] [(unsigned char)4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_4))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_2] [i_1]))))) : ((-(arr_9 [i_3] [i_1] [i_3])))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_2] [i_4])) : (((/* implicit */int) arr_5 [(short)10] [4LL] [4LL] [(short)10]))))))))));
                                arr_15 [i_1] [i_3 - 1] [i_0] [i_1 + 1] [i_0] [i_1] = arr_5 [i_0] [i_1] [i_2] [i_3];
                                arr_16 [i_1] [i_1 - 2] [(unsigned char)6] [(unsigned char)6] [i_1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)251)) << (((((/* implicit */int) arr_0 [i_4 - 1] [i_1 - 2])) - (161)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_2] [i_4 - 1]))))) : (((((/* implicit */_Bool) arr_0 [i_1] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2] [i_1 - 2]))) : (var_12)))));
                            }
                            /* vectorizable */
                            for (long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                            {
                                var_13 += ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_0] [1ULL] [i_1] [i_0] [i_1] [i_5]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_17 [i_0] [i_1 - 1] [i_2] [i_3] [i_2] [i_2] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_5]))))))));
                                arr_21 [i_1] [(unsigned char)3] [(unsigned char)3] [i_0] [i_5] [i_5] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) arr_11 [i_3] [i_3 - 1] [i_3] [i_3 + 1] [i_3 + 1])) < (((((/* implicit */_Bool) arr_8 [i_1] [i_5] [i_1] [i_3])) ? (((/* implicit */int) (short)-13262)) : (((/* implicit */int) (unsigned short)36))))));
                            }
                            /* vectorizable */
                            for (unsigned int i_6 = 0; i_6 < 14; i_6 += 1) /* same iter space */
                            {
                                arr_24 [i_1] [i_1] [i_1] [i_1] [i_1 + 1] [i_1 - 1] [i_1] = var_12;
                                arr_25 [i_0] [i_1] = (i_1 % 2 == 0) ? (((arr_18 [i_6] [i_6] [i_1] [i_3] [i_1] [i_3 - 2] [i_3 - 2]) << (((((/* implicit */int) ((unsigned char) arr_3 [i_6] [i_1] [i_0]))) - (91))))) : (((((arr_18 [i_6] [i_6] [i_1] [i_3] [i_1] [i_3 - 2] [i_3 - 2]) + (9223372036854775807LL))) << (((((((((/* implicit */int) ((unsigned char) arr_3 [i_6] [i_1] [i_0]))) - (91))) + (80))) - (52)))));
                                arr_26 [i_0] [i_1] [i_2] [i_1] [i_6] = ((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_6] [i_3 - 2]))));
                                arr_27 [i_1] [i_3] [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)65506))));
                                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (((!(((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2] [i_2] [(short)2])))) ? (arr_23 [i_0] [i_1] [10U] [i_1 - 1] [i_6]) : (((/* implicit */long long int) (-2147483647 - 1))))))));
                            }
                            for (unsigned int i_7 = 0; i_7 < 14; i_7 += 1) /* same iter space */
                            {
                                arr_30 [i_1] [i_1] = ((/* implicit */unsigned short) (+(((((_Bool) 1572700118U)) ? ((-(((/* implicit */int) var_4)))) : (((var_7) ? (((/* implicit */int) (unsigned short)11)) : (((/* implicit */int) arr_11 [i_0] [i_1 - 2] [i_0] [i_0] [i_7]))))))));
                                arr_31 [i_1] [i_2] [i_3] [i_7] = ((/* implicit */unsigned char) 0U);
                            }
                            /* LoopSeq 3 */
                            for (unsigned short i_8 = 0; i_8 < 14; i_8 += 4) 
                            {
                                arr_34 [7ULL] [i_1] [i_2] [i_3 + 3] [i_3 + 1] [i_3] [i_8] = ((/* implicit */short) (+(min((((arr_4 [i_0] [i_1]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)65499)))), (((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)5))))))));
                                var_15 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min(((unsigned short)62130), (((/* implicit */unsigned short) (_Bool)1))))), (1880373788233049432ULL)));
                                var_16 ^= ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_3 [(_Bool)1] [i_8] [i_8])) ? (((((/* implicit */_Bool) 1880373788233049417ULL)) ? (4U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_8]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1]))))), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) 1880373788233049432ULL)) && (((/* implicit */_Bool) arr_29 [i_8] [i_3] [i_2] [i_1] [10LL])))), ((!(((/* implicit */_Bool) arr_1 [i_1])))))))));
                                var_17 += min((arr_4 [i_3] [i_8]), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -5LL)) ? (((/* implicit */int) (unsigned short)20380)) : (((/* implicit */int) arr_20 [i_0] [i_1] [i_8]))))) && (((/* implicit */_Bool) ((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_8] [i_1] [i_8]))) : (arr_2 [i_0])))))));
                            }
                            for (short i_9 = 0; i_9 < 14; i_9 += 3) 
                            {
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-3168)) * (((/* implicit */int) (short)-13259))))) ? (((((/* implicit */_Bool) arr_18 [i_9] [i_3 + 2] [8LL] [i_2] [8LL] [i_1] [i_0])) ? (((/* implicit */int) (short)-23977)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) arr_7 [i_0]))))) ? (((((/* implicit */_Bool) ((arr_2 [i_9]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (min((arr_9 [i_3 - 3] [(unsigned short)2] [i_0]), (((/* implicit */long long int) (short)26347)))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_3] [i_9]))))) : (((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) 4294967290U))) * (((((/* implicit */_Bool) arr_35 [(unsigned short)2] [i_1 + 1] [i_1 - 2] [(signed char)10] [(unsigned short)2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)38))))))))))));
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (-((-(16566370285476502201ULL))))))));
                            }
                            for (short i_10 = 2; i_10 < 12; i_10 += 3) 
                            {
                                var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-74)) % (((/* implicit */int) arr_4 [0U] [(_Bool)0]))));
                                var_21 = ((/* implicit */_Bool) max((var_21), (min((((((/* implicit */_Bool) 2247337640U)) || (((/* implicit */_Bool) (signed char)-57)))), (((((/* implicit */int) arr_38 [i_3 + 1] [(unsigned short)2] [i_10 - 1] [i_3])) < (((/* implicit */int) arr_38 [i_3 - 1] [(short)10] [i_10 + 2] [i_3 - 2]))))))));
                            }
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_35 [i_1] [i_1] [i_1 - 2] [10LL] [i_1]), (arr_35 [(_Bool)0] [(_Bool)0] [i_1 - 2] [(short)0] [i_1 + 1])))) ? (((arr_35 [i_1 + 1] [i_1] [i_1 - 2] [(_Bool)1] [(_Bool)1]) / (arr_35 [i_1] [i_1] [i_1 - 1] [8ULL] [8ULL]))) : (((/* implicit */long long int) ((arr_4 [i_1 - 1] [(signed char)12]) ? (((/* implicit */int) arr_8 [i_1 - 2] [i_1 - 1] [i_1 - 2] [i_1 - 1])) : (((/* implicit */int) arr_4 [i_1 - 2] [10ULL]))))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_11)))))) ? (((((/* implicit */_Bool) min((((/* implicit */signed char) var_1)), (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (max((var_2), (((/* implicit */unsigned long long int) var_12)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned int) var_3)))))))))));
    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-36))) : (var_2)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3167))) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) 4294967282U)) : (-8555223512064344289LL)))))))));
    var_25 = ((/* implicit */long long int) (-(((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) != (1442516422U))) ? (((var_12) & (((/* implicit */unsigned int) 1267388665)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3)))))))));
    /* LoopNest 2 */
    for (short i_11 = 2; i_11 < 9; i_11 += 3) 
    {
        for (short i_12 = 0; i_12 < 11; i_12 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_13 = 0; i_13 < 11; i_13 += 3) 
                {
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)11372)) || (((/* implicit */_Bool) var_9))));
                            arr_48 [i_11] [1LL] [i_13] [i_14 - 1] = min((((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_42 [i_11 - 2] [i_11 - 2] [i_11 - 2]), (arr_12 [i_11] [i_12] [i_12] [i_11] [i_11])))) * (((/* implicit */int) arr_7 [(unsigned char)4]))))), ((-(((((/* implicit */_Bool) arr_0 [i_13] [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_13] [i_12]))) : (var_8))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    for (unsigned char i_16 = 0; i_16 < 11; i_16 += 1) 
                    {
                        {
                            arr_53 [(signed char)2] [i_15] [i_12] [i_11 + 2] &= ((/* implicit */long long int) (unsigned short)10398);
                            var_27 *= ((/* implicit */signed char) var_6);
                        }
                    } 
                } 
                var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_11 - 1] [i_11 - 1] [i_11] [i_12] [i_11 - 1])) ? (((/* implicit */int) arr_12 [i_12] [i_11 + 1] [i_11] [i_11] [i_11])) : (((/* implicit */int) var_9)))))));
            }
        } 
    } 
}
