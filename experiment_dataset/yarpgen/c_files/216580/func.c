/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216580
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
    var_18 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) -162091440))) ? (min((((/* implicit */int) var_4)), ((+(((/* implicit */int) var_5)))))) : (max((((((/* implicit */_Bool) 2097151U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)13)))), ((~(((/* implicit */int) (short)-17664))))))));
    var_19 = ((/* implicit */unsigned long long int) (short)-2436);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) > (arr_0 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)90)))) + (785098785)));
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_7))));
    }
}
