/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191136
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) 8ULL))));
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) -3670376463946157003LL))));
        var_17 = ((/* implicit */long long int) (unsigned char)63);
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_18 += ((/* implicit */int) (short)2044);
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (_Bool)1))));
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) 165548493))));
                    var_21 -= ((/* implicit */signed char) 18446744073709551607ULL);
                    var_22 = (short)-32738;
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (_Bool)0))));
                }
            } 
        } 
        var_24 = ((/* implicit */long long int) (_Bool)1);
    }
    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) var_2))));
    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) var_8))));
}
