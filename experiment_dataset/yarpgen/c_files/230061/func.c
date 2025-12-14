/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230061
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (var_10)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (var_2) : (((/* implicit */int) (signed char)7))))) : (((var_4) | (((/* implicit */unsigned long long int) -9072212502257140367LL)))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) 1620945438U)), (-9072212502257140370LL)))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (2674021867U))) : (((/* implicit */unsigned int) var_6)))))));
        var_17 = ((/* implicit */unsigned short) var_2);
        var_18 = ((/* implicit */_Bool) (unsigned short)145);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 17; i_1 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */short) 9072212502257140386LL);
        arr_6 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 4294967284U)) || (((/* implicit */_Bool) (unsigned short)65373))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) -9072212502257140390LL);
                    var_21 = ((/* implicit */unsigned char) arr_4 [i_1] [i_1]);
                    arr_11 [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) arr_0 [i_1]);
                    var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [3] [i_2]))));
                }
            } 
        } 
    }
    for (signed char i_4 = 0; i_4 < 17; i_4 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_4] [i_4]))) : (8016213506431629871LL))) ^ (((/* implicit */long long int) min((var_3), (((((/* implicit */_Bool) -9072212502257140375LL)) ? (15U) : (3061354019U))))))));
        var_24 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned char) arr_5 [i_4] [i_4])), ((unsigned char)240))), (((/* implicit */unsigned char) max((var_9), (arr_5 [i_4] [i_4]))))));
    }
    var_25 = ((/* implicit */int) (unsigned short)15857);
    var_26 = ((/* implicit */_Bool) (~(min((((((/* implicit */_Bool) var_5)) ? (1233613260U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) (unsigned char)4)))))))));
    var_27 = ((/* implicit */signed char) var_9);
}
