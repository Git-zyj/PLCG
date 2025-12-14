/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27588
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
    var_13 = ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1)));
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) -1))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) min(((signed char)23), (((signed char) ((arr_1 [i_0]) * (((/* implicit */int) var_2)))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_8 [9LL] [i_1] [i_2] = ((((/* implicit */_Bool) arr_6 [(_Bool)1] [i_1] [i_2] [8ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_0]) != (arr_1 [i_2]))))) : (var_8));
                    var_15 = ((/* implicit */_Bool) (+((+(((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        arr_11 [4U] [19] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)33)) ? (((/* implicit */int) (short)32752)) : (0)));
                        var_16 *= ((/* implicit */unsigned char) arr_5 [i_3] [i_2] [i_1]);
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_15 [i_0] [i_2] [(signed char)20] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) var_9);
                        arr_16 [i_0] [i_0] [(signed char)17] [i_0] |= ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-48))) > (((((/* implicit */_Bool) (signed char)-43)) ? (4ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)189)))))))) * (((((/* implicit */int) arr_9 [i_0] [i_1] [(signed char)10])) >> (((/* implicit */int) (!(var_1)))))));
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 152690921U)))))) : (var_6)));
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 1; i_5 < 18; i_5 += 2) 
                    {
                        var_18 = ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_2]))))) & (((-8126646572875383849LL) / (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (_Bool)1))));
                        arr_20 [i_0] [i_0] [(unsigned char)12] [i_0] [i_0] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) 7458595809809831144LL)) ? (arr_18 [i_0] [i_5 - 1] [i_5 + 2] [i_5 + 3]) : (arr_17 [i_5 + 3] [i_5] [i_5 + 1] [i_5])));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_25 [i_1] [i_2] [i_6] = (+(((/* implicit */int) var_4)));
                        /* LoopSeq 2 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_20 &= ((/* implicit */long long int) var_8);
                            arr_28 [i_7] [i_7] [i_7] [i_0] = ((/* implicit */unsigned short) ((long long int) (short)11338));
                        }
                        for (unsigned short i_8 = 1; i_8 < 19; i_8 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned char) var_4);
                            arr_31 [i_0] [i_6] = ((/* implicit */long long int) var_12);
                            var_22 &= ((/* implicit */signed char) (_Bool)0);
                            arr_32 [i_0] [i_2] [i_0] [i_6] [5ULL] [i_6] [5] = ((/* implicit */unsigned long long int) (-(min((var_10), (-1788800770)))));
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (short)-2177))));
                        }
                    }
                }
            } 
        } 
        arr_33 [17U] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_21 [(unsigned char)19])) || (((/* implicit */_Bool) arr_21 [(unsigned short)11])))) ? (((((/* implicit */_Bool) arr_21 [i_0])) ? (((/* implicit */unsigned int) -1788800774)) : (arr_21 [i_0]))) : (min((((/* implicit */unsigned int) (_Bool)1)), (var_8)))));
        arr_34 [(signed char)0] = ((/* implicit */long long int) var_10);
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_10 = 0; i_10 < 18; i_10 += 4) 
        {
            arr_42 [i_9] [i_9] = ((/* implicit */signed char) ((int) min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_9 [(short)6] [i_9] [(short)6]))))))));
            arr_43 [i_9] [i_9] = ((/* implicit */_Bool) arr_18 [i_9] [i_9] [i_10] [i_10]);
            var_24 = ((/* implicit */unsigned char) 2147483626);
            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (!(((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) >= (((((/* implicit */_Bool) arr_0 [i_9])) ? (((/* implicit */int) (unsigned short)18693)) : (((/* implicit */int) arr_29 [i_9] [i_10] [i_9] [(unsigned char)12])))))))))));
            arr_44 [i_9] = ((/* implicit */signed char) (_Bool)1);
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_26 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)243))));
            var_27 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_41 [i_9] [i_11] [i_11])), (((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_4)), ((unsigned short)46843))))) ^ (var_8)))));
            arr_49 [i_11] [i_9] = ((/* implicit */unsigned int) arr_1 [i_9]);
        }
        var_28 |= ((/* implicit */unsigned long long int) ((var_11) ^ (((/* implicit */int) (signed char)50))));
        arr_50 [(signed char)6] [i_9] = ((/* implicit */long long int) min((((((/* implicit */int) ((var_6) >= (((/* implicit */long long int) var_11))))) - ((((_Bool)1) ? (var_0) : (((/* implicit */int) var_4)))))), (((/* implicit */int) ((((/* implicit */int) (signed char)-16)) != (arr_40 [i_9] [i_9] [i_9]))))));
    }
    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
    {
        arr_55 [i_12] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-116))) % (var_6)))) ? (max((-924209943), (((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) arr_53 [i_12])))))), (((int) min(((signed char)-1), (((/* implicit */signed char) (_Bool)1)))))));
        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) 9223372036854775807LL))));
    }
    for (unsigned short i_13 = 0; i_13 < 12; i_13 += 2) 
    {
        var_30 = ((/* implicit */unsigned char) (signed char)23);
        var_31 = ((/* implicit */unsigned short) arr_30 [(signed char)13] [1] [i_13] [i_13] [i_13] [(_Bool)1]);
    }
}
