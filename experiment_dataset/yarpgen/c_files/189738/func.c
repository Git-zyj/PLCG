/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189738
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((234881024U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)80)))))) ? ((-((-(((/* implicit */int) (signed char)123)))))) : (((((/* implicit */_Bool) 2252558932U)) ? (((/* implicit */int) (unsigned short)59896)) : (((/* implicit */int) (signed char)-111)))))))));
        arr_2 [i_0] = ((/* implicit */int) arr_0 [i_0]);
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))))))));
        var_15 = ((/* implicit */signed char) min((((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */unsigned short) max((((/* implicit */unsigned char) (signed char)-115)), (var_7))))))), (((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */int) (signed char)33)) : (((/* implicit */int) (unsigned short)42720))))));
        var_16 = (((-(((/* implicit */int) (short)32765)))) + (((/* implicit */int) (signed char)-126)));
    }
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_5))))))) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)180)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-54)))) ^ (((/* implicit */int) (short)-20489))))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)120))) : (((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
}
