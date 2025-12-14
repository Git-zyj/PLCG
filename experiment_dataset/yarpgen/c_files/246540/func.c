/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246540
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
    var_14 = ((/* implicit */signed char) var_6);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_1 [i_0]))))));
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)59320)) ? (((/* implicit */int) arr_1 [(unsigned short)8])) : (max(((+(((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) var_1))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) min((((/* implicit */unsigned short) var_10)), (var_12))))));
        var_18 = ((((/* implicit */int) ((unsigned short) arr_4 [i_1] [22U]))) != (((/* implicit */int) (!((!(((/* implicit */_Bool) var_13))))))));
        arr_5 [9U] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) arr_4 [i_1] [i_1])) == (((/* implicit */int) arr_4 [(signed char)6] [i_1])))));
    }
}
