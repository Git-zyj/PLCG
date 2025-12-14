/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195431
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
    var_14 = ((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned long long int) (signed char)127))));
    var_15 ^= ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4095)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (var_10)))) ? (((/* implicit */unsigned long long int) ((unsigned int) 1707349302961477100ULL))) : (min((16739394770748074516ULL), (((/* implicit */unsigned long long int) var_13)))))) : (((/* implicit */unsigned long long int) max((var_8), (((/* implicit */int) var_6))))));
    var_16 = ((/* implicit */unsigned char) var_9);
    var_17 |= ((/* implicit */unsigned long long int) ((max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_3))), (((/* implicit */long long int) ((unsigned short) var_5))))) - (((/* implicit */long long int) var_12))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -2146474386)) ? (1707349302961477099ULL) : (((/* implicit */unsigned long long int) -571870513))));
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((short)22350), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_1] [(signed char)6])) > (((/* implicit */int) arr_5 [i_0] [i_1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 1) 
                {
                    for (int i_3 = 3; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 8; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)65)) || (((/* implicit */_Bool) min((min((-1LL), (((/* implicit */long long int) (unsigned char)225)))), (((/* implicit */long long int) max((4294967295U), (((/* implicit */unsigned int) (unsigned char)60))))))))));
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_12 [i_3 + 2] [i_4 + 1] [i_1] [i_3] [i_2 + 1])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3 - 3] [i_4 - 1] [i_3 - 3] [i_3] [i_2 + 2])))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
