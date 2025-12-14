/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221283
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
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                var_12 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7387)) ? (1152921504606846848LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)101)))))) ? (arr_0 [i_0]) : (((((/* implicit */_Bool) (signed char)-64)) ? (478131839U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) var_0))));
                    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1] [i_0])) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_1 + 1] [i_1 - 1] [i_2] [i_0 - 1]))))) : (((long long int) arr_6 [i_0 + 2] [i_1 - 1] [i_0 + 2])))))));
                }
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) max(((((!(((/* implicit */_Bool) (unsigned char)102)))) ? (((/* implicit */long long int) 1366667244U)) : (var_7))), (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_10)) ? (1152921504606846848LL) : (((/* implicit */long long int) 1366667267U)))) : (((/* implicit */long long int) (~(((/* implicit */int) var_1)))))))));
    var_15 = ((/* implicit */_Bool) var_9);
}
