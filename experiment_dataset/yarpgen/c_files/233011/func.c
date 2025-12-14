/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233011
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) / (((/* implicit */int) (_Bool)1))))) & (var_6)));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_17 = ((((((/* implicit */_Bool) var_13)) ? (arr_2 [i_0]) : (arr_2 [i_0]))) - (((((/* implicit */_Bool) arr_2 [(unsigned char)8])) ? (arr_2 [i_0]) : (arr_2 [i_0]))));
        var_18 = ((/* implicit */int) max(((_Bool)1), ((!(((/* implicit */_Bool) arr_3 [(unsigned short)6]))))));
        var_19 = ((/* implicit */int) (((_Bool)1) ? (-2176228329628148301LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)153))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (min((1285619637U), (((/* implicit */unsigned int) var_1)))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 8)) <= ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1677791336U)))));
        var_20 = ((/* implicit */unsigned char) ((int) (unsigned char)235));
    }
}
