/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195046
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
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) * (((((18446744073709551615ULL) * (((/* implicit */unsigned long long int) 742734349U)))) * (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) / (var_11))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            var_15 = ((((/* implicit */_Bool) max((((arr_1 [i_1]) ? (974896724) : (((/* implicit */int) arr_4 [i_1 - 3] [i_2])))), (((/* implicit */int) arr_5 [i_3] [2LL] [i_2]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [(_Bool)1] [i_2]))) & (3552232947U)))) || (((/* implicit */_Bool) 742734349U))))) : (((/* implicit */int) min((((signed char) 18446744073709551615ULL)), (max((arr_3 [i_0] [i_0 + 1]), (arr_6 [i_3] [(short)7] [19] [i_0])))))));
                            var_16 += ((/* implicit */unsigned short) 4294967295U);
                            arr_10 [i_0] [i_0] [(unsigned char)21] [i_0] [i_2] [i_3] = ((/* implicit */unsigned short) ((int) ((arr_7 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [21] [i_1] [i_1] [21])) * (((/* implicit */int) arr_0 [i_0]))))) : (arr_8 [i_2] [i_2]))));
                            arr_11 [i_0 + 2] [i_1] [i_2] [i_3] = ((((/* implicit */_Bool) min((min((arr_0 [i_2]), (arr_3 [i_0] [i_1 + 1]))), (max((((/* implicit */signed char) arr_1 [i_0])), (arr_3 [i_0 + 1] [i_0 - 1])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) 3552232951U))) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) (short)19))))) : (((unsigned int) arr_6 [i_0] [i_1] [i_2] [i_1])));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned char) ((arr_2 [i_1]) ^ (((/* implicit */int) ((unsigned short) arr_4 [i_0] [23])))));
                var_18 = ((/* implicit */short) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_4 [i_1] [i_0])), (arr_8 [(unsigned char)15] [i_0])))) ? (18ULL) : (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) arr_7 [i_0] [i_0])) + (((/* implicit */int) arr_1 [i_1]))))))));
                var_19 = (+(((/* implicit */int) ((short) ((((/* implicit */int) arr_3 [(signed char)3] [i_1])) > (((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) max((var_20), (var_1)));
    var_21 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_10)), (max((((/* implicit */unsigned long long int) var_5)), (var_0)))));
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 2; i_4 < 16; i_4 += 4) 
    {
        for (unsigned int i_5 = 1; i_5 < 16; i_5 += 4) 
        {
            {
                var_22 = ((/* implicit */unsigned int) max((var_22), (((unsigned int) max((arr_6 [i_4] [i_5] [i_5 + 1] [i_5]), (arr_6 [i_5] [i_5] [i_5 + 1] [(unsigned short)2]))))));
                arr_17 [0] [i_5] [1U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_0 [i_4 - 1]), (arr_0 [i_4 + 1])))) && (((/* implicit */_Bool) ((signed char) min((arr_13 [i_4]), (arr_2 [i_5])))))));
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) max(((signed char)-63), ((signed char)34)));
}
