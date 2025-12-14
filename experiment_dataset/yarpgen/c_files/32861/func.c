/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32861
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
    var_18 = max((((max((var_3), (((/* implicit */unsigned long long int) var_7)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)0)))))), (((/* implicit */unsigned long long int) var_10)));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_19 += ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_16)))))) ? (max((((/* implicit */unsigned long long int) (unsigned short)65528)), (var_0))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_15))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-17141)) > (((((/* implicit */int) var_1)) & (((/* implicit */int) var_1)))))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65531))) & (var_3)))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_11))))))) ? (var_17) : (((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) var_10))))))));
    }
    for (unsigned char i_1 = 4; i_1 < 18; i_1 += 4) 
    {
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_9)), (0U)))) * (max((((/* implicit */unsigned long long int) var_13)), (16126608781796454062ULL))))))));
        var_21 = ((short) max((6456509845101792051ULL), (((/* implicit */unsigned long long int) (short)17140))));
    }
    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) var_13))));
}
