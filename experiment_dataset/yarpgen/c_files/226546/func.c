/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226546
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
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 15; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_10 [4] [i_1] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_3 [i_0] [(unsigned char)2])) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)13181)) - (((/* implicit */int) (unsigned char)7))))) : (min((arr_9 [i_0]), (((/* implicit */unsigned int) arr_2 [i_1 - 2])))))) - (((arr_9 [i_1 - 3]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 + 2])))))));
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)0))))), (max((((((/* implicit */_Bool) 3525195033911122605ULL)) ? (arr_9 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned int) (unsigned char)233))))));
                    var_18 = ((/* implicit */int) arr_3 [i_0] [i_0]);
                    var_19 *= ((/* implicit */int) 1U);
                    arr_12 [i_2] = ((/* implicit */unsigned char) (unsigned short)42042);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)13181))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) var_6))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_5))) - (9223372036854775795LL)))))) : (4294967294U)));
    var_22 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_7)) ? ((+(((/* implicit */int) (short)-14792)))) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)46)), (var_14)))))));
}
