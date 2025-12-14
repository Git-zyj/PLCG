/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46898
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
    var_17 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) 2957243998U)))))) + (var_16))))));
    var_18 = ((/* implicit */int) 1337723297U);
    var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), (2957244010U)));
    /* LoopSeq 4 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) arr_1 [i_0]);
        var_20 = ((/* implicit */unsigned int) ((long long int) (!(((/* implicit */_Bool) var_0)))));
        var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 1337723275U)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_22 = ((/* implicit */signed char) min((((/* implicit */long long int) (+((+(((/* implicit */int) (_Bool)0))))))), (min((((((/* implicit */_Bool) arr_4 [i_1])) ? (var_0) : (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) arr_0 [i_1]))))));
        var_23 *= ((/* implicit */_Bool) (short)24456);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_2])) + (((/* implicit */int) (signed char)6))))) + (2957243997U)));
        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */signed char) arr_6 [i_2])), ((signed char)127)))) ? (min((((/* implicit */unsigned int) (unsigned short)65506)), (2957244010U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (signed char)-54))) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) (unsigned char)0)))))));
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        var_26 -= ((/* implicit */int) (signed char)6);
        var_27 -= ((/* implicit */signed char) (-(min((((/* implicit */int) (_Bool)1)), (arr_9 [i_3 - 1] [i_3 - 1])))));
        var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned short) (signed char)125))), (min((2329157002U), (((/* implicit */unsigned int) arr_8 [i_3])))))))));
    }
}
