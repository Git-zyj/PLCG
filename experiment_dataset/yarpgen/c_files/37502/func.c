/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37502
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
    var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) 0U)) != (1493039657321345491ULL))))))) == (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) & (var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 1553041999)) == (1493039657321345498ULL))))))));
    var_21 = ((/* implicit */signed char) ((min((min((((/* implicit */unsigned int) (unsigned char)78)), (var_5))), (((/* implicit */unsigned int) (unsigned char)189)))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 16953704416388206118ULL)) || (((/* implicit */_Bool) (unsigned char)254))))))));
    var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (((/* implicit */int) (signed char)41)))))));
    var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((16953704416388206147ULL) >> (((((/* implicit */int) var_17)) + (20411)))))) ? (((/* implicit */int) (unsigned char)78)) : (max((var_18), (((/* implicit */int) var_19)))))) != (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((var_13) != (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) : (((/* implicit */int) ((1493039657321345498ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) max(((unsigned char)67), ((unsigned char)67)))), (((((/* implicit */int) arr_0 [i_0])) << (((/* implicit */int) arr_0 [i_0]))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (min((((0LL) & (((/* implicit */long long int) arr_1 [i_0])))), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-60)))))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned int) arr_0 [i_0])))))))), (1493039657321345491ULL)));
        arr_3 [i_0] = min((max(((-(((/* implicit */int) (signed char)60)))), (((arr_0 [i_0]) ? (((/* implicit */int) (signed char)-60)) : (((/* implicit */int) arr_0 [i_0])))))), (max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))), ((-(((/* implicit */int) (unsigned char)255)))))));
    }
}
