/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229103
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
    var_10 += ((/* implicit */long long int) (((-(((/* implicit */int) (signed char)-124)))) << (((((((/* implicit */int) min(((signed char)-124), ((signed char)124)))) - (((/* implicit */int) (signed char)-60)))) + (66)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */int) max((((((/* implicit */_Bool) (unsigned short)3910)) ? (((/* implicit */unsigned long long int) (-(var_3)))) : (var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_2)))) : (max((((/* implicit */unsigned int) (signed char)-125)), (160250355U))))))));
                arr_5 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((max((var_3), (((/* implicit */long long int) (signed char)-60)))) | (((/* implicit */long long int) ((/* implicit */int) max((var_6), (((/* implicit */unsigned char) (signed char)-110))))))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-124))) : (((((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) (signed char)75))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)27))) : (((var_9) ? (var_8) : (((/* implicit */long long int) 501890748))))))));
            }
        } 
    } 
}
