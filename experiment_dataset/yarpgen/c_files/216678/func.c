/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216678
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
    var_16 = ((/* implicit */unsigned short) var_12);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((long long int) (-(0U)))))));
                arr_7 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(signed char)16] [i_1])) ? (((/* implicit */int) arr_3 [i_0 + 2] [14U])) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (short)2947)) : (((/* implicit */int) arr_0 [i_0]))))))) ? (arr_1 [(signed char)6] [(signed char)6]) : (((/* implicit */unsigned long long int) (+(6272225017445286498LL))))));
            }
        } 
    } 
    var_18 ^= ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)0)) <= (((/* implicit */int) (signed char)-80)))))) : (var_11));
}
