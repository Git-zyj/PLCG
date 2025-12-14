/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191935
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
    var_18 &= ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(2785218667U))))))), (var_9)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (long long int i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        for (int i_4 = 2; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_19 |= ((/* implicit */long long int) 0);
                                var_20 |= ((/* implicit */signed char) ((short) var_15));
                            }
                        } 
                    } 
                } 
                arr_17 [i_1] = ((/* implicit */int) -910121038991396482LL);
                var_21 = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 2])))) / (((((/* implicit */_Bool) 714308588)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) arr_4 [i_0 + 2] [2U] [i_1])))) : ((+(((/* implicit */int) (unsigned char)11))))))));
                var_22 ^= ((/* implicit */signed char) var_7);
            }
        } 
    } 
    var_23 = ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-18910))) : (3736908256U)))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((unsigned int) (signed char)64))));
}
