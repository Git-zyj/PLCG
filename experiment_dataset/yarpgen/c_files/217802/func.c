/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217802
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
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) min(((+((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_5))))), (((/* implicit */unsigned long long int) var_19)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18327)) ? (18446744073709551615ULL) : (18446744073709551615ULL)))) ? (((((/* implicit */_Bool) var_17)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), (var_9))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (18446744073709551614ULL))))))))));
                            var_22 = ((/* implicit */unsigned long long int) var_1);
                        }
                    } 
                } 
                var_23 += ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) (short)2128)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((18446744073709551608ULL), (var_16)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) : (min((((/* implicit */unsigned long long int) var_18)), (var_12)))));
                                arr_16 [i_0] [i_4] [(_Bool)1] [(short)0] [i_0] &= ((_Bool) max((18446744073709551614ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
