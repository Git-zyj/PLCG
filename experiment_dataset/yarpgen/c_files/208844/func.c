/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208844
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
    var_12 = ((/* implicit */long long int) ((unsigned long long int) var_6));
    var_13 = ((/* implicit */unsigned int) ((signed char) (+(((((/* implicit */int) var_5)) << (((var_8) - (1616704821714407306ULL))))))));
    var_14 = ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] [2] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_3 [(unsigned short)8])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0 + 2]))))) : (arr_2 [i_1] [(unsigned short)4])))), ((-(var_8)))));
                var_15 = ((/* implicit */long long int) (+(min((((((/* implicit */int) var_2)) << (((((((/* implicit */int) arr_0 [i_1])) + (19368))) - (19))))), (((/* implicit */int) var_5))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) > (var_9)))), (var_10)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */int) (unsigned char)44)) : (((/* implicit */int) (unsigned char)60))))) ? (((/* implicit */long long int) ((int) var_11))) : (var_11))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)508)))));
}
