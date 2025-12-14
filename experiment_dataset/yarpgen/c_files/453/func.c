/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/453
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) min((((/* implicit */int) ((4294967281U) >= (max((15U), (((/* implicit */unsigned int) (unsigned short)65535))))))), (max((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_3] [i_0])) && (((/* implicit */_Bool) 14U))))), (((((/* implicit */_Bool) 27U)) ? (var_9) : (((/* implicit */int) (short)-11663))))))));
                            var_19 -= ((/* implicit */unsigned int) ((((((/* implicit */int) var_13)) << (((/* implicit */int) var_13)))) >> (((arr_6 [i_0] [i_0] [i_0] [i_0]) + (8435369789142101103LL)))));
                        }
                    } 
                } 
                var_20 *= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) arr_5 [i_1] [i_0] [i_0] [i_1])), (var_8))) < (((/* implicit */unsigned int) ((var_12) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_17)))))))), ((((!(((/* implicit */_Bool) (short)11036)))) ? (arr_1 [i_0] [(unsigned char)2]) : (((/* implicit */unsigned long long int) (-(var_8))))))));
                arr_10 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_17)) < (((/* implicit */int) (_Bool)0)))))) >= (max((((/* implicit */unsigned long long int) var_12)), (0ULL)))));
                var_21 = ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)39332)) >> (((arr_8 [i_0] [i_0] [i_1 - 3] [i_1 - 2]) - (9534435113067844336ULL)))))) && (((/* implicit */_Bool) ((unsigned char) arr_7 [i_0])))));
                var_22 -= ((/* implicit */unsigned char) ((((var_0) - (1048320ULL))) + (((/* implicit */unsigned long long int) (-(var_4))))));
            }
        } 
    } 
    var_23 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11447))) | (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_15))))) * (((var_0) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
}
