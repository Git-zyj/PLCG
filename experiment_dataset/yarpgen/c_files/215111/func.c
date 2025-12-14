/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215111
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
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            {
                var_17 = max((((/* implicit */int) (_Bool)1)), ((+((((_Bool)1) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))));
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -2035825743)) ? (((/* implicit */int) (short)13917)) : (((/* implicit */int) arr_0 [i_1])))) ^ ((~(((/* implicit */int) (short)13917))))))) ? (max((7516192768ULL), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */int) arr_2 [i_0])) >> (((arr_1 [i_0]) - (1082933694U))))))))));
                arr_5 [i_0] |= ((/* implicit */short) arr_4 [i_1] [i_0]);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)11105)) | (((/* implicit */int) max((max((var_10), (((/* implicit */signed char) (_Bool)1)))), (((/* implicit */signed char) ((_Bool) var_7))))))));
    var_20 = ((/* implicit */unsigned char) -7282911672863383260LL);
}
