/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239179
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_8 [i_0] [i_1] = ((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned int) min(((signed char)-5), ((signed char)4))))));
                arr_9 [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)-5)) : ((-(((/* implicit */int) (_Bool)1))))))), (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_0 [(signed char)6])))), (arr_4 [i_0] [i_1] [i_1])))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) -2147483646))))));
    var_16 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_10))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483631)) ? (-20) : (((/* implicit */int) (_Bool)1))))))))) : (var_0)));
    var_17 = ((/* implicit */_Bool) ((0ULL) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((5ULL), (((/* implicit */unsigned long long int) 2147483631))))) ? (var_7) : (((/* implicit */unsigned int) -31)))))));
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (var_3)))) ^ (var_7)));
}
