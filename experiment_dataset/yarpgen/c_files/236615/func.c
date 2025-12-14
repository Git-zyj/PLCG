/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236615
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
    for (signed char i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        var_10 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */int) ((arr_1 [(signed char)17] [(signed char)17]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))) : (((/* implicit */int) var_2))))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? ((~(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6)))))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) >= (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0])))))))));
    }
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_3))) > (((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : ((-9223372036854775807LL - 1LL))))))));
}
