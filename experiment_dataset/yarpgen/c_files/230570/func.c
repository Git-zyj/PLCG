/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230570
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
    var_18 = ((/* implicit */long long int) (_Bool)1);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_0 [i_0]))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
        arr_2 [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0]))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [11ULL])))) : (((/* implicit */int) ((unsigned short) arr_0 [i_0])))));
        arr_3 [i_0] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)65534)) : ((-(((((/* implicit */int) arr_1 [i_0])) << (((((/* implicit */int) arr_1 [9ULL])) - (34791)))))))));
        var_20 *= ((/* implicit */_Bool) min((((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0])))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [(unsigned short)11]))))));
    }
    var_21 *= ((/* implicit */signed char) var_14);
    var_22 = ((/* implicit */_Bool) (+(var_15)));
}
