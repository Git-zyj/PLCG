/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190776
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
    var_15 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)62890)) < (((/* implicit */int) (short)24703))))) % (max((((/* implicit */int) var_4)), ((~(((/* implicit */int) var_5))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 4; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_1 + 2] = ((/* implicit */unsigned char) (+(((/* implicit */int) max((var_2), (((/* implicit */short) arr_4 [i_0] [i_1 - 3])))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        var_16 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_2]))))) - ((+(11561035713603129208ULL)))))) ? (min((((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_3 [i_2]))))), (((((/* implicit */int) arr_2 [17ULL])) + (((/* implicit */int) arr_1 [(unsigned short)11])))))) : (((/* implicit */int) max(((unsigned short)38698), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 6885708360106422407ULL)) || (((/* implicit */_Bool) (unsigned short)10873))))))))));
                        var_17 = ((/* implicit */unsigned char) min((6885708360106422379ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */short) arr_0 [i_0])), ((short)-4297)))) | (((/* implicit */int) min((arr_3 [i_0]), (((/* implicit */unsigned short) arr_0 [i_2]))))))))));
                        var_18 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)128))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (short)-27369))))))))));
                        var_19 += ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_11 [(unsigned short)19] [i_1 - 3] [i_1 - 4] [i_1 - 3])) + (((/* implicit */int) arr_11 [i_1] [i_1 - 3] [i_1 - 3] [i_1 + 2]))))));
                    }
                    for (short i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (unsigned char)4))))));
                        var_21 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned char) var_3))), ((+(((/* implicit */int) var_5))))))) ^ (((unsigned long long int) (+(((/* implicit */int) (unsigned char)14)))))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        arr_18 [i_0] [i_1] [i_2] [i_5] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-16384))))) ? (3772115604223082562ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)46)))));
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            arr_21 [(short)12] [i_1] [i_2] [i_6] [i_6] = ((/* implicit */short) (+((+(((/* implicit */int) arr_14 [i_6] [(short)19] [i_5] [(unsigned short)5] [(short)6] [(unsigned short)1]))))));
                            var_22 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)11)) && (((/* implicit */_Bool) (short)-19189))));
                        }
                        for (short i_7 = 0; i_7 < 20; i_7 += 1) 
                        {
                            var_23 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1 - 3] [i_1 - 4] [i_1 - 3] [i_5])) ? ((+(((/* implicit */int) arr_9 [i_0] [i_0])))) : (((/* implicit */int) (unsigned char)223))));
                            var_24 = ((/* implicit */unsigned short) (+(((((/* implicit */int) var_9)) * (((/* implicit */int) (short)19189))))));
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (unsigned char)77))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned short i_8 = 1; i_8 < 17; i_8 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_8 + 2] [i_8 + 2])) ? (((/* implicit */int) arr_8 [i_0] [i_2] [i_8 + 2] [(unsigned short)13])) : (((/* implicit */int) arr_8 [i_2] [i_8] [i_8 + 2] [i_8 + 2]))));
                        /* LoopSeq 2 */
                        for (unsigned char i_9 = 3; i_9 < 19; i_9 += 1) 
                        {
                            var_27 = ((/* implicit */short) (+(((/* implicit */int) arr_19 [i_0] [i_0] [(short)3] [i_0] [i_0]))));
                            arr_29 [i_9] [i_8] [i_2] [12ULL] [i_1] [i_1] [i_0] |= (unsigned char)209;
                            var_28 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)20)) : (((/* implicit */int) arr_2 [i_9]))))));
                        }
                        for (short i_10 = 1; i_10 < 16; i_10 += 4) 
                        {
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-19211)) < (((/* implicit */int) arr_3 [i_10 + 2]))));
                            arr_32 [i_10] [i_1 - 1] [i_10] = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)19189))));
                            var_30 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_25 [i_0] [(short)19] [i_2] [(unsigned char)9])) && (((/* implicit */_Bool) (unsigned char)252)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_8 + 1] [i_8 + 1] [i_8 + 3] [i_8 + 1] [i_10 + 2]))) : (((unsigned long long int) var_10))));
                            var_31 &= ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_4 [(unsigned short)17] [i_1 - 1]))))));
                        }
                    }
                    arr_33 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (((+(((/* implicit */int) ((((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0])) <= (((/* implicit */int) arr_6 [17ULL] [i_1] [17ULL]))))))) * (((/* implicit */int) var_14))));
                    var_32 = ((/* implicit */unsigned long long int) ((unsigned short) (+(16405370622087229408ULL))));
                }
                var_33 = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_1 - 1])))) | (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_0] [(unsigned short)17] [(unsigned short)16] [i_0])) || (((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_0] [i_0] [i_1 + 1]))))) == ((~(((/* implicit */int) var_2)))))))));
            }
        } 
    } 
    var_34 |= max((((min((((/* implicit */unsigned long long int) (short)31301)), (11561035713603129208ULL))) ^ ((+(11561035713603129211ULL))))), (((/* implicit */unsigned long long int) var_13)));
}
