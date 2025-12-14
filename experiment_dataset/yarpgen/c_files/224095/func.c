/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224095
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        var_19 += ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0 + 3])));
        var_20 *= ((/* implicit */signed char) (+(arr_0 [i_0 + 2])));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0 + 3])) - (((/* implicit */int) arr_1 [i_0 - 1]))));
        arr_3 [i_0] = ((((/* implicit */_Bool) ((arr_0 [(unsigned short)4]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))) ? (arr_0 [i_0 + 2]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0]))))));
    }
    for (unsigned int i_1 = 2; i_1 < 11; i_1 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) min((var_21), (arr_5 [i_1])));
        arr_6 [(_Bool)1] [(signed char)2] = ((/* implicit */unsigned char) arr_5 [i_1 - 1]);
        var_22 = ((/* implicit */signed char) 4451543350643516754LL);
        var_23 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_4 [3LL]) * (arr_4 [i_1]))))))), (arr_5 [i_1])));
    }
    var_24 = ((/* implicit */unsigned short) var_17);
}
