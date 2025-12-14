/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231076
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                var_18 *= ((/* implicit */unsigned short) (short)31805);
                var_19 = ((_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) (short)-28018)))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (signed char i_3 = 2; i_3 < 11; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [i_4] [i_3 - 1] [i_2] [i_1] [i_0] = ((/* implicit */short) var_3);
                                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (((+((-(((/* implicit */int) (unsigned char)9)))))) ^ (((((/* implicit */int) (unsigned char)220)) - (((/* implicit */int) (signed char)28)))))))));
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) (+(max((31LL), (((/* implicit */long long int) var_14))))))) : (var_12)));
                                var_22 = ((long long int) max(((-(var_3))), (((/* implicit */unsigned long long int) (short)-16689))));
                                var_23 *= ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) var_11)) >> (((/* implicit */int) (signed char)28))))), (141863388262170624LL))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */int) (unsigned char)36);
    var_25 = ((/* implicit */_Bool) ((max((-1LL), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_4)), (1059577605U)))))) & (((/* implicit */long long int) var_2))));
    var_26 = ((/* implicit */short) max((var_3), (var_9)));
}
