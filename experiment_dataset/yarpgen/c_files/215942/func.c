/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215942
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
    var_18 = ((/* implicit */int) var_10);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
        var_20 = (-(((((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [(_Bool)1])), (arr_0 [i_0] [i_0])))) - (((-1) - (((/* implicit */int) (short)3583)))))));
        var_21 = ((/* implicit */unsigned int) (unsigned short)0);
    }
    var_22 = ((/* implicit */unsigned short) min((min((((((/* implicit */int) var_16)) / (((/* implicit */int) var_13)))), (max((((/* implicit */int) (short)3569)), (var_14))))), (((/* implicit */int) var_0))));
    var_23 = min((((/* implicit */int) ((((/* implicit */unsigned long long int) max((var_3), (((/* implicit */int) (unsigned char)255))))) >= (((((/* implicit */_Bool) (short)-3593)) ? (10279715747817926902ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))), (((((((/* implicit */_Bool) 0)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_0)))) >> (((var_15) - (4068165816U))))));
}
