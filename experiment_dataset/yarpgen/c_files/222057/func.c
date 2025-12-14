/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222057
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) 3706151558U))) & (((/* implicit */int) min(((signed char)73), (((/* implicit */signed char) var_5)))))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((((/* implicit */int) arr_7 [i_0] [i_1] [i_2 - 1] [i_0])) < (((/* implicit */int) (signed char)-3)))), (max((var_5), (var_9))))))) : (((arr_5 [i_1 + 1] [i_2 + 2]) / (-6525299571768914279LL)))));
                    var_11 = ((/* implicit */unsigned long long int) ((((unsigned int) var_6)) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned long long int) (unsigned char)37)), (var_2))))))));
                    var_12 -= ((/* implicit */unsigned long long int) ((unsigned short) (signed char)3));
                    var_13 = ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned int) ((unsigned short) var_7))), (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (700489223U)))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((unsigned long long int) var_3)))), (var_2)));
}
