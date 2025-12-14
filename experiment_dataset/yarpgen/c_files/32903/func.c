/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32903
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 9223372036854775802LL)) ? (0U) : (var_10))), (((((/* implicit */_Bool) -9223372036854775802LL)) ? (1521112095U) : (((/* implicit */unsigned int) var_17))))))) ? (((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (var_10)))) / (var_8))) : (((/* implicit */long long int) min((var_12), (((/* implicit */unsigned int) min((var_5), (((/* implicit */signed char) (_Bool)1))))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_20 = ((((/* implicit */_Bool) (~((+(((/* implicit */int) arr_1 [i_0]))))))) ? (((((/* implicit */_Bool) min((2773855201U), (1521112095U)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)18401)))) : (((/* implicit */int) arr_0 [(_Bool)1])))) : (((/* implicit */int) ((_Bool) (((_Bool)0) ? (((/* implicit */int) (short)-15741)) : (((/* implicit */int) arr_1 [10ULL])))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_21 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_15 [i_0] [6] [i_0] [(unsigned short)11] [i_0]))))))) * (min((max((arr_5 [i_0] [i_0] [(_Bool)1]), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (arr_9 [i_0] [i_0] [i_2] [i_0]) : (arr_10 [i_1]))))))));
                                var_22 = ((((/* implicit */int) max((arr_4 [i_0] [i_1] [i_2]), (((/* implicit */short) ((((/* implicit */_Bool) 9223372036854775802LL)) || (((/* implicit */_Bool) 3735003058U)))))))) > (((/* implicit */int) arr_4 [(short)9] [2LL] [i_2])));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) >= (2773855192U)))), (((long long int) (signed char)0)))), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), (4145381259U))))));
                }
            } 
        } 
        var_24 = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_0]))), (var_4))) ^ (((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))) * (((/* implicit */int) arr_4 [i_0] [4] [i_0])))))));
        var_25 *= ((/* implicit */unsigned long long int) ((((arr_10 [i_0]) >= (arr_10 [i_0]))) ? (arr_14 [(unsigned char)9] [i_0] [(unsigned char)9] [(short)9] [11ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [7U] [4LL] [i_0] [7U] [i_0])))));
        var_26 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_6))), (((unsigned int) max((((/* implicit */long long int) arr_14 [i_0] [(_Bool)1] [(signed char)8] [i_0] [(unsigned short)0])), (-9223372036854775802LL))))));
    }
    var_27 = ((/* implicit */_Bool) var_9);
}
