/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211464
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
    var_18 = ((/* implicit */long long int) 262143U);
    var_19 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_11))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-5247))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) -2147483635)))))), (((var_14) * (((/* implicit */long long int) ((888793223U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-23))))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 3; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (-(var_14))))))));
                                var_22 = ((/* implicit */unsigned long long int) ((((unsigned int) ((short) var_1))) > (((unsigned int) ((unsigned long long int) (unsigned char)77)))));
                                var_23 -= ((/* implicit */signed char) var_0);
                                var_24 = ((/* implicit */int) min((((((/* implicit */_Bool) (~(13861753843972026248ULL)))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)114))))), (((/* implicit */unsigned long long int) var_5))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_25 &= var_16;
}
