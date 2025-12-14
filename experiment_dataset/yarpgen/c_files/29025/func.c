/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29025
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 18; i_0 += 4) 
    {
        arr_2 [(unsigned char)19] = ((/* implicit */short) arr_1 [i_0]);
        arr_3 [i_0 + 2] = ((/* implicit */long long int) ((arr_0 [i_0]) ? (((((/* implicit */_Bool) arr_1 [i_0 - 4])) ? (((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) arr_0 [i_0 - 3]))))) : (((/* implicit */int) arr_0 [i_0 + 3])))) : (((((/* implicit */_Bool) (short)3832)) ? (max((((/* implicit */int) arr_0 [(unsigned char)14])), (arr_1 [i_0 - 4]))) : (((/* implicit */int) (_Bool)1))))));
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_0 [i_0 - 3]) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) arr_0 [i_0 + 3]))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((arr_0 [(short)16]) ? (((/* implicit */int) (_Bool)1)) : (arr_1 [18U]))) : (min((arr_1 [i_0]), (arr_1 [i_0]))))) : (arr_1 [10U])));
    }
    var_17 = var_5;
    var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_14)), (87687535855441468ULL)))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)3832))))) : (var_10)));
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 4) 
    {
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            {
                arr_8 [i_2] [i_1] [5U] = ((/* implicit */_Bool) ((arr_4 [i_1 - 2]) ? (((/* implicit */int) arr_4 [i_1 - 2])) : ((((_Bool)1) ? (((/* implicit */int) arr_4 [i_1 + 1])) : (((/* implicit */int) arr_4 [i_1 + 1]))))));
                /* LoopNest 3 */
                for (unsigned int i_3 = 1; i_3 < 15; i_3 += 4) 
                {
                    for (unsigned int i_4 = 1; i_4 < 15; i_4 += 3) 
                    {
                        for (unsigned int i_5 = 1; i_5 < 13; i_5 += 4) 
                        {
                            {
                                var_19 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_1] [i_4] [i_5 - 1])) ? (arr_9 [i_1 + 1] [i_1] [i_4 + 1] [i_5 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_4 + 1] [1])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2] [i_3] [i_5 + 1])) ? (4326831593989869782LL) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [10U] [i_1])))))) : (max((arr_10 [(signed char)5] [(signed char)5] [(unsigned char)3]), (((/* implicit */unsigned long long int) (signed char)35))))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)6743)) ? (arr_1 [i_1 + 1]) : (arr_1 [7LL]))), (((/* implicit */int) arr_0 [i_5 + 2]))))) : (min((arr_13 [i_4] [i_4] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_1 + 1]), (((/* implicit */unsigned long long int) min((arr_1 [i_3]), (((/* implicit */int) arr_14 [i_4] [i_3 + 1] [i_3 - 1] [2ULL] [i_5 + 3] [i_1])))))))));
                                var_20 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3813722891U)) ? (((/* implicit */int) arr_0 [i_4 - 1])) : (((/* implicit */int) (_Bool)1))))) ? (arr_9 [i_1 - 2] [i_1] [i_4 + 1] [i_5 - 1]) : (arr_9 [i_1] [i_1] [i_3 + 1] [i_4 + 1])));
                                var_21 = ((/* implicit */unsigned char) arr_14 [4U] [4U] [i_2 - 1] [i_1 - 2] [4U] [i_2]);
                                arr_16 [i_1 - 1] [i_2] [i_3 + 1] [i_4 - 1] [i_2] = ((arr_0 [i_1]) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [1])) ? (arr_10 [2ULL] [(signed char)7] [i_2 - 1]) : (((/* implicit */unsigned long long int) 2266534516U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [2ULL] [i_2 - 1] [(unsigned char)9]))) : (arr_13 [i_1 - 2] [i_3 + 1] [i_3 + 1] [i_3] [i_4 + 1] [i_5 + 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))));
                                arr_17 [i_2] [i_2 - 1] [i_2] [4] [i_5 + 1] = ((/* implicit */int) arr_15 [i_1 - 2] [(signed char)8] [i_2 - 1] [i_3 - 1] [(_Bool)1] [i_4] [10ULL]);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_6 = 2; i_6 < 12; i_6 += 1) 
                {
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2] [i_1] [i_6 + 4] [i_1])) ? (arr_13 [i_1 - 1] [i_2 - 1] [6ULL] [14ULL] [i_6 + 3] [i_6]) : (((/* implicit */unsigned long long int) arr_19 [4U] [i_2 - 1] [i_1] [i_6 + 4]))))) ? (((/* implicit */int) arr_15 [i_1] [i_1] [1ULL] [i_1] [(unsigned char)7] [1ULL] [(unsigned char)1])) : (((((/* implicit */_Bool) arr_21 [i_1 - 1] [i_1] [i_1 - 2])) ? (((/* implicit */int) (_Bool)1)) : (arr_1 [i_6])))))) ? (((arr_6 [i_1 + 1] [i_2 - 1] [i_6 + 4]) ? (((((/* implicit */_Bool) arr_15 [i_1 - 2] [(unsigned char)13] [15LL] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])) ? (arr_12 [i_1] [i_6] [i_2] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_6 + 1]))))) : (((arr_0 [i_2]) ? (17886961267007612497ULL) : (((/* implicit */unsigned long long int) 560195989U)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1 - 1] [i_2 - 1] [i_6 + 3])) ? (arr_21 [i_6 + 4] [i_2 - 1] [i_1 + 1]) : (arr_21 [i_1 - 1] [i_2 - 1] [4U]))))))));
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((((/* implicit */_Bool) arr_9 [12ULL] [i_1] [14U] [i_1 + 1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-119)) ? (((((/* implicit */_Bool) arr_12 [i_1 - 1] [(unsigned char)8] [i_6 - 2] [i_1])) ? (((/* implicit */int) (short)-9187)) : (((/* implicit */int) (unsigned short)58792)))) : (((/* implicit */int) (unsigned short)1171))))) : (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)71))) : (2227028741U)))))));
                }
            }
        } 
    } 
}
