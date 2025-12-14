/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223854
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
    var_17 = ((/* implicit */unsigned char) var_10);
    var_18 += ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (var_3));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)129)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10618))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (arr_0 [i_0] [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_3))))));
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((max(((_Bool)1), ((_Bool)0))) ? (((/* implicit */unsigned long long int) ((((arr_0 [(_Bool)1] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) var_12))))) - (((/* implicit */long long int) ((/* implicit */int) var_6)))))) : (13264378887409596453ULL))))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 6094948926412791590LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) | (((((/* implicit */_Bool) var_13)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))));
    }
    for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [2ULL] [i_1])) ? (arr_2 [i_1] [8LL]) : (arr_2 [4] [4]))) * (((arr_2 [12LL] [12LL]) / (((/* implicit */unsigned int) arr_4 [i_1] [i_1]))))));
        var_22 = ((/* implicit */_Bool) arr_1 [0LL]);
    }
}
