/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24038
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
    var_16 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) min((var_14), (var_14)))) ? (((/* implicit */int) var_10)) : (((((/* implicit */int) (signed char)(-127 - 1))) / (((/* implicit */int) (unsigned char)255)))))) + (2147483647))) << (((((/* implicit */int) ((_Bool) ((((/* implicit */int) (signed char)-67)) | (((/* implicit */int) (_Bool)1)))))) - (1)))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) var_5))))) | (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_3 [i_0] [i_0]))))));
        var_18 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_2))) && (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)23208)))))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) var_14)), (var_2)))))))));
        var_20 = ((/* implicit */long long int) var_0);
        var_21 ^= ((/* implicit */unsigned short) arr_3 [i_0] [i_0]);
    }
}
