/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207420
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
    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) var_3))));
    var_14 = ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)120)) ^ (((/* implicit */int) var_4)))) >> (((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                var_15 += ((/* implicit */unsigned short) min(((-(((/* implicit */int) max((arr_3 [3ULL] [(unsigned char)9] [(unsigned char)9]), (var_2)))))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -519917373803901793LL)) ? (-6875485736260515007LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45189)))))) || (((/* implicit */_Bool) var_10)))))));
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((((/* implicit */_Bool) ((0U) / (((/* implicit */unsigned int) var_6))))) ? (max((((/* implicit */unsigned long long int) arr_3 [i_1 - 2] [i_1 + 1] [i_1 + 1])), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_2 [(unsigned char)12] [i_1]) + (var_6)))) ? (((/* implicit */int) (short)-9328)) : (((/* implicit */int) max((var_11), ((short)0)))))))))));
                var_17 = ((/* implicit */short) var_0);
                var_18 = ((/* implicit */signed char) min((((/* implicit */long long int) arr_4 [i_0])), ((+(7041000539966792176LL)))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) 4U))));
    var_20 = ((/* implicit */long long int) var_4);
}
