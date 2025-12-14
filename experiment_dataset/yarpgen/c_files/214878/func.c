/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214878
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_6 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1])) || (((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])))))) : (((((/* implicit */_Bool) arr_0 [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [19ULL] [19ULL]))) : (arr_9 [(short)16] [i_1] [i_1 - 1]))))) < (min((arr_6 [i_1 + 1] [i_1 + 1]), (arr_6 [i_1 - 1] [i_1 - 1])))));
                    arr_11 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_1 + 1] [i_2]))) | (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) & (arr_9 [1] [0] [i_2])))))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (arr_6 [i_0] [5ULL]) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [12] [12] [12]))) : (arr_7 [(_Bool)1] [i_1] [i_2]))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_9 [i_0] [i_1] [i_1 - 1]) > (arr_9 [i_1] [19U] [i_1 - 2])))))));
                    arr_12 [i_0] [i_0] [13] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_2])) && (((/* implicit */_Bool) arr_1 [i_2])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_1 - 2]) : (arr_1 [i_1 - 1]))))));
                    var_13 = ((/* implicit */unsigned int) min((var_13), (((unsigned int) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(unsigned char)10] [(unsigned char)10] [i_2]))) / (arr_2 [i_0]))), (((/* implicit */unsigned int) arr_4 [i_0] [i_1 - 2] [i_2])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_17 [i_0] [i_1] [i_3] [i_2] [i_3] [i_3] = ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_2] [i_0])) ? (((/* implicit */long long int) arr_15 [i_0] [i_0] [i_0] [i_3] [i_0])) : (arr_9 [i_0] [i_1 - 1] [i_0])))) | (((arr_8 [1ULL] [8] [i_2]) ? (((/* implicit */unsigned long long int) arr_2 [i_0])) : (arr_1 [i_3]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_7 [i_2] [i_2] [i_2]) >> (((((/* implicit */int) arr_3 [i_0])) - (58))))) != (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3] [(unsigned char)9] [(signed char)5]))) : (arr_6 [i_0] [i_0]))))))));
                                var_14 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 83107673U)) ? (7966617641722625268LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)228)))))) ? (((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (2ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1 - 1] [7])) ? (((/* implicit */int) (unsigned char)82)) : (((/* implicit */int) arr_0 [i_1 + 1] [i_1 - 1])))))));
                                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((unsigned char) arr_4 [i_2] [i_3] [i_4]))) ? (((((/* implicit */_Bool) arr_1 [i_4])) ? (arr_6 [i_0] [i_1 - 2]) : (arr_7 [i_0] [i_1 - 1] [i_2]))) : (((/* implicit */long long int) ((216295583) << (((((-122700898) + (122700903))) - (3)))))))), (((arr_6 [i_1] [i_1]) | (((arr_8 [i_0] [i_0] [i_0]) ? (((/* implicit */long long int) arr_2 [i_0])) : (arr_7 [i_0] [i_3] [i_4 - 3]))))))))));
                                var_16 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_3 [i_4])) ? (arr_9 [i_0] [i_0] [i_0]) : (arr_16 [i_0] [i_0] [i_0] [i_0]))), (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (arr_16 [i_0] [i_0] [i_2] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))))) ? (((arr_13 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 - 2]) / (arr_13 [i_1] [i_1 - 2] [6] [i_1 - 2]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */int) (unsigned char)189)) : (((/* implicit */int) (unsigned char)26))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)27))) : (706551559U)))));
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_10 [i_1 - 2] [i_1 - 2] [i_1 + 1]) ? (((/* implicit */int) arr_10 [i_1] [i_1 - 2] [i_1 - 1])) : (((/* implicit */int) arr_10 [i_1] [i_1 - 1] [i_1 - 1]))))) ? (((((/* implicit */int) arr_3 [i_4 - 3])) | (((((/* implicit */int) (unsigned char)17)) / (((/* implicit */int) (short)-29921)))))) : (((((/* implicit */_Bool) (short)31970)) ? (((/* implicit */int) (unsigned char)34)) : (((/* implicit */int) (unsigned char)35))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_4)) >> (((var_1) + (1663373885))))) << (((((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) - (978997927420823690ULL)))))) || (((((/* implicit */int) var_9)) >= (((/* implicit */int) var_4))))));
}
