/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243552
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_13 += ((/* implicit */signed char) ((min((7447583962787989034ULL), (((/* implicit */unsigned long long int) (signed char)15)))) >= (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_2 [i_0] [i_1] [i_0])), (arr_1 [i_0]))))));
                arr_4 [i_0] [i_0] [i_0] = min((arr_3 [i_0]), (((/* implicit */unsigned short) ((unsigned char) min((var_2), (((/* implicit */short) (_Bool)1)))))));
                var_14 *= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (0LL)))) == (((/* implicit */int) ((12LL) > (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)9), (((/* implicit */unsigned char) (signed char)-123)))))))))));
            }
        } 
    } 
    var_15 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((var_1) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-83)) : (var_7))))))));
    var_16 = ((/* implicit */unsigned short) ((var_0) <= (((/* implicit */unsigned long long int) var_11))));
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) var_9))));
}
