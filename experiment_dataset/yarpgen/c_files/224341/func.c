/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224341
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? ((+(arr_1 [i_0]))) : (arr_0 [i_0])));
        var_21 = (((!(((/* implicit */_Bool) (+(arr_1 [i_0])))))) ? (min((arr_0 [i_0]), (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1331262830U)))))));
        var_22 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_0 [i_0]) : (var_2)))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) min(((unsigned char)22), ((unsigned char)0)))), ((+(((/* implicit */int) var_7))))))) : (min((2912157850U), (arr_0 [i_0]))));
    }
    var_23 = ((/* implicit */unsigned char) var_15);
}
