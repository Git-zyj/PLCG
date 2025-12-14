/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210769
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) >= (((arr_0 [i_0] [(unsigned short)10]) + (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))), (arr_0 [i_0] [(_Bool)1])));
        arr_3 [i_0] = ((/* implicit */unsigned int) var_14);
        arr_4 [(signed char)3] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_1 [(unsigned short)4])) ? (((((/* implicit */_Bool) var_8)) ? (2917897436U) : (arr_1 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_15), (((/* implicit */short) var_7))))))))));
        arr_5 [i_0] = ((/* implicit */long long int) ((unsigned char) max((((var_6) & (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (arr_0 [i_0] [i_0]))));
        var_16 = ((/* implicit */unsigned char) 405690019);
    }
    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_11) : (var_13)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : ((-(3576611351U))))))));
    var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) var_2)))));
    var_19 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 3462737115878655904LL)))) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_15))))), (((((/* implicit */_Bool) -3462737115878655919LL)) ? (2550757240U) : (var_13))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
}
