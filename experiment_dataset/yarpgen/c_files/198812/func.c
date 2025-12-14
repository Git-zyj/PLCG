/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198812
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (1085547156080246771LL))))));
                    var_18 = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_2 + 1] [i_1])) * (((((/* implicit */_Bool) (short)32749)) ? (((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 1]))))));
                    var_19 = ((/* implicit */unsigned int) arr_8 [i_0] [i_0]);
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)244))))) ? (((((/* implicit */_Bool) -611585081)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((var_3) / (((/* implicit */int) (unsigned char)12)))))))))))));
                    arr_10 [i_2 + 1] [i_1] [8U] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((var_1) - (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1])))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : ((~(((((/* implicit */_Bool) var_4)) ? (arr_7 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1])))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-95))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_15)) - (((/* implicit */int) var_11))))))));
    var_22 = ((((/* implicit */int) (signed char)-113)) - (((/* implicit */int) (_Bool)1)));
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */int) (_Bool)1)) - (337511741)))))) ? ((~(var_0))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */int) var_15))))))))));
}
