/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240596
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (+(max((((((/* implicit */_Bool) 18446744073709551609ULL)) ? (479795693U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)18))))), (((/* implicit */unsigned int) arr_1 [i_0] [i_1])))))))));
                arr_5 [i_1] [i_1] [i_1 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (-1319750908) : (var_2)))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) -2147483637)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)0))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(32ULL)))))))) : (((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)90))) >= (27ULL))))));
            }
        } 
    } 
    var_14 *= ((/* implicit */short) (-2147483647 - 1));
}
