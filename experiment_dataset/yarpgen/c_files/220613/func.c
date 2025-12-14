/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220613
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) (signed char)-28);
                var_18 *= min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)34)) || (((/* implicit */_Bool) (unsigned char)216))))), (((((/* implicit */_Bool) min((arr_2 [i_1]), (((/* implicit */long long int) (signed char)-26))))) ? (1LL) : (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0]))))))));
                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((1555539167), (((/* implicit */int) (unsigned short)15849))))))))));
                var_20 += ((/* implicit */int) ((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)36445))))) ? (((/* implicit */long long int) (-(0U)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (-467515794493517356LL))))) * (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(unsigned short)10]))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_1))));
    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) var_11))));
    var_23 = ((/* implicit */short) (+((+(((((/* implicit */_Bool) 2714196954U)) ? (((/* implicit */long long int) var_4)) : (-2LL)))))));
}
