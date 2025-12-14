/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22910
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
    var_18 = ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned char) var_5)), (var_9)))) / ((+(((/* implicit */int) var_7))))))) ? ((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 6554552218659130249LL)) : (var_16))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)182)) < (((/* implicit */int) (unsigned char)100)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_7 [i_0 - 1] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)100))))) ? (((/* implicit */long long int) min((((((/* implicit */int) arr_0 [i_2])) << (((((/* implicit */int) (signed char)49)) - (45))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) && (((/* implicit */_Bool) arr_3 [i_1])))))))) : (max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)56))))), (((((/* implicit */_Bool) arr_3 [(short)9])) ? (-7493839507061516594LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)100)))))))));
                    arr_8 [i_0] [i_1] [i_0] = min((((/* implicit */long long int) arr_1 [i_0])), (((((((/* implicit */_Bool) 5713628032898450384LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)174))) : (3104014398842475774LL))) ^ (((/* implicit */long long int) 0U)))));
                }
            } 
        } 
    } 
    var_19 &= ((/* implicit */long long int) (~(min((var_4), (min((var_4), (((/* implicit */unsigned int) var_3))))))));
}
