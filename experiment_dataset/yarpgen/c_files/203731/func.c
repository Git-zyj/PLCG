/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203731
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned short i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        {
                            var_16 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) 690232416U))) ? (((/* implicit */int) ((_Bool) arr_9 [i_3] [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1]))) : ((+(((/* implicit */int) var_11))))));
                            var_17 += ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_10)) : (((((/* implicit */_Bool) max(((unsigned short)36692), (((/* implicit */unsigned short) (short)-25234))))) ? (((/* implicit */unsigned long long int) 65535)) : (((((/* implicit */_Bool) (short)25233)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28844))) : (16461397716919240235ULL))))));
                        }
                    } 
                } 
                var_18 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)36692)) ? (3745272090U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36683)))));
                var_19 = ((/* implicit */signed char) min((var_19), (var_2)));
                var_20 ^= ((/* implicit */unsigned short) (signed char)-92);
            }
        } 
    } 
    var_21 &= ((/* implicit */_Bool) var_15);
}
