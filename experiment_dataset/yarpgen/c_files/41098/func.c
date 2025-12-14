/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41098
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
    var_16 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)44529)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21006)))))) & (((long long int) (unsigned char)247)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            arr_4 [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */int) (short)-30761)) - (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) (unsigned char)54)) : (((/* implicit */int) (unsigned short)21006))))) <= (((unsigned int) 793951451U)))))));
            /* LoopNest 2 */
            for (long long int i_2 = 4; i_2 < 14; i_2 += 2) 
            {
                for (long long int i_3 = 1; i_3 < 13; i_3 += 1) 
                {
                    {
                        var_17 = ((((/* implicit */int) var_9)) << (((long long int) ((var_10) != (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
                        arr_12 [i_0] [i_1] [i_2 - 2] [i_3 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_2 - 1])) ? (var_3) : (((/* implicit */unsigned int) var_6))));
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_12))));
                    }
                } 
            } 
            arr_13 [i_0] [i_1] = ((/* implicit */unsigned short) (+((+(3501015846U)))));
        }
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (~(((/* implicit */int) (unsigned short)35313)))))) ? (((3501015844U) * (1841377238U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
        arr_14 [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (var_10))) == (((/* implicit */unsigned int) ((arr_3 [i_0]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)54)))))))) << (((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0])) != (((/* implicit */int) var_9))))) / (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_0])) : (arr_5 [i_0] [i_0] [i_0] [i_0])))))));
        arr_15 [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_7)) ? (793951452U) : (2264547525U)))))) ? ((~(((/* implicit */int) min(((unsigned char)28), (((/* implicit */unsigned char) var_0))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])))))));
    }
    for (signed char i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_4])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) -1068451753)) ? (((/* implicit */unsigned int) -116632650)) : (var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_4] [i_4])) ? (((/* implicit */int) arr_2 [i_4] [i_4])) : (((/* implicit */int) arr_2 [i_4] [i_4])))))));
        var_21 *= arr_0 [i_4];
        var_22 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((short) arr_2 [(unsigned short)1] [i_4]))) ? (((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_12))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_4] [i_4]))) : (626720073U))))))));
        var_23 = ((/* implicit */long long int) ((unsigned short) ((unsigned char) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_1 [i_4]))))));
    }
    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)20979)))))));
}
