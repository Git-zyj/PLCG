/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225462
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (short)248)) ? (arr_1 [i_0]) : (9223372036854775807LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 11; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_13 [i_3] [i_3] [i_3] [i_3] [i_3] [(_Bool)1] [i_3] = ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (short)-231)))) > (max((2152105685167653404LL), (((/* implicit */long long int) arr_6 [i_0] [i_2] [i_3 - 2] [i_4])))));
                                var_18 ^= (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_6 [i_1] [i_1] [i_1] [i_1])), (var_13)))));
                                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) 13573710396807562587ULL))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) max((((min((((/* implicit */long long int) (_Bool)0)), (var_9))) ^ (((/* implicit */long long int) ((unsigned int) var_2))))), (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_1] [i_1])))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) == (0U)))), (var_15)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (3764138166U)))) ? (min((1216579669), (((/* implicit */int) var_3)))) : (((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 306660262U)) ? (((/* implicit */int) (short)-248)) : (((/* implicit */int) var_2))))) ? (((unsigned long long int) 8309078812316380085ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (_Bool)1))));
}
