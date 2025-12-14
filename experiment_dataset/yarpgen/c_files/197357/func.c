/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197357
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
    var_14 = ((/* implicit */short) var_7);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (8122777698981620703LL) : (((/* implicit */long long int) min((((((/* implicit */unsigned int) var_10)) * (arr_1 [i_0]))), (min((arr_1 [i_0]), (((/* implicit */unsigned int) arr_0 [i_0])))))))));
        var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) * (arr_1 [i_0])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_0]))))) : (((((/* implicit */_Bool) arr_1 [0ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3947241396U)))))) ? (max((((unsigned int) arr_0 [(signed char)8])), (((arr_1 [i_0]) + (var_6))))) : (((/* implicit */unsigned int) (~((+(((/* implicit */int) arr_0 [i_0]))))))));
    }
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_12)) ? (16143021870214406189ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-54))))) : (((/* implicit */unsigned long long int) ((unsigned int) 7502876793866289327LL)))))) ? (((/* implicit */unsigned int) min((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned int) (_Bool)1))))) ? (((var_11) >> (((((/* implicit */int) (signed char)123)) - (113))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
    var_17 = ((/* implicit */unsigned char) var_4);
    var_18 = ((/* implicit */int) var_7);
}
