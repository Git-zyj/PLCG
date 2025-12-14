/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50955
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
    var_10 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)-109)) : (((/* implicit */int) (signed char)0))))) : ((~(arr_1 [(_Bool)1])))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) arr_1 [i_0])), (((unsigned long long int) arr_5 [i_0] [i_1] [i_0])))) != (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 2498201141U)) ? (455682721U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) - (min((((/* implicit */unsigned int) (signed char)22)), (1796766161U))))))));
                arr_7 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (+(4591761316875269786LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((unsigned char) arr_5 [i_0] [i_1] [i_0]))) : (((((/* implicit */int) arr_4 [i_0] [i_0])) & (var_4))))))));
                arr_8 [i_1] [i_0] [i_0] = ((/* implicit */int) min(((signed char)-121), (((/* implicit */signed char) (_Bool)1))));
                var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (signed char)-103)))) | (var_4))))));
            }
        } 
    } 
}
