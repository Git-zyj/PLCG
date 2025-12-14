/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32818
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
    var_14 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_13)) + (((/* implicit */int) var_6)))))))), (((((/* implicit */_Bool) ((3486581950U) << (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((unsigned long long int) var_4))))));
    var_15 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)37))) ? (((/* implicit */int) var_5)) : ((~(((/* implicit */int) (unsigned char)147)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) arr_1 [i_0 - 2]);
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 2])) << (((((/* implicit */int) arr_3 [i_0 - 3] [i_0 - 3])) - (25222)))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 1; i_4 < 10; i_4 += 4) 
                        {
                            arr_11 [i_0] [i_1] [i_1] [i_1] [8] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0 + 1] [i_4 - 1])) ^ (((/* implicit */int) arr_3 [i_0 + 2] [i_4 + 2]))));
                            arr_12 [i_4] [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((long long int) 1269619529));
                        }
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)247))));
                        arr_16 [i_0] [i_1] [5ULL] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_1] [i_0])) ? (arr_6 [i_0 - 3] [i_0 - 3] [i_0] [7LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [4LL])))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)992))) ^ (arr_6 [i_0] [(signed char)8] [i_2] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_10 [i_0] [(signed char)8] [i_2] [i_0] [i_5] [8ULL]))))));
                        var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_0] [i_0 + 1] [i_0] [i_5]))));
                        arr_17 [i_0] = ((/* implicit */short) ((_Bool) ((unsigned short) -6391579583808101185LL)));
                    }
                    for (unsigned char i_6 = 2; i_6 < 10; i_6 += 2) /* same iter space */
                    {
                        arr_22 [i_0] [i_1] [i_1] [i_2] [i_6] [i_6] = ((/* implicit */int) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0 + 1] [i_0 + 1] [i_2] [(signed char)6]))) + (max((((/* implicit */unsigned int) (signed char)22)), (1435017708U))))), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
                        var_20 = ((/* implicit */_Bool) arr_3 [i_0] [i_0]);
                        arr_23 [i_6] [i_2] [i_1] = ((/* implicit */unsigned long long int) max((((arr_21 [i_0] [i_1] [i_1] [i_2] [i_6 + 2] [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-86))) : (arr_4 [i_6 + 2] [i_1] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_0] [i_1] [i_2] [i_2] [i_1] [i_6])) - (((/* implicit */int) arr_21 [5ULL] [(short)5] [8LL] [i_1] [i_1] [(short)5])))))));
                    }
                    for (unsigned char i_7 = 2; i_7 < 10; i_7 += 2) /* same iter space */
                    {
                        arr_26 [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_7 [11LL] [i_7 + 2] [i_0 - 2] [i_7] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(_Bool)1] [i_7 + 2] [i_0 - 2] [i_7 - 1]))) : (arr_7 [i_0] [i_7 + 2] [i_0 - 2] [i_7 + 2] [i_0 - 2]))) == (((arr_7 [i_0] [i_7 + 2] [i_0 - 2] [i_7 + 2] [i_7]) / (arr_7 [i_0] [i_7 + 2] [i_0 - 2] [i_7 + 2] [i_2])))));
                        arr_27 [i_0] [i_1] [i_1] [i_1] [i_2] [i_1] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0] [i_7] [i_2])) ? (1072380123U) : (arr_7 [i_0] [i_1] [i_2] [i_7] [i_7])))))) ? (((((/* implicit */_Bool) arr_6 [i_0 - 2] [i_0 - 3] [i_7 + 2] [9ULL])) ? (arr_6 [i_0 - 1] [i_0 + 1] [i_7 - 1] [i_0 - 1]) : (arr_6 [i_0 + 1] [i_0 - 2] [i_7 + 1] [i_7]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(short)8] [i_1] [i_2] [i_7] [i_0] [i_2])) ? (arr_15 [i_0 - 1] [9LL] [i_2] [i_7] [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)11)))))) ? (((/* implicit */long long int) 1072380137U)) : (arr_8 [i_0] [i_7 - 2] [6ULL] [5]))))));
                        var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_1] [i_1] [i_2] [i_7])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (_Bool)1)))))))));
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_3 [i_0 - 3] [i_7 + 2]), (arr_3 [i_0 - 3] [i_7 - 2])))) - (((/* implicit */int) arr_3 [i_0 - 2] [i_7 - 1]))));
                    }
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) arr_2 [i_0 + 1]))) ? (((arr_6 [i_0 + 2] [i_0 - 3] [i_0 + 2] [i_0 - 1]) | (((arr_2 [(_Bool)1]) ? (arr_6 [(_Bool)1] [i_1] [2] [i_1]) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0])))))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (arr_14 [i_2] [(_Bool)0] [i_1] [i_0 + 2]) : (arr_14 [i_0] [i_0 + 1] [2ULL] [i_0]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        for (short i_9 = 0; i_9 < 19; i_9 += 1) 
        {
            {
                var_24 = ((((/* implicit */_Bool) max((arr_32 [i_8] [i_8] [i_9]), (arr_32 [i_8] [i_8] [11])))) ? (((((/* implicit */_Bool) arr_32 [i_8] [i_8] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_9] [i_8] [i_9]))) : (arr_32 [i_8] [i_8] [i_8]))) : (max((arr_32 [i_8] [i_9] [i_9]), (arr_32 [i_8] [i_8] [i_9]))));
                var_25 = ((((/* implicit */_Bool) 845298226U)) ? (18298367570576309584ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-98))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_10] [i_10])) ? (arr_34 [i_10]) : (((/* implicit */unsigned long long int) arr_35 [i_10] [i_10]))));
        /* LoopSeq 1 */
        for (unsigned char i_11 = 0; i_11 < 24; i_11 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_12 = 1; i_12 < 21; i_12 += 1) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        var_27 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_37 [i_10] [i_11] [i_12 + 1])) + (2147483647))) << (((((((/* implicit */int) arr_37 [i_10] [(signed char)2] [i_12 + 1])) + (51))) - (17)))));
                        arr_44 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */_Bool) ((unsigned short) arr_36 [i_11] [i_11] [i_12 + 2]));
                    }
                } 
            } 
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_37 [i_10] [i_10] [i_11])) == (((/* implicit */int) arr_37 [i_10] [i_11] [i_11]))));
            /* LoopNest 2 */
            for (unsigned char i_14 = 0; i_14 < 24; i_14 += 2) 
            {
                for (unsigned char i_15 = 0; i_15 < 24; i_15 += 1) 
                {
                    {
                        var_29 = ((_Bool) 1859461047);
                        /* LoopSeq 2 */
                        for (unsigned char i_16 = 0; i_16 < 24; i_16 += 3) 
                        {
                            arr_56 [i_10] [i_11] [i_14] [i_14] [i_15] [i_16] = ((/* implicit */_Bool) ((int) ((((/* implicit */int) arr_49 [i_14])) == (((/* implicit */int) arr_43 [i_10])))));
                            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1859461047)) ? (((/* implicit */int) ((short) (unsigned char)237))) : (((/* implicit */int) (_Bool)1))));
                        }
                        for (unsigned char i_17 = 0; i_17 < 24; i_17 += 4) 
                        {
                            arr_61 [i_10] [i_11] = ((/* implicit */int) arr_35 [(unsigned char)7] [9LL]);
                            var_31 = ((/* implicit */_Bool) (~(arr_34 [i_15])));
                        }
                        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [i_10])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)113))));
                        /* LoopSeq 2 */
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            arr_66 [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_45 [i_14] [i_14] [i_14] [i_15])) ? (((arr_35 [i_14] [i_14]) / (((/* implicit */unsigned int) 1232505151)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_15] [i_18])))));
                            var_33 = ((/* implicit */unsigned short) ((arr_65 [i_18] [i_15] [i_11] [i_11] [22]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_10] [i_14] [i_18])))));
                        }
                        for (unsigned long long int i_19 = 2; i_19 < 22; i_19 += 3) 
                        {
                            var_34 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_62 [i_19] [i_11] [14LL] [i_11] [6LL]))) ? (((unsigned long long int) 6391579583808101184LL)) : (((/* implicit */unsigned long long int) (+(arr_55 [i_10] [i_11] [14LL] [i_15] [i_19 + 1]))))));
                            arr_70 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_65 [i_19 + 2] [i_19 - 2] [i_19] [i_19] [i_19])) ? (arr_65 [i_19 + 2] [i_19 + 2] [(_Bool)1] [i_19] [i_19]) : (arr_65 [i_19 - 2] [i_19 + 2] [i_19] [i_19 + 2] [i_19 + 2])));
                        }
                        var_35 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_39 [i_11] [i_15])))) < (((18446744073709551615ULL) | (((/* implicit */unsigned long long int) arr_55 [i_10] [i_11] [i_11] [i_15] [i_15]))))));
                    }
                } 
            } 
        }
    }
}
