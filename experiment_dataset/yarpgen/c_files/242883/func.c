/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242883
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
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [i_0 + 2]), (9223372036854775807LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL)))))) : (max((9223372036854775807LL), (-731321587401305590LL)))))) ? (min((((((/* implicit */_Bool) arr_0 [(unsigned char)11])) ? (-731321587401305597LL) : (-731321587401305597LL))), ((+(731321587401305596LL))))) : ((~(((((/* implicit */_Bool) 731321587401305573LL)) ? (-731321587401305570LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)192))))))));
        arr_2 [i_0 + 2] [i_0] = min(((+(min((731321587401305596LL), ((-9223372036854775807LL - 1LL)))))), ((-(min((731321587401305598LL), (-731321587401305557LL))))));
        var_19 |= ((/* implicit */unsigned char) ((long long int) max((max((((/* implicit */long long int) arr_0 [i_0])), (-731321587401305557LL))), (max((731321587401305596LL), (((/* implicit */long long int) arr_0 [i_0])))))));
    }
    var_20 = ((/* implicit */short) min((((/* implicit */long long int) (signed char)119)), (((((/* implicit */_Bool) (+(var_10)))) ? (var_1) : ((-(var_10)))))));
    var_21 += (+(((((/* implicit */_Bool) (+(9223372036854775807LL)))) ? (731321587401305596LL) : (min((-731321587401305597LL), (731321587401305608LL))))));
}
