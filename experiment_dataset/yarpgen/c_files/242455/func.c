/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242455
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
    var_20 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 14340170664253577256ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : ((-(((((/* implicit */_Bool) (signed char)11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_6)))))));
    var_21 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) | (((/* implicit */int) ((((/* implicit */int) var_10)) <= (-1052662434)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_22 = (+(((((((/* implicit */long long int) ((/* implicit */int) var_0))) != (var_18))) ? (arr_1 [i_0] [i_0]) : (min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) (unsigned short)58163)))))));
        arr_4 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (signed char)-55)) >= (((/* implicit */int) (unsigned short)8192)))))));
    }
}
