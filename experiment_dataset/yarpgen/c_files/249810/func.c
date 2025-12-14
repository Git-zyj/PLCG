/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249810
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) (+(9223372036854775807LL)));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */short) ((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (signed char)127)))) != (((/* implicit */unsigned long long int) (+(15LL))))));
                    arr_9 [16ULL] &= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) max((2147483640), (((/* implicit */int) (_Bool)1))))), (1U)));
                    var_19 &= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (((-2147483647 - 1)) != (((/* implicit */int) (_Bool)1))))), (4294967295U)));
                }
            } 
        } 
    }
    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) + (((4294967294U) >> (0U))))) >= (max((134201344U), (((/* implicit */unsigned int) (short)128))))));
        arr_12 [i_3] [i_3] = (!((!(((/* implicit */_Bool) 2147483633)))));
        arr_13 [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65516)) && ((_Bool)1)))) ^ ((~(((/* implicit */int) (unsigned short)33))))));
    }
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) 12582912U))));
}
