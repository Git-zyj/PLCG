/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239268
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
    var_13 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) + (5685896456772626087ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_6), (((/* implicit */unsigned char) (!(var_12)))))))) : ((-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_1))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [(unsigned short)15])) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */int) arr_0 [i_0] [i_1])) + ((~(((/* implicit */int) var_11)))))))))));
                var_15 = ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))) ^ (min(((+(((/* implicit */int) var_10)))), (((/* implicit */int) arr_4 [i_1])))));
                var_16 -= ((/* implicit */_Bool) arr_5 [i_1]);
                arr_6 [24LL] = ((/* implicit */long long int) var_11);
            }
        } 
    } 
    var_17 += ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_4)))))))), (((((((/* implicit */int) var_11)) + (2147483647))) >> (((((((/* implicit */_Bool) var_11)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) - (4076188428U)))))));
    var_18 = ((/* implicit */long long int) min(((!(((/* implicit */_Bool) (+(((/* implicit */int) var_9))))))), (var_12)));
    var_19 = (-((~(((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (var_12)))))));
}
