/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23374
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
    var_16 &= min((2088960U), (((/* implicit */unsigned int) ((((/* implicit */long long int) min((var_8), (var_12)))) >= (((((/* implicit */_Bool) var_3)) ? (-1467280595562362790LL) : (((/* implicit */long long int) 2088954U))))))));
    var_17 |= ((/* implicit */unsigned short) var_10);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) min((min((((/* implicit */unsigned short) (unsigned char)46)), ((unsigned short)8191))), (((/* implicit */unsigned short) (unsigned char)18)))))) * ((+(2088964U)))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 24; i_2 += 4) 
                {
                    for (unsigned int i_3 = 1; i_3 < 24; i_3 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) min(((+(max((arr_4 [i_1] [i_1] [i_1]), (((/* implicit */long long int) arr_9 [i_3] [i_2])))))), (((/* implicit */long long int) arr_9 [i_2] [i_0])))))));
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2 - 1] [i_2])) ? (-4586786271180730218LL) : (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))) >= (1467280595562362790LL)))), (arr_8 [i_0] [i_1] [i_2 + 1] [i_3]))))));
                        }
                    } 
                } 
                arr_11 [14U] [i_1] [i_1] = ((/* implicit */long long int) arr_10 [i_0] [i_1]);
            }
        } 
    } 
    var_20 *= ((/* implicit */long long int) (!(((((/* implicit */_Bool) min((2245242737U), (((/* implicit */unsigned int) var_6))))) || (((/* implicit */_Bool) (unsigned char)18))))));
    var_21 ^= ((/* implicit */unsigned short) min((((/* implicit */long long int) min((((((/* implicit */_Bool) -6285635990358664144LL)) ? (2245242737U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)70))))), (max((2245242739U), (131071U)))))), (((var_1) * (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)0)), (118733772U))))))));
}
