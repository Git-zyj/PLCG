/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232228
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
    var_10 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_8))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) ((((unsigned long long int) var_8)) >> (((arr_1 [i_0]) + (8912034073585080022LL))))))));
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [19U]))) - (16955972141573815204ULL)))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_0] [15]))))) / (((long long int) var_4)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_1)))))))))));
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */long long int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) arr_2 [i_0])))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [5ULL] [4]))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) + (3635105185913792817ULL))))))))));
        arr_3 [1LL] = ((/* implicit */signed char) ((unsigned long long int) ((((min((var_0), (((/* implicit */int) var_9)))) + (2147483647))) >> (((/* implicit */int) max((var_5), (((/* implicit */short) (_Bool)1))))))));
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1309896876U)) ? (((/* implicit */int) (unsigned short)50335)) : (((/* implicit */int) (!((_Bool)0))))));
        var_15 = ((/* implicit */_Bool) 3047713022U);
        var_16 = ((/* implicit */int) ((max((14922981697267998002ULL), (((/* implicit */unsigned long long int) arr_2 [(unsigned short)7])))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1]))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            arr_10 [(_Bool)1] [i_2] [i_1] = (short)147;
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                for (unsigned int i_4 = 2; i_4 < 9; i_4 += 1) 
                {
                    {
                        arr_19 [i_1] = ((/* implicit */signed char) (-(((((long long int) 15015596976990498668ULL)) / (((/* implicit */long long int) 790606584))))));
                        var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) ((15525950699039754633ULL) >> (((((/* implicit */int) var_9)) - (124)))))))));
                        arr_20 [i_1] [i_2] [(short)1] [(unsigned char)5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((8431540858247305175LL) | (((/* implicit */long long int) 525478453)))), (((/* implicit */long long int) var_1))))) ^ (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [(unsigned char)15] [(unsigned short)8])) ^ (((/* implicit */int) (unsigned char)15))))), (min((((/* implicit */unsigned long long int) (unsigned char)168)), (arr_4 [6] [3U])))))));
                        var_18 *= ((/* implicit */unsigned int) min(((-(((((/* implicit */_Bool) (short)25041)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2)))))), (var_4)));
                        arr_21 [9ULL] [(short)9] = ((/* implicit */int) ((long long int) min((-525478453), ((~(-525478453))))));
                    }
                } 
            } 
            var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_15 [i_1] [i_2] [4] [i_1] [i_1]))))));
        }
        for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 2) 
        {
            arr_25 [(unsigned short)7] [6U] [(unsigned short)4] |= ((/* implicit */long long int) ((_Bool) ((((/* implicit */unsigned long long int) -1805148046)) | (arr_22 [(_Bool)1] [i_5 + 1]))));
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                for (unsigned char i_7 = 0; i_7 < 10; i_7 += 2) 
                {
                    {
                        arr_31 [(unsigned short)3] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_18 [i_7] [i_5 + 1] [i_5 - 1] [0U] [(short)5])), (max((-950079102), (((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) | (arr_14 [(signed char)3] [i_5 - 1] [(_Bool)1] [i_5 + 1])))) : (((((/* implicit */_Bool) arr_7 [i_1] [7U] [5])) ? (arr_9 [i_5 + 1] [(unsigned short)4]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [5] [i_5] [2ULL])) ? (((/* implicit */int) var_2)) : (arr_6 [(_Bool)1] [(unsigned char)6]))))))));
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1] [i_5 + 1] [i_5 + 1])) ? (arr_14 [7LL] [i_5 + 1] [i_5 + 1] [i_5 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_5 + 1] [i_5 + 1])))))) ? (var_0) : (min((1957541680), (((/* implicit */int) arr_11 [9U] [i_5 + 1] [i_5 + 1])))))))));
                        /* LoopSeq 2 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_35 [i_1] [i_1] [i_1] [4ULL] = ((/* implicit */_Bool) (~(arr_16 [(signed char)9] [i_7] [i_6] [i_7])));
                            var_21 -= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) & (arr_1 [(unsigned short)15])))) ? (((/* implicit */int) var_7)) : (((((/* implicit */int) (short)-16050)) | (((/* implicit */int) var_9))))))));
                            var_22 = ((/* implicit */int) arr_2 [i_1]);
                        }
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            var_23 *= ((/* implicit */short) ((unsigned long long int) ((((((/* implicit */_Bool) arr_28 [(unsigned short)5])) ? (((/* implicit */int) var_8)) : (var_4))) & (((/* implicit */int) ((((/* implicit */_Bool) 1156391478U)) || (((/* implicit */_Bool) (short)1023))))))));
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) / (((/* implicit */unsigned long long int) var_0))))) ? (max((((/* implicit */int) (signed char)-116)), (var_0))) : (((/* implicit */int) (_Bool)1))))) ? ((((~(((/* implicit */int) (_Bool)1)))) | ((~(((/* implicit */int) arr_26 [(_Bool)1])))))) : (((((/* implicit */_Bool) ((int) arr_29 [(short)8] [(unsigned char)3] [0LL] [(short)6]))) ? (((525478453) - (-525478436))) : (((/* implicit */int) var_1))))));
                        }
                        arr_38 [5ULL] = var_4;
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (short i_10 = 0; i_10 < 10; i_10 += 1) 
            {
                var_25 = (~(min((((((/* implicit */_Bool) arr_37 [i_1] [(_Bool)1] [(unsigned char)4] [0LL] [(_Bool)1])) ? (arr_4 [5] [6LL]) : (((/* implicit */unsigned long long int) 515195385335669200LL)))), (((/* implicit */unsigned long long int) (-(-950079102)))))));
                /* LoopSeq 3 */
                for (signed char i_11 = 1; i_11 < 9; i_11 += 2) 
                {
                    arr_43 [i_1] [(_Bool)1] [i_1] [(short)8] |= (-(min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_28 [i_5]))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-473766331351068938LL))))));
                    var_26 = ((/* implicit */int) var_1);
                }
                /* vectorizable */
                for (unsigned short i_12 = 0; i_12 < 10; i_12 += 3) 
                {
                    var_27 = (-(((/* implicit */int) var_9)));
                    arr_46 [(_Bool)0] [(unsigned char)7] [i_10] [(unsigned short)6] = ((/* implicit */_Bool) ((((((/* implicit */int) var_8)) / (525478453))) >> (((((unsigned long long int) var_6)) - (10736812976261662051ULL)))));
                    var_28 = ((/* implicit */unsigned int) arr_11 [(unsigned char)3] [7LL] [(unsigned short)9]);
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)13596)) : (((/* implicit */int) (_Bool)1))))) ? (arr_39 [i_1] [1]) : (((((/* implicit */_Bool) (~(2147483647)))) ? (arr_16 [i_5 - 1] [7ULL] [7U] [(signed char)3]) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)116)), ((unsigned char)166)))))))));
                    arr_51 [i_1] [i_10] [(short)5] [4LL] = ((/* implicit */unsigned char) arr_42 [i_5 - 1] [i_10]);
                    arr_52 [i_1] [(_Bool)0] [(short)8] [i_10] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2070))) % (var_6))))), ((~((((_Bool)1) ? (arr_4 [4] [(unsigned short)8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                }
                var_30 ^= ((/* implicit */unsigned short) 11285619023487928314ULL);
            }
        }
        var_31 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)39632))) < (arr_1 [(short)11])));
    }
    for (unsigned short i_14 = 0; i_14 < 15; i_14 += 3) 
    {
        var_32 ^= ((/* implicit */_Bool) max((var_1), (((/* implicit */signed char) ((((arr_53 [(unsigned short)8] [(unsigned char)10]) / (((/* implicit */int) (unsigned short)5345)))) <= (((/* implicit */int) ((((/* implicit */int) (unsigned short)18381)) != (((/* implicit */int) var_7))))))))));
        var_33 = ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)14840)))))))));
        arr_56 [i_14] = ((/* implicit */unsigned short) -494739219);
    }
    for (int i_15 = 0; i_15 < 12; i_15 += 1) 
    {
        arr_60 [(_Bool)1] [i_15] = ((/* implicit */_Bool) var_0);
        arr_61 [2U] = (((!(((/* implicit */_Bool) ((unsigned char) (unsigned short)46171))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -38986863)) ? (((/* implicit */int) (unsigned short)60198)) : (((/* implicit */int) (unsigned short)23))))) ? (((/* implicit */int) ((17515446656064747899ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_15] [i_15]))))))));
    }
    var_34 &= ((/* implicit */unsigned long long int) (signed char)112);
}
