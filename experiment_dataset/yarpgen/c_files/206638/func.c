/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206638
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
    var_12 = min((min((((/* implicit */unsigned long long int) min((var_2), (((/* implicit */long long int) var_6))))), (((unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) var_8)));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_13 = ((((/* implicit */_Bool) ((long long int) arr_0 [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((17870283321406128128ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38995))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4600097971611281727LL)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) (unsigned short)58786))))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) | (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (arr_0 [i_0]))))));
        var_14 ^= ((/* implicit */int) arr_2 [i_0]);
        var_15 = ((/* implicit */int) (signed char)-126);
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) : (var_0))))))), (arr_6 [i_1])));
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) 2655292605U))));
    }
    var_18 = var_6;
    var_19 = ((/* implicit */unsigned char) var_0);
    var_20 += ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
}
