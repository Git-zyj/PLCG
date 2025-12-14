/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210084
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
    var_20 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((long long int) min((var_14), (var_1))))), (((max((var_15), (var_15))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)48540)) ^ (((/* implicit */int) var_7))))) : (var_0)))));
    var_21 = (((~(((/* implicit */int) (unsigned char)246)))) != (((/* implicit */int) (_Bool)1)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((~(((/* implicit */int) arr_1 [i_0])))) | (((((/* implicit */int) var_13)) | (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) 7535427783008823202LL)) ? (((/* implicit */int) (signed char)-51)) : (((/* implicit */int) arr_1 [i_1 - 1])))) : ((~(((/* implicit */int) min((((/* implicit */unsigned char) arr_0 [i_0])), ((unsigned char)255))))))));
                var_23 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */_Bool) 811218225U)) || ((_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)250)) >= (((/* implicit */int) (_Bool)1)))))));
                arr_5 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) min((arr_1 [i_1 - 1]), (((/* implicit */short) (_Bool)1)))))));
            }
        } 
    } 
    var_24 = var_10;
    var_25 = ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned long long int) ((unsigned short) 576460752303423488LL))), (max((((/* implicit */unsigned long long int) var_4)), (var_0)))))));
}
