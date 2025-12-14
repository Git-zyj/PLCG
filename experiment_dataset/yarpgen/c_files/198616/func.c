/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198616
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
    for (short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((arr_1 [i_0 + 2]) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 71119573)) ? (((/* implicit */int) (signed char)10)) : (-71119570)))))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [i_0]))));
    }
    for (unsigned short i_1 = 1; i_1 < 19; i_1 += 1) 
    {
        var_19 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(71119573)))) ? (((((/* implicit */_Bool) arr_7 [i_1 - 1])) ? (((/* implicit */int) arr_7 [i_1 - 1])) : (((/* implicit */int) arr_7 [i_1 - 1])))) : ((-(71119573)))));
        var_20 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))), (arr_5 [i_1] [i_1]))) >> ((-(((/* implicit */int) ((71119560) < (-71119574))))))));
    }
    var_21 = ((/* implicit */_Bool) var_0);
}
