/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4781
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
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_4 [i_0] [4LL] = ((/* implicit */long long int) ((((/* implicit */int) max((arr_2 [i_0]), (arr_2 [i_1])))) << (((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (13U))) - (27506U)))));
                arr_5 [22LL] [22LL] [i_1] |= ((/* implicit */unsigned char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1]))))), ((-(var_7)))));
            }
        } 
    } 
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((+(19LL))), (((/* implicit */long long int) (-(((/* implicit */int) var_5)))))))) ? (((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (3279702137U))) ? ((~(((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))))))) : (((((/* implicit */_Bool) (signed char)-111)) ? ((~(var_3))) : (((/* implicit */long long int) (-(((/* implicit */int) var_5)))))))));
    var_11 = ((/* implicit */signed char) var_9);
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) var_6))))) : (var_0))) : (min((((/* implicit */long long int) min((var_9), (var_9)))), (((1097223136100881177LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)92))))))))))));
}
