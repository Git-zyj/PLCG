/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32162
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
    var_14 += ((/* implicit */long long int) ((((/* implicit */_Bool) 15698756128509893895ULL)) ? (2747987945199657738ULL) : (((/* implicit */unsigned long long int) -382510173))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_0] [(unsigned char)11] = ((/* implicit */long long int) var_8);
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)48)) : (1674617791)))) ? (min((((((/* implicit */unsigned long long int) var_10)) | (var_3))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)244))) >= (2747987945199657751ULL)))))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)2622)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_6))))), (var_10))))));
            }
        } 
    } 
}
