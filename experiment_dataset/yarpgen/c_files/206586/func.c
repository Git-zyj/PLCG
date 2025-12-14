/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206586
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (min((((/* implicit */long long int) var_12)), (var_13)))))) ? (((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_8)))) ? (281470681743360LL) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 11; i_2 += 1) 
            {
                for (unsigned int i_3 = 2; i_3 < 12; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_1] [i_0] [i_0] [i_3] = ((/* implicit */_Bool) (((((+(arr_10 [0U] [i_1] [i_2] [i_3]))) - (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 + 2] [i_2 + 1] [i_3 - 2]))))) + (var_11)));
                        var_16 += ((((/* implicit */_Bool) ((var_14) ? (1073741824U) : (var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) ((185776659U) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))) : (((min((var_9), ((_Bool)0))) ? (var_11) : (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_10 [i_0] [i_1 + 2] [5U] [i_3]))))));
                        var_17 = ((((long long int) 1312987578U)) / (((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (min((((/* implicit */unsigned int) (_Bool)1)), (var_2)))))));
                        var_18 *= ((/* implicit */_Bool) var_5);
                    }
                } 
            } 
        } 
    }
    var_19 = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
    var_20 ^= ((/* implicit */unsigned int) var_0);
}
