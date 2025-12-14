/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208207
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
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_1 [i_0]))) ? (min((arr_1 [i_0]), (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned char)117)))))));
        arr_2 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) min((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_0 [i_0])))), (((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_0 [i_0])))))))));
        var_13 = ((/* implicit */short) ((_Bool) ((var_3) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59901))))));
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) var_1))));
    }
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) max((((((/* implicit */int) max(((short)-26911), (((/* implicit */short) var_7))))) ^ (((/* implicit */int) (unsigned short)43388)))), (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) -1592510443)))))))))));
    var_16 = ((/* implicit */unsigned char) ((((int) ((((/* implicit */_Bool) 302443907U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1))))) ^ (((/* implicit */int) var_0))));
    var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_7))));
}
