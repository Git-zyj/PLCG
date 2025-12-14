/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53526
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
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        var_20 *= 2545620227U;
        var_21 = ((/* implicit */_Bool) (unsigned short)41818);
        var_22 += ((/* implicit */unsigned char) 1592292771505907184LL);
        arr_3 [i_0 + 2] = ((/* implicit */_Bool) (signed char)-122);
    }
    for (unsigned char i_1 = 1; i_1 < 21; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) ((short) ((arr_5 [i_1 + 1]) ? ((-(((/* implicit */int) arr_5 [i_1])))) : (((/* implicit */int) ((signed char) (signed char)-108))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_5);
    }
    var_23 = ((/* implicit */unsigned int) min((((/* implicit */int) var_0)), (min((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)27)), ((unsigned short)29678)))), (((((/* implicit */_Bool) (signed char)121)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_14))))))));
    var_24 = ((/* implicit */_Bool) var_13);
}
