/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231497
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 3) 
                            {
                                var_10 = ((/* implicit */_Bool) var_1);
                                var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) (((+(arr_10 [i_4 + 3] [i_4 - 2] [i_4 - 1] [i_4 - 2] [i_4 + 1]))) > (((((/* implicit */long long int) var_2)) % (arr_10 [i_4 - 2] [i_4 - 2] [i_4 + 4] [i_4 + 1] [i_4 + 1]))))))));
                            }
                            for (unsigned char i_5 = 1; i_5 < 18; i_5 += 1) 
                            {
                                var_12 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (var_2)))) * (((((var_7) + (9223372036854775807LL))) >> (((((/* implicit */int) var_3)) - (60))))))));
                                var_13 = ((/* implicit */_Bool) min(((+(((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))), (((arr_4 [i_5] [i_2] [i_0]) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_4 [i_2] [i_2] [i_5 - 1]))))));
                                arr_15 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] [19ULL] = ((/* implicit */signed char) ((((_Bool) (+(((/* implicit */int) arr_2 [(unsigned short)4]))))) ? (((((/* implicit */int) var_5)) * ((-(((/* implicit */int) var_0)))))) : (((/* implicit */int) var_0))));
                                var_14 = ((/* implicit */unsigned int) min((arr_9 [i_1] [i_5 + 2] [i_5 - 1] [i_5 + 4]), (((/* implicit */unsigned short) ((_Bool) var_7)))));
                                arr_16 [i_5 + 4] [i_3] [i_2] [i_1] [5ULL] |= ((/* implicit */unsigned int) var_0);
                            }
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                            {
                                arr_19 [i_0] [12U] [(signed char)5] [4LL] = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_2 [i_2])))), (((/* implicit */int) arr_18 [i_0] [i_3] [i_3] [i_2] [i_0] [i_0] [i_0]))));
                                arr_20 [i_6] [i_6] [(_Bool)1] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [14ULL] [i_1])) ? (arr_0 [i_3] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? ((~(((/* implicit */int) (unsigned char)59)))) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [13ULL] [i_0] [i_6]))));
                                arr_21 [14ULL] [i_1] [17ULL] [7U] [i_6] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [(signed char)13] [(signed char)13] [(signed char)13] [i_3] [i_3]))))), (min((var_2), (((/* implicit */unsigned int) arr_11 [i_6] [i_3] [i_2] [i_1] [i_0]))))));
                            }
                            var_15 = ((/* implicit */short) ((((/* implicit */int) ((signed char) var_5))) % ((~(((((/* implicit */int) arr_4 [i_0] [i_1] [i_2])) | (((/* implicit */int) arr_2 [i_3]))))))));
                            /* LoopSeq 4 */
                            for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 4) 
                            {
                                var_16 ^= (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_7]))))));
                                var_17 = ((((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) var_8)))))) > (min((arr_12 [i_0] [i_1] [i_0] [i_1] [i_7]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_0] [i_1] [i_2] [i_2] [i_2] [i_3] [i_7])) ? (((/* implicit */int) var_9)) : (arr_24 [i_0] [6] [i_2] [i_2] [i_3] [i_3] [6])))))));
                                arr_25 [i_0] [i_1] [i_2] [i_3] [i_7] = var_8;
                            }
                            for (unsigned int i_8 = 0; i_8 < 22; i_8 += 2) 
                            {
                                var_18 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_14 [i_0])), (var_8)))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_17 [i_0] [i_1] [(signed char)4] [i_1])) : (((/* implicit */int) var_9)))))) % (((/* implicit */int) min((((unsigned short) arr_2 [i_3])), (((/* implicit */unsigned short) ((((/* implicit */int) var_5)) <= (((/* implicit */int) arr_18 [20ULL] [i_3] [i_2] [i_2] [i_1] [i_0] [i_0]))))))))));
                                var_19 *= ((/* implicit */unsigned char) ((signed char) ((long long int) arr_13 [i_0] [i_0] [i_2] [(unsigned short)15] [(unsigned char)16] [i_8])));
                            }
                            for (unsigned int i_9 = 2; i_9 < 20; i_9 += 1) 
                            {
                                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */int) (unsigned char)76)) : (((/* implicit */int) (_Bool)1))))) == ((~(arr_8 [i_0] [i_1] [i_2] [i_2]))))))));
                                var_21 = ((/* implicit */signed char) ((short) 831456647U));
                            }
                            /* vectorizable */
                            for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                            {
                                var_22 = ((/* implicit */signed char) ((arr_8 [i_0] [i_10 + 1] [i_2] [i_3]) > (arr_8 [i_0] [i_10 + 1] [i_2] [i_3])));
                                var_23 *= ((/* implicit */signed char) (+(((/* implicit */int) arr_14 [i_10 + 1]))));
                                arr_33 [i_10] [i_3] [i_2] [i_3] = ((/* implicit */int) (+((~(arr_23 [(unsigned char)12] [i_3] [(signed char)19] [2ULL] [(_Bool)1] [2ULL] [i_0])))));
                                var_24 = ((((/* implicit */int) var_4)) == (((/* implicit */int) arr_27 [i_10] [i_10 + 1] [i_10] [i_10 + 1] [i_3])));
                            }
                            var_25 = (+((-(((/* implicit */int) arr_9 [i_3] [i_2] [i_1] [i_0])))));
                        }
                    } 
                } 
                var_26 ^= ((/* implicit */unsigned short) min((((unsigned int) var_8)), (min((((/* implicit */unsigned int) ((arr_29 [i_0] [i_0] [i_0]) > (((/* implicit */int) arr_4 [(signed char)9] [i_1] [i_0]))))), (((((/* implicit */_Bool) arr_18 [(short)15] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (arr_22 [i_0] [i_0] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [18U] [i_0] [i_1])))))))));
                var_27 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_13 [(signed char)15] [i_0] [i_0] [i_1] [i_1] [i_0]))))) > (var_7))))));
                arr_34 [i_1] [i_1] [5ULL] = ((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_0]))));
            }
        } 
    } 
    var_28 = ((/* implicit */signed char) var_0);
    var_29 = ((/* implicit */unsigned int) ((unsigned char) (((~(((/* implicit */int) var_9)))) | (((/* implicit */int) var_3)))));
}
