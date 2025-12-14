/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44402
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
    var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 1484901731U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-3123192410719043408LL)))))));
    var_20 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (-(((/* implicit */int) (short)0))))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (!(((/* implicit */_Bool) 1102006888922034066LL)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = min(((unsigned short)32834), (((/* implicit */unsigned short) (short)0)));
                var_21 += ((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) < (((/* implicit */int) (unsigned char)85))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) var_5))));
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((min((min((14119889858750972607ULL), (((/* implicit */unsigned long long int) (short)22)))), (((/* implicit */unsigned long long int) var_16)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)27567)))))))))));
                }
                for (signed char i_3 = 4; i_3 < 15; i_3 += 2) 
                {
                    var_24 ^= ((/* implicit */signed char) ((arr_6 [i_0] [10ULL]) & (((/* implicit */unsigned int) var_2))));
                    arr_10 [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_7 [i_0 - 2] [i_0 + 2]) % (7255517335416832109LL))))));
                }
                arr_11 [i_0 + 2] [i_1] [i_1] = ((/* implicit */long long int) (+((+(((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_25 *= ((/* implicit */signed char) (-(((((var_14) > (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) ? (68719476704LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_16))))))))));
}
