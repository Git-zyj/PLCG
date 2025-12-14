/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244277
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
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */signed char) ((unsigned int) 1743818855497644340LL));
                var_13 += ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) && (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
                arr_5 [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 + 1])) ? (arr_1 [i_0] [i_0 - 1]) : (((/* implicit */int) (_Bool)1)))) >= (((int) arr_1 [17LL] [i_0 - 3]))));
                var_14 = ((/* implicit */unsigned long long int) arr_2 [i_0 - 2] [i_0 - 1] [i_1]);
            }
        } 
    } 
    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((long long int) ((((/* implicit */long long int) (+(((/* implicit */int) (signed char)69))))) >= (((((/* implicit */_Bool) var_11)) ? (var_0) : (var_7)))))))));
    var_16 -= ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)84)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13685))) : (var_9)))) ? (((/* implicit */int) (unsigned short)6117)) : (((/* implicit */int) var_10)))));
    var_17 = ((/* implicit */unsigned int) var_10);
}
