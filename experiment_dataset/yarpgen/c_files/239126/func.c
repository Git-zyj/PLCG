/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239126
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
    var_18 *= ((/* implicit */unsigned int) var_13);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_19 = max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (arr_3 [i_0 + 2] [i_1] [i_0 + 2]) : (((/* implicit */int) arr_2 [i_0]))))) > (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (arr_4 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))), (((arr_4 [i_0 + 2]) / (min((arr_4 [9LL]), (((/* implicit */unsigned int) var_13)))))));
                var_20 = ((/* implicit */_Bool) var_0);
                var_21 = ((/* implicit */long long int) max((var_21), (arr_0 [0LL])));
                var_22 *= ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 9200121537809987926LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_16)))) ? (min((((/* implicit */int) var_7)), (491409255))) : (((((/* implicit */_Bool) 577230799U)) ? (((/* implicit */int) (unsigned char)107)) : (var_12))))), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [(unsigned short)2])) : (3674687842203353932ULL)))))));
            }
        } 
    } 
}
