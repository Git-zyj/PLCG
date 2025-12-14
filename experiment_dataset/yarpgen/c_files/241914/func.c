/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241914
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
    var_17 = ((/* implicit */short) (-(((/* implicit */int) var_1))));
    var_18 = ((/* implicit */signed char) min((((/* implicit */long long int) var_15)), (((((/* implicit */_Bool) ((unsigned short) var_11))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_6))) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) var_1)), (var_0)))));
        arr_3 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1591888540)) ? (993391417) : (((/* implicit */int) (signed char)123)))))));
        arr_4 [i_0 + 1] = ((/* implicit */unsigned short) var_10);
        arr_5 [i_0] = ((/* implicit */unsigned short) (((((+(arr_0 [i_0] [i_0]))) == (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)13729), (((/* implicit */unsigned short) arr_1 [i_0])))))))) || (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0] [i_0]))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
        var_19 = ((/* implicit */_Bool) (unsigned char)248);
    }
}
