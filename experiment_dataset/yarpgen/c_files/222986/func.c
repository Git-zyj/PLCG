/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222986
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (-(270395628U))))));
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(unsigned char)19]))) : (var_2)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (arr_1 [i_0] [(unsigned char)19]))) : (((/* implicit */int) var_13))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0] [(signed char)0]) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        arr_3 [(_Bool)1] |= ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0])) > (((((arr_1 [i_0] [i_0]) < (((/* implicit */int) (signed char)127)))) ? (((((/* implicit */int) var_1)) ^ (arr_1 [i_0] [i_0]))) : (((((var_5) + (2147483647))) << (((((arr_1 [i_0] [i_0]) + (884596755))) - (3)))))))));
    }
    var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)64)), (-6749809071430320070LL))))));
}
