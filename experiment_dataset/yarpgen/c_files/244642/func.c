/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244642
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
    var_13 = ((/* implicit */long long int) ((min((min((((/* implicit */unsigned long long int) var_10)), (var_12))), (((/* implicit */unsigned long long int) ((var_3) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)48))))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
    var_14 += ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-43))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)42))) >= (-7194708553604980089LL)))) : (((/* implicit */int) var_10)))), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_12)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_4 [i_0])), (min(((+(18299955930562244991ULL))), (((/* implicit */unsigned long long int) max((arr_0 [i_0 - 2]), (((/* implicit */unsigned int) var_8)))))))));
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (+(((((/* implicit */_Bool) ((arr_0 [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_1])))))) ? (((/* implicit */unsigned int) var_7)) : (arr_4 [i_0 + 1]))))))));
                var_16 *= ((/* implicit */signed char) arr_0 [i_0 - 2]);
            }
        } 
    } 
}
