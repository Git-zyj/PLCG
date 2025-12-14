/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207942
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
    var_14 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) (unsigned char)89))))) : (min((((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) var_12))))), (((((/* implicit */int) var_10)) << (((((/* implicit */int) var_5)) - (62)))))))));
    var_15 = ((/* implicit */unsigned int) (signed char)-39);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                var_16 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (!((_Bool)1)))), (((((/* implicit */_Bool) (unsigned char)169)) ? (((/* implicit */long long int) 528150056)) : (arr_1 [i_0] [i_1])))))) || (((/* implicit */_Bool) (+(max((-528150065), (((/* implicit */int) (unsigned char)62)))))))));
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)75)) << (((arr_1 [i_0] [i_0]) - (3961922716259029828LL)))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        var_17 += ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)68))));
        arr_7 [i_2] [i_2] = max((max((((((/* implicit */int) (unsigned short)61702)) / (-528150063))), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1)));
    }
    for (unsigned int i_3 = 1; i_3 < 24; i_3 += 4) 
    {
        arr_10 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((+(((/* implicit */int) arr_8 [i_3] [i_3])))), (((/* implicit */int) ((var_4) > (528150055))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3 + 1] [i_3 + 1])))))) : (arr_9 [i_3 + 1])));
        arr_11 [i_3 - 1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_8 [i_3 + 1] [i_3 + 1])) : (((/* implicit */int) arr_8 [i_3 + 1] [i_3 + 1]))))) ? (((((/* implicit */_Bool) arr_8 [i_3 - 1] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3 + 1] [i_3 + 1]))) : (2450653909U))) : (((unsigned int) (unsigned char)53))));
        arr_12 [i_3] [i_3] &= ((/* implicit */signed char) var_8);
        var_18 = (-((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6))) : (2737899492U))));
        var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((arr_9 [i_3]) / (((((/* implicit */_Bool) arr_9 [i_3 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_9 [i_3])))))), (min((((/* implicit */unsigned long long int) (unsigned char)75)), (min((var_0), (((/* implicit */unsigned long long int) var_4))))))));
    }
    var_20 |= ((/* implicit */unsigned int) min((((/* implicit */signed char) ((((/* implicit */long long int) (-(((/* implicit */int) var_12))))) > (max((7979272142990742734LL), (((/* implicit */long long int) var_11))))))), (var_11)));
}
