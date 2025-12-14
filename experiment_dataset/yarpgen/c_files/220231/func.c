/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220231
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
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (~((-(var_1))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((-(var_5))), (((/* implicit */unsigned int) arr_1 [i_0]))))) ? (((((/* implicit */int) arr_1 [i_0])) >> ((((~(arr_0 [i_0] [i_0]))) - (2065831787))))) : (((/* implicit */int) min((((/* implicit */unsigned short) ((unsigned char) arr_1 [(unsigned char)13]))), (arr_1 [i_0]))))));
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) arr_1 [i_0])))))) : (((unsigned int) arr_0 [i_0] [(_Bool)1])))) : (((/* implicit */unsigned int) (~(min((arr_0 [(_Bool)1] [i_0]), (arr_0 [i_0] [i_0]))))))));
        /* LoopSeq 4 */
        for (short i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1]))));
            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) || (((/* implicit */_Bool) arr_0 [i_0] [i_1])))) && (((/* implicit */_Bool) min((arr_4 [i_0]), (arr_4 [i_1])))))))));
        }
        for (short i_2 = 0; i_2 < 22; i_2 += 2) /* same iter space */
        {
            arr_8 [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_6 [i_0] [i_2])), (var_4)))) ? ((-(arr_7 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [(_Bool)1])))))), (var_1)));
            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) 4002363474787758182LL)) ? (14370312059300465745ULL) : (((/* implicit */unsigned long long int) 0U))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                for (signed char i_4 = 4; i_4 < 18; i_4 += 3) 
                {
                    {
                        arr_16 [i_2] [i_2] |= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((unsigned int) arr_3 [i_4 + 3] [i_4]))) ? ((~(arr_10 [(signed char)20] [i_2] [i_3] [i_2]))) : ((~(((/* implicit */int) (signed char)-1)))))), (((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_3])) ? (((((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_3] [i_4 - 4])) ? (((/* implicit */int) arr_3 [i_0] [(signed char)16])) : (((/* implicit */int) var_7)))) : (((arr_5 [i_4] [15]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_6 [i_0] [i_3]))))))));
                        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) arr_1 [i_0])))) ^ (((/* implicit */int) arr_1 [10LL])))))));
                    }
                } 
            } 
            arr_17 [18LL] = ((/* implicit */int) (+(arr_12 [i_0] [i_0])));
        }
        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_5]))))) | (((/* implicit */int) arr_14 [i_5] [i_5] [(_Bool)1] [i_5]))));
            var_28 = ((/* implicit */_Bool) arr_1 [i_0]);
            arr_20 [i_0] [i_5] = ((/* implicit */short) arr_10 [i_0] [i_0] [i_5] [i_5]);
            /* LoopSeq 2 */
            for (unsigned long long int i_6 = 4; i_6 < 18; i_6 += 2) 
            {
                var_29 = ((/* implicit */int) ((((arr_7 [i_6 - 1]) / (((var_3) ? (var_13) : (((/* implicit */unsigned int) arr_10 [i_0] [i_5] [i_5] [i_6])))))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_5] [i_5])))));
                var_30 = ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 296408742)))) == (((unsigned int) var_17))));
                arr_23 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */long long int) var_12);
                arr_24 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_13 [i_0] [i_0] [i_6] [i_0]);
                /* LoopNest 2 */
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    for (signed char i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        {
                            var_31 -= ((/* implicit */unsigned short) (!(((((var_9) ^ (var_12))) < (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_3 [21ULL] [i_8])) : (((/* implicit */int) arr_29 [i_0]))))))));
                            var_32 &= ((/* implicit */int) ((short) arr_6 [i_6] [(signed char)20]));
                        }
                    } 
                } 
            }
            for (long long int i_9 = 0; i_9 < 22; i_9 += 3) 
            {
                arr_33 [i_9] [(short)14] = ((((/* implicit */unsigned int) ((((arr_19 [i_0] [i_5] [i_5]) && (((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_27 [(signed char)4] [i_5] [(short)17] [i_5])), (arr_1 [i_9])))) : (((/* implicit */int) arr_13 [(_Bool)1] [i_5] [i_9] [i_9]))))) ^ (arr_4 [i_9]));
                arr_34 [i_0] [i_5] [i_9] &= ((/* implicit */short) ((int) arr_30 [i_0] [i_5] [i_9]));
                arr_35 [i_0] [i_9] [i_0] = ((/* implicit */unsigned int) arr_3 [i_0] [i_0]);
                arr_36 [i_9] = ((/* implicit */int) var_15);
                /* LoopSeq 2 */
                for (signed char i_10 = 0; i_10 < 22; i_10 += 2) 
                {
                    arr_39 [i_0] [i_9] = ((/* implicit */signed char) ((((/* implicit */int) arr_14 [(short)10] [i_5] [i_5] [i_9])) - (((/* implicit */int) arr_5 [(signed char)5] [i_9]))));
                    arr_40 [2LL] [i_5] [i_9] [i_9] [i_10] [i_9] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (var_13))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_29 [i_0])) : (((/* implicit */int) var_6))))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [(signed char)4])) && (((/* implicit */_Bool) var_8))))) < (((((/* implicit */int) arr_26 [i_0] [0ULL] [i_5] [(unsigned short)1] [i_9] [i_10])) - (((/* implicit */int) arr_30 [i_0] [i_0] [i_0])))))))));
                }
                /* vectorizable */
                for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 3) 
                {
                    var_33 *= arr_22 [i_0] [(signed char)14] [i_9];
                    var_34 = ((/* implicit */unsigned int) var_18);
                }
            }
            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) (~((~(arr_0 [i_5] [i_0])))))) : (((((/* implicit */_Bool) ((arr_15 [i_5] [i_5] [i_0] [i_5]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_5] [10U]))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) & (arr_4 [i_0])))))));
        }
        for (int i_12 = 1; i_12 < 21; i_12 += 2) 
        {
            var_36 |= min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_12 - 1] [i_12 + 1]))))), (((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_16)), (arr_14 [0] [i_0] [i_0] [0]))))) * (((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [i_12]))) * (var_5))))));
            var_37 -= ((/* implicit */signed char) min((arr_44 [i_0]), (((/* implicit */unsigned int) arr_6 [i_12] [i_0]))));
        }
    }
    for (short i_13 = 0; i_13 < 22; i_13 += 3) /* same iter space */
    {
        var_38 = arr_1 [i_13];
        arr_49 [(unsigned char)0] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [14LL] [i_13] [i_13] [14LL]))))) <= (((arr_19 [i_13] [i_13] [i_13]) ? (((/* implicit */int) arr_19 [i_13] [i_13] [i_13])) : (((/* implicit */int) arr_19 [i_13] [i_13] [i_13]))))));
    }
    var_39 = ((/* implicit */signed char) ((((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_4))))) ^ (min((((/* implicit */long long int) var_2)), (var_19)))));
}
