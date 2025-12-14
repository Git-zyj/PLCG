/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47806
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
        for (long long int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                var_14 &= var_4;
                var_15 = ((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */unsigned short) ((_Bool) arr_1 [i_0]))), (arr_2 [i_0] [(unsigned char)11] [i_1]))))));
                var_16 -= ((/* implicit */unsigned long long int) ((_Bool) (+(12479162296407513803ULL))));
                var_17 *= ((/* implicit */_Bool) (~((~(((((/* implicit */int) arr_1 [(signed char)2])) | (((/* implicit */int) arr_2 [8LL] [8LL] [8LL]))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) var_5);
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)0)), ((signed char)24)))))))));
    var_20 = ((/* implicit */_Bool) (~(((((((var_1) + (9223372036854775807LL))) >> (((/* implicit */int) var_0)))) ^ (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
}
