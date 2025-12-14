/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241229
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
    var_18 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) var_12))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))), (var_3)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)112))))));
        var_20 ^= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (short)23260)), ((unsigned short)1412)));
        var_21 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1829010008)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15))));
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)255)), ((short)-23758)))) ? (((/* implicit */int) (unsigned short)64140)) : (-129920646)));
        var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0]))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        var_24 *= ((/* implicit */_Bool) (-(((/* implicit */int) var_5))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            var_25 = ((/* implicit */unsigned long long int) (!(var_3)));
            var_26 = ((/* implicit */signed char) (-(((-1829010016) ^ (((/* implicit */int) (short)-23758))))));
            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_8) : (var_0)))) ? (((unsigned long long int) var_1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1])))));
            var_28 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_2]))));
        }
    }
}
