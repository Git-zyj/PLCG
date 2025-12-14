/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37996
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
    var_17 &= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)7224))) ^ ((-(min((8641684845251064822LL), (-6752240941720058054LL)))))));
    var_18 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)106)) > (((((int) -7895437221260960081LL)) | (var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_7 [i_0] &= ((/* implicit */signed char) 8641684845251064822LL);
                arr_8 [i_0] [i_1] &= ((((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned char)227)) - (((/* implicit */int) (unsigned short)63602))))))) ? (min((((long long int) var_6)), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_5 [i_0]))))))) : (9223372036854775807LL));
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) arr_0 [i_0]))))))));
                var_20 = ((/* implicit */unsigned char) max((((/* implicit */long long int) min(((unsigned char)159), ((unsigned char)48)))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) ^ (11591487033471708086ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_9)))))) : (min((8906563391288723271LL), (((/* implicit */long long int) (unsigned short)58657))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8906563391288723271LL)) ? (((/* implicit */unsigned int) var_1)) : (852521707U)))))))) | (var_9)));
}
