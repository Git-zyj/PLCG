/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230656
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
    var_19 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned int) (signed char)38))))) ? (((/* implicit */int) var_15)) : (((((/* implicit */int) (signed char)-9)) - (((/* implicit */int) var_6))))))) ? (((((/* implicit */_Bool) (unsigned char)245)) ? ((-(var_11))) : (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) min((var_16), (((/* implicit */int) var_2))))) == (((var_3) ? (((/* implicit */long long int) 107813991U)) : (var_0))))))));
    var_20 = ((/* implicit */unsigned short) var_1);
    var_21 = ((/* implicit */unsigned long long int) var_12);
    var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 2300893030U))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_23 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_0]))))), (max((((var_11) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12799))))), (((/* implicit */unsigned int) (unsigned short)52736))))));
                arr_7 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (arr_5 [i_1] [i_1] [i_1])))) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12799)))));
            }
        } 
    } 
}
