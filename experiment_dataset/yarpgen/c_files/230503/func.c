/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230503
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
    var_19 = ((/* implicit */unsigned short) -1388858842);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 14; i_2 += 4) 
            {
                {
                    var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) ^ (1201927939U)))) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_0])) : (((/* implicit */int) var_7))));
                    var_21 = ((/* implicit */short) min((((306144723755875439LL) + (((/* implicit */long long int) ((/* implicit */int) (short)8191))))), (((/* implicit */long long int) ((((/* implicit */int) var_0)) * (((/* implicit */int) arr_5 [i_1] [i_1] [i_1] [i_2 - 2])))))));
                    var_22 *= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (-306144723755875440LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2 - 2] [(unsigned short)6])))))), (min((140737488355327ULL), (((/* implicit */unsigned long long int) arr_2 [i_2 + 1] [i_2 + 1] [i_2 - 2]))))));
                    var_23 *= ((/* implicit */short) (((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_5 [i_2 - 1] [i_2] [i_2] [i_2 + 1])))) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [(signed char)9] [i_2 - 3] [i_2])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_3 [i_2] [i_0])) : (((/* implicit */int) arr_3 [i_1] [i_1]))))))))));
                }
            } 
        } 
    } 
}
