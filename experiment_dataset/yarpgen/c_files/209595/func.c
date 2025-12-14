/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209595
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned long long int) (+(min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)179))))), ((+(1452543174U)))))));
                var_19 = ((/* implicit */_Bool) (signed char)-6);
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_0] [i_1])) || (((/* implicit */_Bool) var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (min((4019305617U), (((/* implicit */unsigned int) arr_0 [(unsigned char)2]))))))) ? (((/* implicit */int) min((arr_0 [6U]), (((/* implicit */unsigned char) var_18))))) : (max((((/* implicit */int) arr_2 [i_0])), ((-(((/* implicit */int) arr_1 [i_0] [(short)3]))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_0)), (((((/* implicit */_Bool) (unsigned short)32764)) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (short)-31689)), (var_16)))) : (262143LL)))));
}
