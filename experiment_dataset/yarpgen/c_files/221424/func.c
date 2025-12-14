/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221424
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((var_14) + (((/* implicit */long long int) ((/* implicit */int) var_3))))) / (((/* implicit */long long int) ((/* implicit */int) var_13)))))) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)101)) ? (((/* implicit */int) (signed char)77)) : (((/* implicit */int) var_5)))), (((((/* implicit */int) var_3)) + (((/* implicit */int) var_9)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((+(((/* implicit */int) (signed char)4))))))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_3)))) | (((((/* implicit */_Bool) 1078013227143288500LL)) ? (-1078013227143288496LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))))));
                    arr_8 [i_2] [i_1] [(short)3] = ((/* implicit */signed char) (-(((max((-1078013227143288509LL), (((/* implicit */long long int) var_2)))) ^ ((~(-1078013227143288505LL)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) ((var_10) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_1)))))))))));
}
