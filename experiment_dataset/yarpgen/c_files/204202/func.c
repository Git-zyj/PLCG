/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204202
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
    var_18 = ((/* implicit */unsigned long long int) (short)17399);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((short) (signed char)126));
        var_20 = ((/* implicit */unsigned long long int) var_2);
        var_21 = var_13;
        var_22 -= ((/* implicit */signed char) var_17);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            var_23 ^= ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_3 [i_1 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))));
            var_24 = ((/* implicit */_Bool) var_9);
        }
    }
    for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 1) 
    {
        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) arr_4 [i_2 + 1] [i_2]))));
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            var_26 = ((/* implicit */signed char) max((var_9), (((short) ((short) var_7)))));
            /* LoopSeq 2 */
            for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                arr_13 [(signed char)4] [i_3] [i_4] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) min((max((var_8), (((/* implicit */unsigned long long int) var_15)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9790041753947805535ULL)) || (var_0))))))) ? (max((arr_3 [i_2 - 2]), (arr_3 [i_2 - 1]))) : (var_4)));
                var_27 += ((/* implicit */short) (~(var_4)));
                arr_14 [i_2] [i_3] [i_3] [i_4] = ((((((/* implicit */_Bool) arr_9 [i_2 - 1])) && (((/* implicit */_Bool) arr_9 [i_2 + 1])))) ? ((+(arr_9 [i_2 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_9 [i_2 + 1])))));
            }
            for (unsigned long long int i_5 = 2; i_5 < 13; i_5 += 2) 
            {
                var_28 = max((var_4), (((((((/* implicit */int) arr_18 [i_5])) != (((/* implicit */int) var_13)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)126))) : (((((/* implicit */_Bool) (signed char)-36)) ? (14907548119645872872ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_6 = 1; i_6 < 15; i_6 += 2) 
                {
                    arr_22 [i_2] [(signed char)12] [(signed char)12] [i_2 - 1] [i_2] [i_2] = ((/* implicit */_Bool) (signed char)3);
                    arr_23 [i_2] [i_2] [i_5] [i_6] = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))), (((((/* implicit */int) min((((/* implicit */short) var_17)), (var_6)))) - (((/* implicit */int) ((short) var_12)))))));
                    arr_24 [14ULL] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_15 [i_2])), (max((((/* implicit */unsigned long long int) var_0)), (arr_17 [i_5 - 1])))));
                    arr_25 [(signed char)2] [i_3] [i_3] [i_3] = min((((/* implicit */unsigned long long int) ((_Bool) var_17))), ((-(var_11))));
                }
            }
        }
        for (unsigned long long int i_7 = 2; i_7 < 14; i_7 += 3) 
        {
            var_29 ^= ((/* implicit */unsigned long long int) (~((~(((((/* implicit */int) var_13)) * (((/* implicit */int) var_9))))))));
            arr_28 [i_7] = ((/* implicit */signed char) ((unsigned long long int) (+(((((/* implicit */_Bool) 10287654391988724054ULL)) ? (((/* implicit */int) (signed char)-18)) : (((/* implicit */int) var_14)))))));
        }
        arr_29 [i_2] = ((/* implicit */unsigned long long int) var_16);
    }
    /* LoopNest 2 */
    for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 2) 
    {
        for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 1) 
        {
            {
                arr_35 [i_8] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_30 [i_8]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 7093904015465024555ULL)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)3)))))));
                var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_5 [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-32))) : (var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((unsigned long long int) var_3))));
            }
        } 
    } 
}
