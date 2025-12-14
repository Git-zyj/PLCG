/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205094
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_19 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_0]))))), (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_0 [i_0] [i_1])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_1]))))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (((var_15) << (((arr_0 [i_0] [i_1]) - (8295879075425835580LL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (12U) : (255U)))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0] [i_1]))))) : (max((arr_0 [i_0] [i_1]), (((/* implicit */long long int) arr_4 [i_1]))))));
                var_21 = ((/* implicit */unsigned long long int) min((arr_4 [i_1]), (((/* implicit */unsigned int) (_Bool)1))));
                var_22 = ((/* implicit */unsigned char) var_7);
            }
        } 
    } 
    var_23 *= ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) 3670016U))) ? (((((/* implicit */_Bool) -8691506770839159318LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) var_14))))))) / (12U)));
    var_24 = ((/* implicit */unsigned long long int) (_Bool)1);
    var_25 = ((/* implicit */short) ((255U) * (((/* implicit */unsigned int) max((((/* implicit */int) var_16)), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_12)))))))));
    var_26 = ((/* implicit */signed char) ((2881048279U) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
}
