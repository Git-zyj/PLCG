/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195120
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
    var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_8))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_3))));
    var_19 = ((/* implicit */signed char) var_15);
    var_20 = ((/* implicit */unsigned short) (+(((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_14)) : (var_12))) + (((/* implicit */int) var_0))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    var_21 ^= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-32)))))) >= (max((((/* implicit */long long int) var_3)), (arr_1 [i_0]))))))) | ((+(((long long int) var_1))))));
                    var_22 = ((/* implicit */_Bool) min(((-(((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_2])))), (((int) arr_2 [7ULL]))));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        var_23 ^= ((/* implicit */unsigned char) min(((+(((((/* implicit */int) (signed char)-23)) / (((/* implicit */int) (signed char)39)))))), ((+(((/* implicit */int) ((((/* implicit */int) var_13)) >= (arr_3 [i_2]))))))));
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            var_24 = ((/* implicit */short) (+(((((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)-37)) : (var_12)))) ^ (-6418743213634259044LL)))));
                            var_25 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) ((unsigned short) arr_10 [i_0] [i_1] [i_4] [i_3] [i_4] [7LL]))) != (((/* implicit */int) max((var_16), (((/* implicit */short) arr_9 [(unsigned short)0] [(unsigned short)0] [(unsigned short)0] [i_3] [(signed char)4] [i_4]))))))))));
                        }
                        for (int i_5 = 1; i_5 < 11; i_5 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned char) (((((((~(0LL))) + (9223372036854775807LL))) >> ((((~(arr_2 [6LL]))) - (15533065687185561662ULL))))) ^ (((((/* implicit */long long int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) arr_10 [(short)9] [i_1] [i_1] [i_2] [(short)9] [(unsigned char)9]))))) & (-6418743213634259049LL)))));
                            var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(max((-1LL), (((/* implicit */long long int) (unsigned char)102)))))))));
                            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((unsigned int) min((((/* implicit */int) var_9)), ((-(arr_5 [i_2] [(short)8])))))))));
                        }
                        for (long long int i_6 = 2; i_6 < 10; i_6 += 2) 
                        {
                            var_29 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)15)) && (((/* implicit */_Bool) var_8))))) < (((/* implicit */int) arr_7 [i_1] [i_0] [i_3] [i_6 + 1])))));
                            arr_18 [i_0] [i_0] [i_2] [i_0] [1] = ((/* implicit */_Bool) arr_3 [i_0]);
                            var_30 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_4))));
                        }
                        var_31 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)43))) : (5867074420606878498LL))))) << (((((/* implicit */int) arr_6 [i_1] [i_2] [i_3])) - (124)))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) >> (((-2164586628639674833LL) + (2164586628639674849LL)))));
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 4; i_8 < 9; i_8 += 1) 
                        {
                            var_33 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)36)) - (((/* implicit */int) (signed char)-3))));
                            var_34 = ((/* implicit */unsigned short) ((((/* implicit */int) ((max((((/* implicit */long long int) (signed char)36)), (-6418743213634259044LL))) > (((/* implicit */long long int) ((/* implicit */int) ((var_5) != (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_7])))))))))) - (((/* implicit */int) var_14))));
                        }
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        var_35 = ((/* implicit */unsigned short) (+(((unsigned long long int) arr_14 [i_9] [i_0] [(unsigned char)5] [i_9] [i_0] [i_2] [i_9]))));
                        var_36 = max((min((((((/* implicit */int) (signed char)-36)) / (((/* implicit */int) var_2)))), (((((/* implicit */int) (short)-22066)) / (arr_19 [7ULL] [i_1] [(unsigned short)3] [i_2] [i_2] [i_9]))))), (min((((/* implicit */int) arr_22 [i_0] [i_0])), (((((/* implicit */_Bool) (unsigned short)36791)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned char)242)))))));
                    }
                    var_37 -= ((/* implicit */unsigned char) (+(((/* implicit */int) ((((((/* implicit */int) (short)-22076)) | (((/* implicit */int) (unsigned char)219)))) >= (((/* implicit */int) (unsigned char)69)))))));
                    arr_25 [i_0] [i_0] [5ULL] [i_2] = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_0]))))), (((((/* implicit */int) (unsigned short)28985)) % (((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_5)))))))));
                }
                for (unsigned char i_10 = 1; i_10 < 12; i_10 += 4) 
                {
                    var_38 = ((/* implicit */short) arr_19 [(short)12] [i_1] [i_1] [i_1] [i_1] [i_1]);
                    var_39 = ((/* implicit */int) var_5);
                }
                arr_30 [i_0] = ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */int) (short)-18452)) != (((/* implicit */int) var_10))))))));
                arr_31 [i_0] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) max(((short)-1414), (((/* implicit */short) ((((/* implicit */int) (signed char)23)) >= (((/* implicit */int) var_16))))))))));
                var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) ((max((((/* implicit */long long int) ((((/* implicit */int) (short)10528)) << (((((/* implicit */int) (unsigned char)169)) - (169)))))), (max((var_8), (((/* implicit */long long int) (unsigned char)16)))))) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
}
