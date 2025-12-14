/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244522
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0])) : ((((_Bool)1) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_7))))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0 + 2])) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_9)), ((unsigned short)26814)))) : (((/* implicit */int) arr_0 [i_0 - 1])))) : (((/* implicit */int) (((~(((/* implicit */int) (unsigned char)0)))) < (((/* implicit */int) var_1)))))));
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_6 [i_0 - 1] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_5 [i_2] [i_1] [i_1 - 2] [i_0 - 2]), (((/* implicit */short) (_Bool)1))))) ? (max((((unsigned int) arr_5 [i_2] [17U] [17U] [17U])), (((/* implicit */unsigned int) arr_4 [i_0] [i_1 + 4] [i_2])))) : (((/* implicit */unsigned int) ((((/* implicit */int) min((var_6), (var_1)))) - (((/* implicit */int) (short)4219)))))));
                    var_13 -= ((/* implicit */long long int) ((short) ((((/* implicit */int) arr_3 [i_1 + 4])) <= (((/* implicit */int) arr_3 [i_1 + 3])))));
                    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */int) var_7)) & (((/* implicit */int) ((arr_2 [i_0 + 1]) <= (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) - (((/* implicit */int) arr_4 [i_0] [i_1 + 1] [i_2])))))))))))));
                }
            } 
        } 
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((var_10) < (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            arr_9 [i_3] [i_3] [i_0] = ((/* implicit */unsigned int) (short)-14287);
            arr_10 [(short)8] [(short)6] = ((/* implicit */short) (+(((((/* implicit */_Bool) (unsigned short)26812)) ? (arr_2 [i_0 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
            arr_11 [i_3] = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) < (((/* implicit */int) ((arr_2 [i_0 - 1]) == (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))), (((((/* implicit */int) (unsigned char)7)) << ((((-(((/* implicit */int) arr_1 [i_3] [(unsigned short)9])))) + (90)))))));
            /* LoopNest 2 */
            for (unsigned short i_4 = 2; i_4 < 18; i_4 += 4) 
            {
                for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    {
                        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) max((arr_15 [(short)12] [(short)12] [6ULL] [(short)8] [i_0 + 1] [i_3]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (arr_15 [i_0] [i_3] [i_4] [i_4 - 2] [i_5] [(short)2])))) ? (((/* implicit */int) arr_4 [i_4 + 2] [i_0 + 1] [i_0])) : (((/* implicit */int) max((arr_5 [i_0] [i_0] [i_4] [i_3]), (((/* implicit */short) arr_4 [i_0 - 1] [i_0] [i_4])))))))))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            var_17 ^= ((/* implicit */short) ((((((/* implicit */_Bool) arr_17 [(signed char)14] [(signed char)14])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_0 [i_4]), ((unsigned short)26808))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_4] [i_0]))) / (var_10))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [3U] [i_5] [i_4 + 2] [i_3] [i_0])))));
                            arr_21 [i_6] [i_6] [i_6] [8U] [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_0] [i_0 + 2] [i_4 - 1] [i_5] [(short)17]))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_18 [i_0 - 1] [i_3] [(_Bool)1] [i_5] [i_6])), (var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) arr_5 [i_6] [i_6] [11LL] [(unsigned short)6])))))) : (arr_15 [i_0 + 2] [i_3] [i_4 + 2] [i_5] [(unsigned short)13] [i_6]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                        }
                        for (unsigned long long int i_7 = 1; i_7 < 18; i_7 += 2) 
                        {
                            arr_24 [8U] [i_0 + 2] [i_0 + 2] [i_3] [i_5] [i_5] [i_7] |= max((((/* implicit */long long int) ((unsigned int) ((short) (signed char)-68)))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) 20U)) : (((((/* implicit */_Bool) (short)26028)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
                            arr_25 [i_4] [i_4] [i_4] [(unsigned short)18] [i_4] &= ((/* implicit */unsigned short) var_4);
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_3] [i_5])) ? (max((((((/* implicit */_Bool) arr_1 [i_7] [i_4])) ? (((/* implicit */int) arr_19 [i_5] [i_3] [i_4] [i_5] [4LL])) : (((/* implicit */int) (unsigned short)1023)))), (((/* implicit */int) arr_18 [i_4 - 1] [i_4 - 1] [i_7] [i_4 - 1] [i_4])))) : (((/* implicit */int) var_5))));
                            arr_26 [i_0] [(short)18] [i_4] [i_0] [i_0] &= ((/* implicit */_Bool) (short)-12501);
                        }
                        for (unsigned short i_8 = 0; i_8 < 20; i_8 += 4) 
                        {
                            var_19 = min((((/* implicit */long long int) (!(arr_28 [i_0] [i_3] [i_4 - 2] [i_5])))), (9223372036854775799LL));
                            var_20 += ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) max((arr_12 [i_3]), (((/* implicit */unsigned short) var_5))))) || (((((/* implicit */int) var_9)) <= (((/* implicit */int) var_7)))))));
                        }
                        arr_29 [i_0 + 2] [i_0 + 2] [i_4] [i_0 + 2] [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_5))));
                    }
                } 
            } 
        }
        var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_20 [i_0] [i_0 + 2] [i_0] [i_0 - 2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (arr_20 [i_0] [i_0] [i_0] [i_0 - 2] [i_0 - 1]))) > (max((989969366U), (arr_23 [(signed char)11] [i_0] [(unsigned char)7] [i_0 - 2] [i_0 + 1] [(_Bool)1])))));
    }
    /* vectorizable */
    for (unsigned int i_9 = 2; i_9 < 18; i_9 += 1) /* same iter space */
    {
        arr_32 [i_9] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-7)) ? (-5295853675418920463LL) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_9] [i_9] [(unsigned char)10] [(unsigned char)10] [i_9]))))) < (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)18)) * (((/* implicit */int) var_11)))))));
        var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) arr_12 [i_9 + 2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_22 [(signed char)4] [i_9] [i_9] [(signed char)4])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
    }
    for (signed char i_10 = 0; i_10 < 25; i_10 += 4) 
    {
        arr_37 [(signed char)13] = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) arr_34 [i_10]))) - (((((/* implicit */int) min((arr_34 [i_10]), (arr_34 [i_10])))) ^ (((((/* implicit */int) var_0)) >> (((((/* implicit */int) (signed char)117)) - (92)))))))));
        arr_38 [4LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_8)))) + ((+(((/* implicit */int) arr_34 [i_10]))))))) ? (((((/* implicit */_Bool) ((arr_33 [i_10]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_34 [i_10]))))) ? (((((/* implicit */_Bool) arr_36 [i_10])) ? (2251799813685247ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_10]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_10]))) + (arr_35 [i_10] [i_10])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_34 [i_10]))))));
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        arr_43 [i_11] = ((/* implicit */short) min((((/* implicit */int) max((arr_12 [i_11]), (arr_12 [i_11])))), (((((/* implicit */int) arr_12 [i_11])) * (((/* implicit */int) (_Bool)1))))));
        arr_44 [i_11] [i_11] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_22 [i_11] [i_11] [i_11] [i_11])))) ? (var_4) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)26287)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_23 [16U] [i_11] [i_11] [i_11] [i_11] [i_11]))))));
    }
    var_23 = ((/* implicit */short) ((((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned char) var_9))))) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) var_8)))) < (((/* implicit */int) var_7))));
}
