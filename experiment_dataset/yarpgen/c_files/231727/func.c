/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231727
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_10 = ((/* implicit */signed char) 14285788038514240436ULL);
        arr_2 [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)42616)) < (((/* implicit */int) ((((/* implicit */int) (signed char)-63)) <= (13))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        var_11 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)64)) > (((((/* implicit */int) (unsigned short)42638)) * (13)))));
        var_12 -= ((((/* implicit */int) (unsigned char)143)) >> (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)42642)) || (((/* implicit */_Bool) -35))))));
    }
    var_13 += ((/* implicit */unsigned int) (unsigned short)29061);
}
