/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221457
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) (unsigned short)54424))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_1 [i_0]), (arr_1 [i_0])))) ? (((((/* implicit */int) ((unsigned char) arr_0 [i_0]))) | (((/* implicit */int) var_1)))) : (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [i_0])), (var_10)))) && (((/* implicit */_Bool) arr_0 [i_0])))))));
        arr_3 [i_0] [i_0] = ((unsigned char) max((arr_1 [i_0]), (((/* implicit */long long int) arr_0 [i_0]))));
        arr_4 [(unsigned char)16] = ((/* implicit */int) arr_1 [i_0]);
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((unsigned short) arr_0 [i_0]))) : ((-(((/* implicit */int) arr_0 [i_0]))))));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) -2299879325737645891LL)) ? (2299879325737645896LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54424)))))) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) max((arr_0 [(unsigned char)9]), (arr_0 [i_0])))))))));
    }
    for (unsigned short i_1 = 1; i_1 < 9; i_1 += 3) 
    {
        var_20 = ((/* implicit */long long int) arr_0 [i_1]);
        var_21 *= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)14))));
    }
    var_22 = ((/* implicit */unsigned int) var_0);
}
