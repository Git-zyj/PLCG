/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31450
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
    var_17 = ((((((/* implicit */_Bool) ((unsigned short) var_15))) ? (((((/* implicit */_Bool) var_12)) ? (var_7) : (((/* implicit */int) var_15)))) : ((+(((/* implicit */int) var_9)))))) >= (((/* implicit */int) var_2)));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        var_18 = (~(((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)27)), (var_9)))) ? (arr_0 [i_0 + 2] [8]) : (max((((/* implicit */long long int) var_11)), (-3116076046371172001LL))))));
        arr_2 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_11) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) var_7))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)141)) ? (arr_0 [(unsigned short)3] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned short)0] [i_0])))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_11)) << (((arr_0 [i_0] [i_0]) - (7599899669702472797LL)))))) : (max((((/* implicit */long long int) var_1)), (arr_0 [i_0 - 2] [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (10U))))))))) : (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_11) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) var_7))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)141)) ? (arr_0 [(unsigned short)3] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned short)0] [i_0])))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_11)) << (((((arr_0 [i_0] [i_0]) - (7599899669702472797LL))) + (124401077903609808LL)))))) : (max((((/* implicit */long long int) var_1)), (arr_0 [i_0 - 2] [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (10U)))))))));
        var_19 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */short) arr_1 [i_0] [i_0]))))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0] [i_0])))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_13)))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 618236809)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (var_8))))))));
    }
}
