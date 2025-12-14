/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227868
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
    var_16 = ((/* implicit */unsigned int) ((max((max((20LL), (((/* implicit */long long int) (short)20960)))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-20961))) >= (201828435U)))))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) max((var_10), (((/* implicit */unsigned short) var_15))))) >= (((/* implicit */int) max((var_5), (var_5))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] [9ULL] = ((/* implicit */unsigned char) max((min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) / (arr_6 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) / (((/* implicit */int) arr_2 [i_0] [i_0]))))))), (((/* implicit */unsigned long long int) max((((arr_0 [i_0]) + (((/* implicit */long long int) ((/* implicit */int) var_15))))), (((/* implicit */long long int) max(((unsigned short)36532), (var_10)))))))));
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((4093138861U) + (max((((/* implicit */unsigned int) (unsigned short)55521)), (4093138855U)))))) == (min((((arr_6 [(unsigned short)12]) << (((arr_3 [i_0]) - (2811475072U))))), (((/* implicit */unsigned long long int) ((201828409U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65516))))))))));
                var_18 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) (unsigned short)65524)), (1114064175U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) == (arr_3 [(unsigned char)5])))))))), (max((max((((/* implicit */unsigned long long int) 4294967289U)), (4611677222334365696ULL))), (((arr_6 [(unsigned short)10]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 11; i_2 += 2) 
                {
                    for (long long int i_3 = 2; i_3 < 14; i_3 += 1) 
                    {
                        {
                            arr_12 [(unsigned char)13] [(unsigned char)13] [(unsigned char)13] [i_3] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)20949)) != (((/* implicit */int) (unsigned short)13223)))))) > (((((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)27063), (((/* implicit */unsigned short) (unsigned char)251)))))) * (min((((/* implicit */long long int) 0U)), (9223372036854775807LL)))))));
                            var_19 -= ((/* implicit */signed char) ((((/* implicit */int) ((16ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))) * (((((/* implicit */int) max((((/* implicit */unsigned short) (short)-1)), ((unsigned short)63106)))) % (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)94))) != (var_6))))))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_1] = ((/* implicit */_Bool) max((11697832640910216393ULL), (((/* implicit */unsigned long long int) max((((((/* implicit */int) (signed char)69)) ^ (((/* implicit */int) (unsigned short)13)))), (((2147483647) << (((2U) - (2U))))))))));
            }
        } 
    } 
}
