/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206935
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
    var_13 = ((/* implicit */unsigned int) var_6);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) 2312838311U);
        var_14 = ((/* implicit */unsigned char) -9203951752762488607LL);
    }
    for (signed char i_1 = 3; i_1 < 14; i_1 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (unsigned short)55953))));
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (_Bool)1))));
            var_17 ^= ((/* implicit */unsigned short) 9203951752762488606LL);
            var_18 ^= (signed char)(-127 - 1);
        }
    }
    var_19 = ((/* implicit */short) var_6);
}
