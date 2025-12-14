/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46950
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
    var_14 &= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) min((var_13), (var_5)))) + (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) (~((+(((arr_2 [i_0]) - (arr_3 [i_0])))))));
                var_15 += ((/* implicit */unsigned long long int) max((((/* implicit */int) (short)3914)), (min((((/* implicit */int) arr_1 [i_1])), ((-(965987214)))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 1; i_2 < 24; i_2 += 2) 
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (-((~((-(((/* implicit */int) (unsigned char)132))))))));
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [21ULL])) << (((arr_0 [i_1]) - (14941982652457079463ULL))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))))) ? (min((((arr_3 [i_0]) + (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [(short)0] [i_2])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [(short)6] [(short)6] [(short)6])) == (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0]))))))))));
                }
                for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 1) /* same iter space */
                {
                    var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)152)))))));
                    var_18 = ((/* implicit */short) ((((arr_2 [i_0]) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)36))))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0])))));
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [15ULL])))) == (((((/* implicit */int) arr_1 [(signed char)21])) + (((/* implicit */int) arr_9 [4] [2ULL]))))))) % (((/* implicit */int) ((((/* implicit */_Bool) (~(arr_0 [i_3 + 1])))) || (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0]))) == (arr_10 [i_0] [i_0] [i_3])))))))))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        for (short i_5 = 0; i_5 < 25; i_5 += 4) 
                        {
                            {
                                arr_15 [i_4] [i_4] [i_4] [i_4] |= ((/* implicit */int) ((arr_0 [i_0]) % (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0]))))), (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_5] [i_0] [i_0] [10] [i_0]))))))));
                                arr_16 [i_5] [i_0] [i_3 - 1] [2ULL] [i_0] [2ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1073610752)) ? (4642197885907237756ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-155)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_12 [i_1] [i_3] [i_1] [i_5]) && (((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_3])))))) % ((+(arr_10 [i_5] [i_3] [i_3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_12 [i_0] [i_0] [i_0] [i_5]) && (((/* implicit */_Bool) min((((/* implicit */signed char) arr_12 [i_4] [i_4] [24ULL] [i_4])), (arr_6 [i_0]))))))))));
                                arr_17 [i_0] [i_1] [i_0] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_0] [i_0])) ? (min((((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [22ULL])) ? (arr_0 [(signed char)13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3] [i_0]))))), (((/* implicit */unsigned long long int) max((arr_6 [(unsigned char)12]), (((/* implicit */signed char) arr_12 [(unsigned char)10] [i_1] [i_3 - 2] [i_3 - 2]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3 + 2])))));
                                var_20 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((arr_2 [i_4]), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_5]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_4] [(unsigned char)14] [(unsigned char)14] [i_4] [i_4] [i_4] [i_4])) && (arr_12 [i_0] [i_0] [(_Bool)1] [i_5])))) : (((((/* implicit */_Bool) arr_11 [i_5] [i_5])) ? (((/* implicit */int) arr_9 [i_1] [i_5])) : (((/* implicit */int) arr_6 [(short)4])))))) << ((((+(((((/* implicit */int) (unsigned char)138)) ^ (((/* implicit */int) (signed char)0)))))) - (133)))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) (+(min((((arr_3 [i_3]) | (arr_3 [i_1]))), (((/* implicit */unsigned long long int) (-(arr_7 [i_0] [i_0] [i_0] [i_0]))))))));
                }
                /* vectorizable */
                for (unsigned long long int i_6 = 2; i_6 < 22; i_6 += 1) /* same iter space */
                {
                    arr_22 [i_0] [4ULL] [i_6] &= ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) + (arr_21 [i_0] [(_Bool)0] [i_6]))) - (((/* implicit */unsigned long long int) arr_7 [(signed char)24] [i_6 - 2] [i_6 + 1] [i_6 + 3]))));
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 0; i_7 < 25; i_7 += 4) /* same iter space */
                    {
                        arr_25 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_6]))) != (arr_10 [i_0] [i_1] [i_7])))) | (((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) > (((/* implicit */int) (_Bool)1)))))));
                        arr_26 [i_0] [i_0] [i_6] [i_6] = ((/* implicit */_Bool) ((arr_0 [i_6 - 2]) % (arr_0 [i_6 + 2])));
                    }
                    for (unsigned char i_8 = 0; i_8 < 25; i_8 += 4) /* same iter space */
                    {
                        var_21 *= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_13 [(unsigned char)24] [i_0] [i_8] [i_6 + 1] [i_8] [i_0] [i_0])) || (((/* implicit */_Bool) arr_9 [i_8] [i_8]))))) | (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) || (((/* implicit */_Bool) arr_3 [i_0])))))));
                        arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */unsigned long long int) arr_24 [i_0])) ^ (arr_21 [i_0] [i_0] [i_8]));
                        arr_32 [i_0] [i_1] [i_1] [i_6] [i_6] [i_0] = ((/* implicit */unsigned char) ((arr_2 [i_0]) ^ (arr_2 [i_0])));
                        var_22 = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) (((~(((/* implicit */int) arr_29 [i_0] [i_6 - 1] [i_1] [i_0])))) + (((((/* implicit */int) arr_30 [i_0] [(unsigned char)14] [i_0] [i_0])) >> (((((/* implicit */int) arr_9 [11ULL] [i_0])) + (649)))))))) : (((/* implicit */unsigned char) (((~(((/* implicit */int) arr_29 [i_0] [i_6 - 1] [i_1] [i_0])))) + (((((/* implicit */int) arr_30 [i_0] [(unsigned char)14] [i_0] [i_0])) >> (((((((/* implicit */int) arr_9 [11ULL] [i_0])) + (649))) - (13811))))))));
                    }
                    arr_33 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_9 [i_1] [i_0]);
                    arr_34 [i_6] [i_6] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((((((/* implicit */int) arr_11 [i_0] [i_0])) + (arr_7 [i_0] [i_1] [i_0] [i_6 - 2]))) + (2147483647))) >> (((((arr_0 [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_1] [i_6] [i_6 - 1] [i_6]))))) - (11993ULL)))))) : (((/* implicit */unsigned long long int) ((((((((((/* implicit */int) arr_11 [i_0] [i_0])) + (arr_7 [i_0] [i_1] [i_0] [i_6 - 2]))) - (2147483647))) + (2147483647))) >> (((((((arr_0 [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_1] [i_6] [i_6 - 1] [i_6]))))) - (11993ULL))) - (14941982652457067477ULL))))));
                    /* LoopSeq 1 */
                    for (signed char i_9 = 3; i_9 < 24; i_9 += 2) 
                    {
                        arr_38 [i_0] [i_1] [i_1] [(unsigned char)1] [i_9 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_21 [i_0] [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) arr_24 [i_0]))))) ? (((arr_21 [(signed char)1] [i_0] [i_9]) >> (((((/* implicit */int) arr_19 [i_0] [(short)13] [i_6])) - (84))))) : ((-(arr_37 [i_0] [i_0] [i_0] [i_0])))));
                        var_23 = ((/* implicit */short) (((-(((/* implicit */int) arr_19 [i_9] [i_1] [i_6 + 2])))) ^ (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))));
                    }
                }
                arr_39 [i_0] = ((/* implicit */unsigned long long int) arr_23 [i_1] [i_1] [(signed char)13] [i_1] [(signed char)13]);
            }
        } 
    } 
    var_24 = ((/* implicit */short) max((max((((((/* implicit */int) var_5)) & (((/* implicit */int) var_0)))), (((((/* implicit */int) var_11)) >> (((((/* implicit */int) var_8)) - (172))))))), ((~(((/* implicit */int) min((((/* implicit */unsigned char) var_6)), (var_0))))))));
}
