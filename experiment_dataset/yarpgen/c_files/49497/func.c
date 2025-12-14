/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49497
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
    var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_0)))) ? (min((((/* implicit */long long int) var_10)), (var_3))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))))), (max((((/* implicit */unsigned long long int) ((unsigned short) var_17))), ((-(17076999807363839256ULL)))))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)248)), (var_16)))) ? (((unsigned long long int) var_2)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 3125475979U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
    var_20 = (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-98))))), (((((/* implicit */_Bool) var_14)) ? (1169491326U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) var_13))));
                arr_6 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_0)))) ? (3988607459U) : (arr_3 [i_0] [i_0]))))));
            }
        } 
    } 
}
