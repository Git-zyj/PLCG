/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205157
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
    var_18 = ((/* implicit */long long int) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) + (16516074135932179550ULL))), (((/* implicit */unsigned long long int) max(((signed char)126), ((signed char)-127)))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) var_6))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */signed char) ((unsigned long long int) var_0));
                    arr_9 [i_0] = var_4;
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) ((long long int) var_2));
                                var_21 ^= ((/* implicit */long long int) var_1);
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [(signed char)20] = ((/* implicit */signed char) max((max((((/* implicit */long long int) 3918066761U)), (var_8))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_2])) ? (((/* implicit */int) ((((/* implicit */int) var_16)) <= (154255310)))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_2])))))))));
                }
            } 
        } 
    } 
}
