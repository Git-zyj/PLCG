/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35209
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
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            arr_14 [i_1] = ((/* implicit */unsigned int) var_12);
                            arr_15 [i_0 + 1] [i_1] = ((/* implicit */_Bool) 0ULL);
                            var_13 += ((/* implicit */long long int) ((unsigned long long int) max((((unsigned long long int) arr_0 [i_2] [i_2])), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 3; i_4 < 24; i_4 += 3) 
                {
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (unsigned long long int i_6 = 1; i_6 < 24; i_6 += 3) 
                            {
                                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (+(((/* implicit */int) arr_21 [i_4] [i_4] [i_1] [i_5])))))));
                                arr_26 [(unsigned short)22] [i_1] [i_4] [i_5] [(unsigned short)18] [i_1] [i_1 - 1] = ((/* implicit */unsigned long long int) ((arr_6 [i_1] [i_1]) ^ (((/* implicit */int) arr_10 [i_6 - 1] [i_6]))));
                            }
                            /* vectorizable */
                            for (unsigned char i_7 = 1; i_7 < 23; i_7 += 4) 
                            {
                                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) -5841919808448002336LL)) : (18446744073709551615ULL))) : (18446744073709551615ULL))))));
                                arr_31 [i_0] [i_1] [i_0] [(short)22] [i_7] |= ((((/* implicit */_Bool) arr_19 [i_0] [(_Bool)1] [i_4 + 1] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_17 [i_0] [i_0] [i_0])))) : (arr_13 [i_0] [i_1] [i_0] [i_1] [i_5] [i_7]));
                            }
                            /* vectorizable */
                            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                            {
                                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((short) arr_20 [i_0] [i_1 - 1] [i_5])))));
                                var_17 = ((((/* implicit */int) arr_29 [i_1] [i_4 + 1] [16ULL] [i_0 - 2] [i_1] [i_1])) <= ((((_Bool)1) ? (var_3) : (var_10))));
                                arr_34 [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_11 [i_5] [i_4] [24LL] [i_0])))))));
                            }
                            var_18 = ((/* implicit */unsigned int) max(((-(var_10))), (var_10)));
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_0] [i_1 - 1] [i_1] [5] [i_1] [i_1 - 1])) >> (((/* implicit */int) arr_24 [i_0 - 1] [i_1 - 1] [i_5] [i_5] [i_1 - 1] [i_5]))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_5] [i_4] [i_1] [i_0] [i_0]))) | (18446744073709551594ULL))))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))));
                            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (((~(((arr_30 [i_0] [(short)8] [i_4] [i_0] [i_5]) | (((/* implicit */unsigned long long int) arr_18 [i_0] [(unsigned short)1] [i_1] [i_4] [i_5])))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_5])) | (((/* implicit */int) var_2))))) ? (var_11) : (((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */int) arr_22 [4ULL] [4ULL] [4ULL] [(_Bool)1] [(signed char)9]))))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) var_5);
}
