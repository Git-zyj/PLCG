/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50980
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0]))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0])))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((signed char) arr_0 [i_0]))) : (((/* implicit */int) arr_0 [i_0]))));
        var_20 = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) var_1)), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12))))))) : (4250040139941112257ULL));
    }
    var_21 = (unsigned char)151;
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((min((var_7), (((/* implicit */unsigned int) (unsigned char)255)))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_17)), (var_12))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */unsigned int) var_13))))) ? (var_11) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (min((1748762667), (((/* implicit */int) var_15)))) : (((/* implicit */int) var_1)))))));
}
