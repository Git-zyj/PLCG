/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244061
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
    var_16 = (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_12)))), (((((/* implicit */_Bool) (unsigned short)65528)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_2))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned short) min(((+((-(2191788017U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? ((+(((/* implicit */int) (unsigned short)9)))) : (((/* implicit */int) (short)-22748)))))));
                var_18 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 2191788026U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-22742))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 - 2]))) & (arr_0 [i_0]))))), (((/* implicit */unsigned int) (unsigned short)6907))));
                var_19 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_2 [i_0 - 2] [(unsigned char)5])))) ? (((((/* implicit */_Bool) arr_3 [i_0 - 4])) ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 - 2]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2)))))));
            }
        } 
    } 
}
