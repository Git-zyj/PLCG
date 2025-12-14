/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231405
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
    var_12 &= (-(((((/* implicit */unsigned long long int) (-(-1360351644)))) * (min((16141728710025998063ULL), (((/* implicit */unsigned long long int) -1360351661)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        var_13 = ((/* implicit */unsigned int) max((var_13), (((unsigned int) ((2557388398U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2 - 1] [i_2] [i_3 + 1]))))))));
                        var_14 = ((/* implicit */unsigned char) max((min((max((18446744073709551602ULL), (var_0))), (((/* implicit */unsigned long long int) ((unsigned int) var_3))))), (((((/* implicit */_Bool) (-(1737578925U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)70))) : (((unsigned long long int) (short)-5))))));
                        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((unsigned char) min((((/* implicit */long long int) var_1)), (1669706830365265844LL)))))));
                        var_16 = (short)23521;
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 3; i_4 < 21; i_4 += 4) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_17 [i_4] [i_2] [i_1] [i_0])) ? (2557388401U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)125)))))))) ? (((/* implicit */unsigned long long int) (-(1U)))) : (max((((((/* implicit */_Bool) arr_11 [i_5] [i_4] [i_2] [i_1 + 1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19724))) : (27ULL))), (((/* implicit */unsigned long long int) var_4)))))))));
                                var_18 = ((/* implicit */unsigned char) var_9);
                                arr_21 [i_0] [i_1] [i_2] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((+(((/* implicit */int) var_1))))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) 891132547U))))), ((-(((/* implicit */int) arr_20 [i_0] [i_1] [i_2] [i_0] [i_5]))))))) : (((((/* implicit */_Bool) (~(var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_4 + 1] [i_2] [i_4 - 3] [i_2 - 1]))) : (arr_6 [i_4 + 2])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_10))));
}
