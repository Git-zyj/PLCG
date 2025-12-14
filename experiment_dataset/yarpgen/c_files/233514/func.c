/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233514
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
    for (short i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) var_9);
                                arr_11 [i_0] [i_1] [5ULL] [i_3] [i_4] [(signed char)1] [4U] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_1])), (arr_0 [(unsigned char)0] [i_4 - 1])));
                                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (-(2192607926U))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */unsigned long long int) arr_4 [i_0 - 2])) : (max((((/* implicit */unsigned long long int) 9223372036854775807LL)), (0ULL)))));
                    arr_12 [i_0] [i_1] = ((/* implicit */long long int) arr_5 [1ULL] [i_0]);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) ((17133337396204621074ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4096))))))) : (3152843063708335300LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((unsigned long long int) (+(var_5))))));
    var_20 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (((~(((/* implicit */int) var_4)))) >= ((-(((/* implicit */int) var_1))))))) : (max((((((/* implicit */int) (short)(-32767 - 1))) - (((/* implicit */int) (short)6640)))), ((+(((/* implicit */int) (short)28519))))))));
    var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))) + (var_15)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_13)))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) * (var_15)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) : (((unsigned long long int) -3152843063708335315LL))))));
    var_22 += 0ULL;
}
