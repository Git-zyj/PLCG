/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28858
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 4; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned int i_3 = 4; i_3 < 14; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_12 = -1233497330945335813LL;
                                arr_15 [i_4] [i_1] [i_2] [i_1] [i_0] = ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)247))) ? (((/* implicit */int) ((unsigned short) ((short) (unsigned char)13)))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */int) (short)1820)) : (((/* implicit */int) (unsigned short)28513)))))));
                                var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)25687)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) 277096812U)))) : (((((/* implicit */_Bool) 16U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61698))) : (576460752303423486LL)))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) 431872644U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned char)9)))) : (((((/* implicit */_Bool) 9036516452067349539ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))) : (4294967295U)))))))));
                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) 15291119032338085209ULL)) ? (((/* implicit */unsigned long long int) ((long long int) 2147483647))) : (((((/* implicit */_Bool) (signed char)28)) ? (669484839148314966ULL) : (((/* implicit */unsigned long long int) 2147483647)))))))));
            }
        } 
    } 
    var_16 = ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned short)30342)) : (((/* implicit */int) (unsigned char)94))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((_Bool) (unsigned short)3837))));
}
