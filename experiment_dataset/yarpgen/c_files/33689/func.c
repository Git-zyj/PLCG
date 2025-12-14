/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33689
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)234)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned int) 480))))), ((((_Bool)1) ? (-9223372036854775788LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))))) < (((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) min((var_5), (arr_2 [i_1] [i_1]))))) : (var_12)))));
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((((((var_10) + (9223372036854775807LL))) << (((/* implicit */int) (unsigned short)0)))), (((/* implicit */long long int) (~(((/* implicit */int) var_7)))))))) < (((((/* implicit */_Bool) (unsigned char)21)) ? (min((arr_4 [i_0]), (var_14))) : (max((((/* implicit */unsigned long long int) var_4)), (arr_4 [i_0])))))));
                var_17 = ((/* implicit */_Bool) ((((/* implicit */int) min((arr_0 [i_0 - 1]), (((/* implicit */unsigned short) (signed char)-105))))) & (((/* implicit */int) arr_0 [i_0 - 1]))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) (-2147483647 - 1));
    var_19 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((var_12) + (5073827576574541835LL)))))) ? (2097151) : (((/* implicit */int) (unsigned char)170))))));
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((long long int) var_6))) : (max((((/* implicit */unsigned long long int) 4294967295U)), (11279716548896026717ULL))))))))));
}
