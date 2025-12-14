/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211349
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
    var_19 = ((/* implicit */unsigned int) max((((unsigned long long int) var_3)), (((/* implicit */unsigned long long int) max((((/* implicit */int) min((var_4), (((/* implicit */unsigned short) var_15))))), (min((((/* implicit */int) var_7)), (var_16))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned long long int) var_12);
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((arr_0 [i_0] [i_0]), (arr_0 [(short)16] [i_0])))) & (((unsigned long long int) arr_0 [i_0] [i_0]))));
    }
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_3 = 3; i_3 < 20; i_3 += 4) 
            {
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_6 [i_2 - 1] [i_1]) ^ (arr_6 [i_2 - 2] [i_1])))) ? (arr_4 [i_1]) : (arr_4 [i_1])));
                var_22 |= ((/* implicit */int) (-(((((/* implicit */_Bool) min((arr_6 [i_2] [10LL]), (((/* implicit */unsigned long long int) arr_7 [i_2 + 1] [(_Bool)1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_13)), (var_7))))) : (var_9)))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (-(min((min((arr_4 [20ULL]), (((/* implicit */unsigned int) arr_8 [i_2 + 3])))), (((/* implicit */unsigned int) ((_Bool) var_10))))))))));
                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) var_9))));
                var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) arr_7 [i_1] [(short)10]))));
                arr_14 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((arr_8 [i_1]) ? (((unsigned int) arr_6 [i_1] [i_1])) : (((/* implicit */unsigned int) max((max((((/* implicit */int) arr_13 [15U] [i_2] [10ULL])), (arr_11 [11ULL] [i_1] [i_1] [i_1]))), (((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_1])))))))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 2; i_5 < 23; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 2; i_6 < 20; i_6 += 4) 
                    {
                        {
                            var_26 -= ((/* implicit */unsigned short) ((min((arr_6 [i_1] [i_6]), (((((/* implicit */_Bool) 2180664312U)) ? (((/* implicit */unsigned long long int) 2114302984U)) : (18223753404722042236ULL))))) > (((/* implicit */unsigned long long int) 2114302985U))));
                            var_27 -= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_17 [(short)23] [i_6 - 2] [i_2 - 2] [20ULL] [10ULL] [10ULL] [i_5 + 1])) >= (((/* implicit */int) arr_17 [16] [i_6 + 1] [i_2 + 3] [(_Bool)1] [i_6] [22LL] [i_5 - 1])))) ? (((/* implicit */int) ((unsigned short) arr_17 [i_1] [i_6 - 2] [i_2 + 2] [i_5 + 1] [i_6 - 1] [19ULL] [i_5 + 1]))) : (((/* implicit */int) ((unsigned short) arr_17 [i_1] [i_6 + 3] [i_2 - 2] [i_6 + 3] [5ULL] [i_6 + 3] [i_5 - 1])))));
                        }
                    } 
                } 
            }
            arr_20 [i_1] = ((/* implicit */_Bool) arr_11 [i_1] [i_1] [2ULL] [22U]);
            var_28 = (~(((arr_8 [i_2 - 1]) ? (arr_12 [i_1] [i_2 + 1]) : (arr_12 [i_1] [i_2 + 2]))));
        }
        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) (+(((/* implicit */int) var_4)))))));
    }
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 17; i_7 += 4) 
    {
        var_30 = ((/* implicit */unsigned long long int) max((var_30), ((~(((var_2) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
        arr_24 [i_7] = ((/* implicit */long long int) ((((/* implicit */unsigned int) var_11)) ^ (((((/* implicit */_Bool) arr_5 [i_7] [i_7])) ? (arr_16 [i_7] [0ULL] [4ULL] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_7] [i_7] [12ULL] [i_7] [19ULL] [i_7] [i_7])))))));
    }
}
