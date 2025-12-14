/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208624
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
    var_11 = ((/* implicit */int) ((var_5) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_8)))))))))));
    var_12 = ((/* implicit */unsigned char) 5336883940382796338ULL);
    var_13 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-18))));
    var_14 = ((/* implicit */_Bool) (signed char)17);
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        var_15 = ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)17)), ((unsigned short)35527)))) ? (((int) (unsigned short)30008)) : (((int) (unsigned char)254)));
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((-(var_5)))))) ? (var_5) : (3645751758U)));
        arr_2 [i_0] = (~(((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) | (-17LL))));
    }
}
