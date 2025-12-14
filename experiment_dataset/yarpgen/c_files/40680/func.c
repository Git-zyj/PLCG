/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40680
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)11949)) ^ (((/* implicit */int) (unsigned short)53587))));
    var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) -2823115))) * (((/* implicit */int) (unsigned short)53595))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_20 += (_Bool)1;
                var_21 = ((/* implicit */_Bool) var_5);
                var_22 = ((max((((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0])), (var_0)))), (((int) var_16)))) < (((/* implicit */int) var_6)));
                var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((arr_0 [i_0]), (arr_0 [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (((((/* implicit */_Bool) var_11)) ? (3835214273036629303ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((unsigned long long int) var_14)))))));
            }
        } 
    } 
    var_24 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)96)))))) ? ((~(((/* implicit */int) (unsigned short)53599)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))))) * (var_8)));
    var_25 = ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) (unsigned short)11949)) % (((/* implicit */int) var_12)))));
}
