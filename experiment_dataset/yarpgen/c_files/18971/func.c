/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18971
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
    var_18 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 1; i_2 < 15; i_2 += 2) 
                {
                    arr_7 [i_0] [i_1] [i_1] [i_2 + 1] &= ((/* implicit */unsigned char) ((14274348784014308486ULL) ^ (1643773047012361331ULL)));
                    arr_8 [i_0] = ((/* implicit */unsigned int) arr_0 [0ULL] [i_1]);
                    var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? ((+(((/* implicit */int) var_2)))) : (((((/* implicit */int) (short)24065)) ^ (arr_0 [i_2 - 1] [13])))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))) | (min((var_4), (var_1))))))));
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_1 [i_3] [(_Bool)1]))));
                            var_22 = ((/* implicit */unsigned short) max(((+(arr_11 [i_1] [i_3] [i_4]))), (((/* implicit */unsigned long long int) ((arr_6 [i_0]) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) var_17)))))));
                            /* LoopSeq 2 */
                            for (unsigned char i_5 = 2; i_5 < 13; i_5 += 2) 
                            {
                                arr_18 [i_0] [i_0] [i_0] [i_4] [i_0] = ((((((((/* implicit */_Bool) arr_17 [(_Bool)1] [i_1] [i_1] [i_4] [i_5] [i_5 - 2])) ? (((/* implicit */int) arr_17 [i_4] [i_1] [i_3] [i_4] [i_5] [i_5 + 2])) : (((/* implicit */int) var_13)))) + (2147483647))) << (((((/* implicit */int) (unsigned short)48501)) - (48501))));
                                var_23 = ((/* implicit */_Bool) min(((~(((((((/* implicit */int) arr_13 [i_1] [i_1] [i_3] [(unsigned char)4] [i_5 + 2] [i_5 - 1])) + (2147483647))) >> (((((/* implicit */int) var_6)) + (26915))))))), (max((((((/* implicit */int) arr_14 [i_0] [i_0] [i_5 - 2])) & (arr_0 [i_4] [4]))), (((/* implicit */int) var_14))))));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 16; i_6 += 1) 
                            {
                                var_24 ^= arr_17 [i_0] [i_1] [i_3] [i_3] [i_4] [i_6];
                                arr_21 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_17))) ? (((/* implicit */int) (unsigned short)17041)) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_0]))));
                                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48494))) > (((((/* implicit */_Bool) arr_9 [i_0] [i_3] [i_1] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_1] [i_0] [i_4] [i_1] [i_1] [i_0]))) : (arr_19 [i_1] [i_0]))))))));
                            }
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    arr_24 [i_0] [i_1] [i_1] [i_1] &= ((/* implicit */int) var_5);
                    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (-((-(((/* implicit */int) (signed char)-84)))))))));
                    /* LoopSeq 1 */
                    for (int i_8 = 0; i_8 < 16; i_8 += 4) 
                    {
                        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_7])) && (((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_7]))));
                        var_28 = ((/* implicit */int) ((_Bool) arr_2 [i_0]));
                    }
                }
                for (unsigned long long int i_9 = 3; i_9 < 15; i_9 += 4) 
                {
                    var_29 -= ((((/* implicit */_Bool) arr_16 [i_9] [i_1] [i_1] [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_4) / (((/* implicit */unsigned long long int) var_12))))))))) : (min((((((/* implicit */unsigned long long int) 3379502325614966847LL)) ^ (arr_19 [3] [i_1]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))))));
                    var_30 = ((/* implicit */unsigned int) (-((~(max((var_1), (((/* implicit */unsigned long long int) var_10))))))));
                    var_31 = ((/* implicit */unsigned int) arr_26 [i_9] [i_0] [i_0] [i_9 - 3]);
                    var_32 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) | (1643773047012361306ULL))))));
                    var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_9 - 1] [i_0] [i_0])) || (((/* implicit */_Bool) var_0)))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) max(((unsigned short)24), (((/* implicit */unsigned short) arr_20 [i_0] [i_0] [i_9 + 1] [i_1] [i_0] [i_9] [i_9 - 1]))))), (((((/* implicit */_Bool) 16802971026697190264ULL)) ? (-1502928854) : (((/* implicit */int) (unsigned short)17040))))))) : (arr_22 [i_1])));
                }
                arr_31 [i_0] [i_0] = (-(((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) * (var_1))))));
                arr_32 [i_1] [i_0] = ((/* implicit */short) ((max((((/* implicit */int) var_16)), (var_8))) & ((-(((/* implicit */int) var_7))))));
            }
        } 
    } 
    var_34 *= ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) var_2)), (max((4172395289695243143ULL), (((/* implicit */unsigned long long int) 5257553823266929895LL)))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    var_35 -= ((/* implicit */short) (~(((/* implicit */int) min((((/* implicit */unsigned short) var_15)), (var_10))))));
}
