/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203433
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
    var_17 &= ((/* implicit */unsigned short) max(((short)20639), ((short)20638)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_1 + 1])) ? (arr_2 [i_1 - 1] [i_1 + 1] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1 + 1] [i_1 + 1]))))), (((unsigned long long int) arr_2 [i_1 - 1] [i_1 + 1] [i_1 + 1]))));
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) min((((((long long int) 511)) * (((/* implicit */long long int) ((/* implicit */int) ((short) -487848027)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1 - 1] [i_1 - 1] [i_2 - 4])) ? (((/* implicit */int) arr_10 [i_0] [i_1 + 1] [i_1 - 1] [i_4])) : (((/* implicit */int) arr_4 [i_0] [i_1 - 1] [i_4]))))))))));
                            }
                        } 
                    } 
                    var_20 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)-20641)) ? (((((/* implicit */int) var_4)) + (((/* implicit */int) arr_6 [i_0] [i_0] [i_2 - 3])))) : (((((/* implicit */int) (short)-20641)) + (164740616))))) >= (max((((int) var_9)), (min((var_9), (arr_3 [i_0] [i_1 + 1] [i_2 - 4])))))));
                }
            } 
        } 
    } 
}
