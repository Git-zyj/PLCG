/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213689
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
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 |= ((/* implicit */unsigned int) min((((/* implicit */long long int) max((min((((/* implicit */unsigned int) arr_2 [i_1])), (arr_5 [i_0 - 1] [11U] [i_1]))), (max((((/* implicit */unsigned int) (short)15975)), (arr_5 [6] [(short)14] [12ULL])))))), (max((((/* implicit */long long int) max((arr_5 [i_0] [i_1] [i_1]), (((/* implicit */unsigned int) arr_3 [i_1]))))), (min((((/* implicit */long long int) arr_5 [i_1] [i_0] [i_0])), (730586717456896666LL)))))));
                arr_6 [i_1] = ((/* implicit */signed char) max((max((max((var_9), (((/* implicit */unsigned long long int) (short)22244)))), (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_2 [(short)8])))))), (min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_4 [16U] [16LL])), (var_5)))), (max((((/* implicit */unsigned long long int) var_13)), (arr_1 [i_0])))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) max((max((max((var_12), (var_10))), (max((var_12), (((/* implicit */long long int) var_0)))))), (max((max((((/* implicit */long long int) var_13)), (730586717456896666LL))), (max((-730586717456896666LL), (((/* implicit */long long int) (signed char)-121))))))));
    var_16 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((var_6), (((/* implicit */unsigned int) -1599871302))))), (max((var_12), (((/* implicit */long long int) (short)-15987))))))), (max((min((((/* implicit */unsigned long long int) var_13)), (var_9))), (((/* implicit */unsigned long long int) max((730586717456896666LL), (((/* implicit */long long int) (short)16003)))))))));
}
