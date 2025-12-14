/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237464
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_2] [i_2] [i_2])) ? ((+(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_5 [i_0 - 1] [i_0]) : (8496980643528527551LL))))))) ? (max((((/* implicit */unsigned long long int) arr_5 [i_0 + 1] [i_0 + 1])), ((~(arr_2 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_4 [i_0 - 1] [i_0 - 1] [i_2]), (((/* implicit */unsigned short) arr_3 [i_0 - 1]))))))));
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) arr_7 [i_0] [i_1] [i_2]))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) var_14))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
    {
        var_18 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3]))) & (2ULL)));
        var_19 += ((/* implicit */unsigned short) arr_9 [i_3]);
        var_20 = ((/* implicit */int) arr_1 [i_3] [(unsigned short)15]);
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3] [i_3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_3] [i_3] [i_3]))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) > (18446744073709551588ULL)))))))));
    }
    for (short i_4 = 0; i_4 < 16; i_4 += 2) 
    {
        /* LoopSeq 3 */
        for (short i_5 = 0; i_5 < 16; i_5 += 3) 
        {
            arr_16 [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_5])) ? (((/* implicit */unsigned long long int) arr_1 [i_4] [i_5])) : (arr_15 [i_4] [i_4] [7LL])))) ? (((/* implicit */unsigned int) 1720229315)) : (arr_0 [i_5])))) ? (((/* implicit */unsigned long long int) arr_12 [i_5])) : (((18446744073709551594ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_14 [i_4] [i_4] [i_5]))))))));
            var_22 = ((/* implicit */unsigned long long int) arr_0 [i_4]);
            var_23 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_11 [(short)4])) ? (((/* implicit */long long int) arr_14 [i_4] [i_4] [i_5])) : (arr_5 [i_4] [i_5]))) >= (max((((((/* implicit */_Bool) arr_2 [(signed char)17])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_4]))) : (arr_5 [i_5] [i_4]))), (arr_5 [i_5] [i_5])))));
            arr_17 [i_4] [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) max((arr_12 [i_4]), (((/* implicit */long long int) arr_6 [i_4] [i_4] [i_5] [(short)14]))))) : (max((((/* implicit */unsigned long long int) arr_12 [i_5])), (arr_2 [i_4])))))) ? (max((arr_5 [i_4] [i_5]), (((/* implicit */long long int) arr_0 [(short)1])))) : ((~(((((/* implicit */_Bool) 549755813887LL)) ? (var_9) : (((/* implicit */long long int) arr_0 [i_5]))))))));
            arr_18 [(unsigned short)8] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_5)), (arr_6 [i_4] [i_5] [i_4] [i_5]))))) - (((((/* implicit */_Bool) arr_12 [(short)14])) ? (((/* implicit */long long int) 3229666274U)) : (arr_12 [i_5])))))) ? (max(((~(arr_15 [i_4] [i_5] [i_5]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-30731))) : (arr_12 [i_5])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_4])) && (((/* implicit */_Bool) (unsigned short)65233))))), (arr_6 [i_5] [i_5] [i_4] [i_4])))))));
        }
        for (int i_6 = 2; i_6 < 12; i_6 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                arr_25 [i_6] [i_6 - 1] [i_6] = ((_Bool) ((((/* implicit */_Bool) arr_1 [i_4] [i_4])) ? (arr_13 [i_7]) : (((/* implicit */long long int) arr_10 [i_4]))));
                var_24 = ((((((/* implicit */unsigned int) 1245384630)) / (arr_10 [i_6 + 4]))) != (((/* implicit */unsigned int) arr_14 [i_7] [i_7] [(_Bool)1])));
            }
            arr_26 [i_6] [i_6] = ((/* implicit */unsigned int) (~(((/* implicit */int) max((arr_20 [i_6 + 1] [i_6] [i_4]), (arr_20 [i_6 + 2] [i_6] [i_6 + 3]))))));
            arr_27 [1LL] [0U] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_4] [i_4] [i_6] [i_4])) << (((((/* implicit */int) arr_3 [i_6 - 1])) - (10098)))));
        }
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            /* LoopSeq 4 */
            for (unsigned short i_9 = 2; i_9 < 12; i_9 += 4) 
            {
                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_32 [i_4]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 549755813887LL)) ? (arr_14 [i_4] [i_8] [i_8]) : (arr_14 [i_4] [i_4] [1LL])))) : (((((/* implicit */_Bool) arr_23 [i_4])) ? (arr_21 [i_8] [i_9 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */unsigned long long int) arr_1 [11] [i_8])) : (18446744073709551610ULL)))) ? (max((((/* implicit */unsigned long long int) var_14)), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_4] [i_4] [i_9] [i_9 + 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [2ULL]))) : (3932160U)))))) : (((((/* implicit */_Bool) arr_19 [5U] [5U])) ? (((((/* implicit */_Bool) 2147483625)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_8]))) : (arr_2 [3LL]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_4] [i_4] [i_4])))))));
                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_8 - 1])) ? (arr_13 [i_8 - 1]) : (arr_13 [i_8 - 1])))) ? (arr_13 [i_8 - 1]) : (min((arr_13 [i_8 - 1]), (arr_13 [i_8 - 1])))));
            }
            /* vectorizable */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_27 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_4])) ? (((/* implicit */int) (unsigned short)3186)) : ((-2147483647 - 1))))) >= (((((/* implicit */_Bool) 1541509234U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_4] [i_8] [i_10]))) : (var_0)))));
                var_28 = ((/* implicit */_Bool) ((((/* implicit */long long int) (~(1879370841U)))) ^ (-8496980643528527532LL)));
                arr_37 [i_10] [14] = ((/* implicit */unsigned int) ((long long int) arr_34 [i_10] [i_10] [i_10] [i_4]));
                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [i_8 - 1] [i_8 - 1] [i_8 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-13599))) : (arr_29 [i_8 - 1] [i_8 - 1] [i_8 - 1])));
                arr_38 [i_10] [6U] [i_10] [6U] = ((/* implicit */_Bool) (~(arr_15 [i_8 - 1] [i_8 - 1] [i_8])));
            }
            /* vectorizable */
            for (int i_11 = 0; i_11 < 16; i_11 += 4) 
            {
                var_30 = ((/* implicit */int) max((var_30), (((((/* implicit */_Bool) arr_24 [i_11] [i_4] [i_4])) ? (arr_24 [i_4] [i_4] [i_11]) : (arr_24 [i_11] [i_8 - 1] [i_11])))));
                arr_41 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [i_4] [i_4])) ? (((/* implicit */int) (unsigned short)23831)) : (((/* implicit */int) arr_30 [i_8] [i_11]))))) | (arr_2 [i_4])));
            }
            for (long long int i_12 = 2; i_12 < 13; i_12 += 3) 
            {
                var_31 = ((/* implicit */short) (~(max((549755813887LL), (max((((/* implicit */long long int) var_13)), (arr_12 [i_8])))))));
                arr_44 [i_4] [i_8] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_12 - 2] [i_8 - 1])) ? (((((/* implicit */_Bool) arr_22 [i_4] [i_4] [i_4] [i_4])) ? (arr_22 [i_4] [i_8] [i_4] [i_8]) : (arr_22 [i_4] [i_8 - 1] [i_4] [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_11 [i_12 - 2]))))));
            }
            var_32 = ((/* implicit */int) max((var_32), (((((/* implicit */_Bool) (-(((unsigned int) arr_34 [i_4] [i_4] [i_4] [i_4]))))) ? ((~(arr_14 [i_8 - 1] [i_8 - 1] [i_8]))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_14 [i_4] [i_4] [i_8 - 1])) ? (arr_39 [i_8 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [14] [i_8 - 1] [2ULL]))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_4)))))))))));
            var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)27100)) : (arr_7 [i_4] [i_8] [3]))), ((~(((/* implicit */int) arr_20 [(_Bool)1] [(unsigned char)4] [i_4]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_8 - 1] [i_8 - 1] [i_8 - 1]))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(4294967291U)))) < (max((((/* implicit */unsigned long long int) arr_14 [i_4] [i_4] [i_4])), (arr_35 [8] [(unsigned short)12])))))))))));
        }
        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_34 [i_4] [i_4] [i_4] [(_Bool)1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_4] [i_4] [i_4])) >= ((+(((/* implicit */int) arr_19 [i_4] [i_4])))))))) : (arr_12 [i_4])));
        var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(arr_10 [i_4])))) / (arr_13 [i_4])))) == (((((/* implicit */_Bool) arr_36 [i_4] [i_4])) ? (((unsigned long long int) arr_14 [i_4] [i_4] [i_4])) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_43 [i_4] [i_4] [i_4])), (arr_39 [(unsigned short)12])))))))))));
        arr_45 [14ULL] [14ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_4] [i_4])) ? (((/* implicit */unsigned long long int) arr_12 [i_4])) : (arr_35 [i_4] [i_4])))) ? (((((/* implicit */unsigned long long int) arr_12 [i_4])) | (arr_35 [i_4] [i_4]))) : (((((/* implicit */_Bool) arr_40 [i_4] [i_4] [i_4])) ? (arr_35 [i_4] [i_4]) : (((/* implicit */unsigned long long int) arr_21 [i_4] [i_4]))))));
    }
    /* vectorizable */
    for (unsigned int i_13 = 0; i_13 < 24; i_13 += 4) 
    {
        var_36 += ((/* implicit */long long int) (+(((arr_47 [i_13]) ? (18446744073709551605ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [19LL])))))));
        var_37 = ((/* implicit */short) arr_47 [i_13]);
    }
    var_38 = ((/* implicit */long long int) (+(((/* implicit */int) var_14))));
}
