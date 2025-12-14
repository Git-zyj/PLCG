/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196596
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((int) var_16)))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_8))));
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) var_8);
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((((/* implicit */int) (signed char)119)) & (((/* implicit */int) (_Bool)1)))), (arr_5 [i_1]))))));
    }
    var_19 = ((/* implicit */int) (+(min((((/* implicit */unsigned int) var_15)), (var_6)))));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned short) var_2))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) min((((unsigned char) var_8)), (min((var_2), (var_14))))))));
    var_21 = var_4;
    var_22 = ((/* implicit */unsigned short) max((var_22), (var_15)));
}
