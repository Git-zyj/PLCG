/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52801
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
    var_16 = ((/* implicit */short) (signed char)(-127 - 1));
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_15)) : (max((((((/* implicit */_Bool) 18446744073709551600ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))), (((((/* implicit */int) (unsigned short)38362)) << (0U)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) min((((arr_3 [i_1]) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-9896))))), (((/* implicit */long long int) (signed char)-2))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned int i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) (_Bool)1))))) > (max((((((/* implicit */_Bool) (unsigned short)8811)) ? (((/* implicit */int) (short)9892)) : (((/* implicit */int) var_15)))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)63265)) : (((/* implicit */int) (_Bool)1))))))));
                            arr_9 [(unsigned char)11] [i_1] [i_2] [i_2] = (unsigned short)27096;
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((short) ((unsigned short) max((((/* implicit */unsigned int) (short)-16131)), (0U)))));
}
