/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19776
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
    var_16 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12))))) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_15)))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        var_17 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_2 [9])) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) (unsigned char)209)))));
        var_18 ^= ((/* implicit */short) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) * (var_0))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 3) 
    {
        var_19 -= ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_4 [(short)18])) ? (((/* implicit */int) arr_6 [14ULL])) : (((/* implicit */int) arr_0 [(_Bool)1]))))))));
        arr_7 [i_1] = ((/* implicit */short) max(((~(((/* implicit */int) arr_6 [i_1 - 1])))), (((((/* implicit */_Bool) arr_6 [i_1 + 2])) ? (((/* implicit */int) arr_4 [i_1 - 1])) : (((/* implicit */int) (unsigned char)146))))));
    }
    for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        arr_20 [i_2] [i_2] [(unsigned short)7] [(unsigned short)1] [(short)11] [i_2] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_18 [(unsigned char)1] [(unsigned char)8] [4U] [4U])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_17 [(signed char)6] [(_Bool)1]))))) : (((((/* implicit */_Bool) arr_14 [i_2] [(signed char)8] [i_2])) ? (0ULL) : (((/* implicit */unsigned long long int) var_7))))))));
                        arr_21 [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) ((signed char) var_6))) || (((/* implicit */_Bool) (unsigned char)24))))) - ((((-(((/* implicit */int) var_2)))) * (((/* implicit */int) arr_19 [(_Bool)1] [(unsigned short)15] [(_Bool)1]))))));
                    }
                    arr_22 [(short)17] [i_2] [i_2] [(short)13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned int) (unsigned char)32)), (var_6))) % (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) var_2)), (var_13))), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)16367)))))))) : (min((arr_18 [i_2] [(unsigned char)11] [i_2] [i_2]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) var_14)))))))));
                    arr_23 [i_2] = ((/* implicit */unsigned short) (unsigned char)185);
                }
            } 
        } 
        var_20 = ((/* implicit */signed char) min((((/* implicit */int) arr_0 [i_2])), (((((((/* implicit */_Bool) arr_14 [i_2] [0U] [i_2])) ? (1443321244) : (((/* implicit */int) (unsigned char)225)))) << (((((((((/* implicit */_Bool) arr_3 [i_2])) ? (var_7) : (((/* implicit */int) arr_12 [i_2])))) + (1147429439))) - (13)))))));
        arr_24 [i_2] = ((/* implicit */short) var_11);
    }
    for (short i_6 = 0; i_6 < 19; i_6 += 4) 
    {
        arr_27 [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)504)))) >= (((/* implicit */int) min((((/* implicit */short) arr_12 [i_6])), ((short)2153)))))))) : (min((((((/* implicit */_Bool) arr_10 [i_6] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)47))) : (arr_16 [(unsigned short)8] [(unsigned short)8] [(unsigned short)8] [(unsigned short)8]))), (((/* implicit */unsigned long long int) (short)-505))))));
        var_21 = ((/* implicit */unsigned char) 448);
    }
}
