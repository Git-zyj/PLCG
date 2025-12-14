/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218964
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
    var_12 ^= ((/* implicit */unsigned char) ((11521824755885393093ULL) ^ (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) var_11))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */int) arr_2 [i_2]);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) min((var_14), (min((((/* implicit */unsigned long long int) arr_0 [16])), (min((((var_6) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [(short)9] [(_Bool)1] [i_4]))))), (min((6924919317824158498ULL), (((/* implicit */unsigned long long int) arr_0 [(unsigned char)7]))))))))));
                                var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_13 [i_0] [i_0] [i_0] [i_0] [9U])))) ? (7139622961880755719LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (signed char)18)))))))) ? ((+(((/* implicit */int) (unsigned char)252)))) : (((/* implicit */int) arr_2 [i_2]))));
                                var_16 -= ((/* implicit */short) ((_Bool) 2734449824U));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
