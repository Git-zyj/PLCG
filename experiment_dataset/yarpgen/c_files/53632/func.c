/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53632
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
    var_17 = ((/* implicit */long long int) max((max((var_13), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_5)), ((unsigned short)54663)))))), (((/* implicit */unsigned int) var_10))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                var_18 = ((arr_4 [(unsigned char)5]) * (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) var_9))) / (var_15)))));
                var_19 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((var_15) + (((/* implicit */int) var_8))))), (2U)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_0))))) ? (max((((/* implicit */unsigned long long int) var_10)), (arr_2 [i_0] [i_0] [i_1]))) : (((/* implicit */unsigned long long int) var_7)))) : (((((/* implicit */_Bool) var_2)) ? (arr_4 [i_0 - 2]) : (((/* implicit */unsigned long long int) var_13))))));
                var_20 = ((((/* implicit */_Bool) (~(arr_4 [i_0 - 1])))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_13)) ? (6993544214584825669LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-1))))))) : (((((/* implicit */_Bool) 4261412864U)) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_8)))) : ((+(((/* implicit */int) var_5)))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 8; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 9; i_4 += 4) 
                        {
                            {
                                arr_15 [i_4] [i_0] [i_1 + 1] [i_3] [i_4 - 1] [i_1] [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */long long int) var_15)) != (var_9))), ((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_1 - 1] [2ULL])))))))));
                                var_21 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) + (var_13)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) max((((/* implicit */int) var_12)), (var_15)))) : (max((var_6), (var_9)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) (((((+(((/* implicit */int) var_4)))) + (2147483647))) << (((max((((var_5) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))), (((/* implicit */int) var_10)))) - (14186)))));
    var_23 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) % (1127545492U))))));
    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (-(var_15))))));
}
