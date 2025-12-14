/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195799
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
    var_17 ^= ((/* implicit */unsigned int) var_6);
    var_18 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (!((!(var_4)))))), (((((/* implicit */_Bool) (+(var_2)))) ? ((-(var_11))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)28644)) : (((/* implicit */int) var_6)))))))));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_14)) : (max((max((var_5), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) var_0))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_0]))) ? (((/* implicit */unsigned long long int) ((int) (-(690624630U))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (arr_3 [20U])))) | (arr_5 [i_0] [i_1])))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0])) <= (423180930))))));
            }
        } 
    } 
}
