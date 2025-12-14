/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244788
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (var_12) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) min((var_3), (var_4)))) : (((/* implicit */int) ((unsigned short) var_4))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)128)) < (((/* implicit */int) (unsigned char)20))));
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [4])) ? (((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_3 [(signed char)8] [i_1] [i_0])))) ^ (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) == (arr_4 [i_0] [i_1] [i_1]))))))) : (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))), (var_11))))))));
            }
        } 
    } 
}
