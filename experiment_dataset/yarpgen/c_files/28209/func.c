/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28209
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
    var_18 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)231)) || (((/* implicit */_Bool) var_1))))), (var_7)))), ((~(min((((/* implicit */unsigned long long int) (unsigned char)163)), (var_14)))))));
    var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)109)) - ((~(((/* implicit */int) var_16)))))))));
    var_20 = ((/* implicit */short) (((+(var_9))) | (((((/* implicit */long long int) ((/* implicit */int) min((var_6), (((/* implicit */unsigned short) var_12)))))) * (((((/* implicit */long long int) ((/* implicit */int) var_3))) - (var_9)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        var_21 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [10U] [i_0]))));
        arr_2 [i_0] = ((/* implicit */short) arr_0 [i_0] [i_0]);
        var_22 -= ((/* implicit */short) ((((9263032517603619477ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) > (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7)))))));
        var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [0U] [(unsigned char)6])), (var_7)))) >> (((((((/* implicit */int) var_16)) - (((/* implicit */int) arr_1 [(short)10])))) + (57923)))))) ? (min((((9183711556105932147ULL) - (var_2))), (((((/* implicit */_Bool) var_11)) ? (var_0) : (4575657221408423936ULL))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) arr_0 [(unsigned char)10] [i_0])))), ((-(((/* implicit */int) var_5)))))))));
    }
    var_24 = ((/* implicit */unsigned long long int) var_15);
}
