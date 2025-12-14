/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37046
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
    for (short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        var_10 = min((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_1 [i_0])))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-6040780766085611626LL))))), (((/* implicit */long long int) min((arr_1 [i_0 + 2]), (((/* implicit */unsigned int) arr_3 [i_0]))))));
        var_11 = ((/* implicit */unsigned int) var_8);
        var_12 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_3 [(unsigned char)10])) : (((/* implicit */int) arr_3 [6]))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : ((~(((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0 + 3] [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0] [i_0])))) : ((((~(((/* implicit */int) (unsigned short)53939)))) | (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_13 = ((/* implicit */_Bool) var_0);
    }
    var_14 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_3)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
}
