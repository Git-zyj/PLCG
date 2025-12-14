/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211899
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
    var_15 = ((/* implicit */unsigned short) (+(((((/* implicit */int) var_11)) * (((/* implicit */int) (unsigned short)23417))))));
    var_16 ^= ((/* implicit */unsigned char) var_7);
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) min((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))))), (((((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))))))))));
    var_18 = ((/* implicit */unsigned int) (_Bool)0);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0] [i_1 + 2] [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) min((var_10), (((/* implicit */unsigned short) (unsigned char)99))))))) : (((unsigned int) arr_4 [i_2]))));
                    var_20 = ((/* implicit */short) (~(((/* implicit */int) var_11))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        var_21 ^= ((/* implicit */unsigned short) (((-(((/* implicit */int) (unsigned char)157)))) == (((/* implicit */int) ((short) arr_4 [i_0])))));
                        arr_14 [i_0] [i_1 + 1] [i_2] [i_2] = (unsigned short)2336;
                        arr_15 [i_0] [7ULL] [7ULL] [i_2] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)99)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_7 [i_0] [i_2] [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (min((var_6), (((/* implicit */unsigned int) var_1)))))), (((/* implicit */unsigned int) ((var_8) > (((/* implicit */unsigned int) (-(((/* implicit */int) var_14))))))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_2] [(short)5])) ? (((/* implicit */int) ((unsigned char) 4509553785369743518ULL))) : ((-(((/* implicit */int) arr_2 [i_2] [i_2]))))));
                            arr_19 [i_0] [i_1] [i_2] [i_0] [i_2] = ((/* implicit */short) ((4294967283U) != (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                            var_23 ^= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_0] [i_4])) : (((/* implicit */int) var_2))))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 14; i_5 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned char) arr_21 [i_3] [i_3] [5ULL] [i_3] [i_3]);
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) min((min((arr_4 [i_0]), (arr_22 [i_0] [(short)9] [i_2] [i_3] [(short)0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)17498)) ? (1362736898U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))))));
                            var_26 ^= ((/* implicit */unsigned long long int) min(((+((+(var_6))))), (min((((/* implicit */unsigned int) (short)-31505)), (2681684364U)))));
                        }
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 2) /* same iter space */
                    {
                        var_27 = ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_1 - 1]))));
                        var_28 = ((/* implicit */unsigned long long int) ((arr_23 [i_2] [i_1 + 2]) < (arr_23 [i_2] [i_1 + 2])));
                        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_0] [i_1 - 1] [i_2] [i_2]))))) || ((_Bool)1)));
                        arr_25 [i_0] [i_2] [i_2] [i_6] = ((unsigned long long int) (_Bool)1);
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 2) /* same iter space */
                    {
                        var_30 ^= ((short) min((((/* implicit */unsigned long long int) (_Bool)1)), (13588833856443038202ULL)));
                        arr_29 [i_2] [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_1 + 2] [i_1] [i_1] [i_1 - 2])) && (((/* implicit */_Bool) arr_11 [i_1 - 1] [5ULL] [i_1 - 2] [i_1 - 1]))))), ((+(((/* implicit */int) arr_11 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 2]))))));
                        arr_30 [i_0] [i_2] = ((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_10 [i_0] [i_1 + 2] [i_1])), ((-(((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_0]))))))) | (((((arr_9 [i_2] [i_1] [i_2]) | (arr_16 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1]))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((var_8) - (1565848919U)))))))));
                        arr_31 [i_0] [i_2] [(unsigned short)12] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)156)));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 2) /* same iter space */
                    {
                        arr_34 [i_0] [i_1] [i_0] [i_2] [i_8] [i_2] = ((/* implicit */short) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_11))));
                        arr_35 [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned char)99)) ? (((/* implicit */int) arr_13 [i_2])) : (((/* implicit */int) var_5))))));
                    }
                }
            } 
        } 
    } 
}
