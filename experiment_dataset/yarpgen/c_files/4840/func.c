/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4840
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
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) 4294967294U)) / (var_16)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-15053)), ((unsigned short)59796))))) : (var_11)))), (var_10))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((12U), (10U)))) ? (((/* implicit */long long int) min((arr_1 [i_0]), (((/* implicit */unsigned int) arr_2 [i_0]))))) : (var_16))) / (((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2 - 2])))))));
                    arr_6 [i_0] [i_2 - 2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((min((var_18), (var_10))) + (9223372036854775807LL))) << (((((((/* implicit */int) var_3)) * (((/* implicit */int) arr_5 [i_1])))) - (2591106))))))));
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) max((((((/* implicit */_Bool) 2383871705U)) ? (((/* implicit */long long int) var_5)) : (var_0))), (((/* implicit */long long int) ((min((var_7), (((/* implicit */long long int) var_4)))) > (((/* implicit */long long int) ((/* implicit */int) var_9)))))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */short) ((((/* implicit */long long int) var_5)) - ((~(((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */long long int) var_11))))))));
    var_24 |= ((/* implicit */_Bool) max((max((((/* implicit */unsigned int) var_13)), (0U))), (((/* implicit */unsigned int) (+(((/* implicit */int) max(((unsigned short)3529), ((unsigned short)1817)))))))));
}
