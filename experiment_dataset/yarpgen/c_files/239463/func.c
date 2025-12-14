/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239463
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
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_20 = ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) min(((unsigned char)3), ((unsigned char)173)))) : (((/* implicit */int) var_5)));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)59)) : (((/* implicit */int) arr_1 [i_0] [i_0])))))))), (((((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */unsigned int) var_10))))) ? ((+(((/* implicit */int) arr_1 [i_0] [i_0])))) : ((~(((/* implicit */int) var_11))))))));
        arr_4 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */_Bool) ((((/* implicit */_Bool) (((+(4294967295U))) >> (((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (var_19))) - (1418)))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)253))))))) : (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) (unsigned char)253))))), (var_8))))))) : (((/* implicit */_Bool) ((((/* implicit */_Bool) (((+(4294967295U))) >> (((((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (var_19))) - (1418))) + (5930)))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)253))))))) : (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) (unsigned char)253))))), (var_8)))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)3))));
    }
    var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_16)) % (var_4)));
}
