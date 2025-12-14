/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217912
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [(signed char)2] [i_0] [16ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)6)) * (((/* implicit */int) arr_5 [i_1]))))) ? (((/* implicit */int) arr_4 [i_0] [2LL])) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_3 [i_0] [i_1]))))));
                var_11 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_5 [i_1])), (-6925169773918428418LL)))), (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) -6925169773918428402LL))))));
                arr_7 [(unsigned short)10] [(_Bool)1] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) arr_0 [i_0]))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 6925169773918428401LL)))))))) ? (((((/* implicit */_Bool) var_4)) ? ((+(arr_0 [i_0]))) : (((/* implicit */int) arr_5 [i_0])))) : (((((/* implicit */_Bool) var_3)) ? ((((_Bool)0) ? (((/* implicit */int) arr_5 [i_1])) : (arr_0 [(short)0]))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)140)) && (((/* implicit */_Bool) arr_1 [5U])))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((+(((/* implicit */int) var_4))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3)))))));
}
