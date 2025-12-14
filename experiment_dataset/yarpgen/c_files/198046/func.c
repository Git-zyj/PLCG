/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198046
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
    var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 782175304U)) ? (2064159322203752595ULL) : (((/* implicit */unsigned long long int) var_9))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))))) : (max((((/* implicit */unsigned long long int) (+(9223372036854775807LL)))), (((((/* implicit */_Bool) (short)-2444)) ? (var_13) : (((/* implicit */unsigned long long int) var_5))))))));
    var_19 *= ((/* implicit */unsigned short) (+(((/* implicit */int) max(((short)2444), ((short)2443))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_8 [i_2 - 2] [i_1] [i_1] [i_0] = ((/* implicit */int) (+(max((max((((/* implicit */long long int) (unsigned short)28513)), (-4714664895912649001LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)1023)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64512))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 |= ((/* implicit */signed char) max((max((max((((/* implicit */unsigned int) (_Bool)0)), (var_5))), (((/* implicit */unsigned int) max(((unsigned short)37023), (((/* implicit */unsigned short) (short)-2420))))))), (max((((((/* implicit */_Bool) (short)32176)) ? (((/* implicit */unsigned int) var_0)) : (var_11))), (((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_3 [i_0] [i_1 + 1] [i_2])))))));
                                var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_9)))) ? ((-(var_14))) : (((/* implicit */long long int) max((1686551541U), (var_5))))))) ? (max((max((arr_5 [i_1 - 2] [i_2 + 2] [i_3] [i_4]), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) max((4069919017U), (((/* implicit */unsigned int) (short)-32177))))))) : (((/* implicit */unsigned long long int) max((max((((/* implicit */int) arr_2 [i_1 - 2] [i_1 - 2])), (1216197903))), (max((var_0), (((/* implicit */int) arr_2 [i_0] [i_1])))))))));
                                var_22 -= ((/* implicit */_Bool) max((((((/* implicit */_Bool) (~(550252038649472166LL)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)32176)), (arr_14 [i_0 - 1])))) : (max((((/* implicit */unsigned long long int) (short)2443)), (arr_1 [i_3]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (var_1)))))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [i_2 - 1] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(max((var_17), (((/* implicit */unsigned int) var_16)))))))));
                }
            } 
        } 
    } 
}
