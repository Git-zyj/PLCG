/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42877
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
    var_17 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (+(21ULL))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : ((+(((/* implicit */int) (unsigned short)23997))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_2] [i_0] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_4 [i_4] [i_3] [i_2])), (max((arr_11 [i_0] [i_0 + 3] [i_3]), (((/* implicit */int) (short)-20768))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_13 [21LL] [6LL] [i_2] [i_4] [i_0])) != (((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) (short)20769)) : (((/* implicit */int) arr_0 [i_0] [i_0])))))))) : (max((((unsigned int) arr_15 [i_4] [i_2] [i_2] [i_0])), (((/* implicit */unsigned int) arr_6 [i_0]))))));
                                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) min((((((/* implicit */_Bool) min((((/* implicit */int) (short)20746)), (arr_15 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3])))) ? (((((/* implicit */_Bool) arr_14 [i_4] [i_4] [i_2] [i_2] [i_2] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2] [i_0]))) : (7044661872377283146ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) (short)-20768))))))), (((((/* implicit */_Bool) ((var_13) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0 + 1] [i_0]))) : (arr_7 [i_2])))) ? (var_0) : (((/* implicit */unsigned long long int) -8696613157011849748LL)))))))));
                                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (unsigned char)242))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) min((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))), (((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_13 [i_0] [i_0 + 3] [i_0] [i_0] [6ULL])), (arr_5 [i_0] [i_0] [i_0]))))) - (((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [6LL] [i_0] [18ULL] [18ULL] [i_1] [(short)20]))) - (var_4))))))))));
            }
        } 
    } 
}
