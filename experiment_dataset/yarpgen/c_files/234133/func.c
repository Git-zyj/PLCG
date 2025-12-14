/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234133
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8839)) ? (((/* implicit */long long int) min(((-(((/* implicit */int) (short)-8839)))), (((/* implicit */int) (short)-8))))) : ((-9223372036854775807LL - 1LL))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0]))))) < (((((/* implicit */_Bool) arr_7 [i_0] [i_1])) ? (((/* implicit */int) arr_7 [i_2] [i_1])) : (((/* implicit */int) (short)8839))))));
                    var_18 = ((/* implicit */unsigned char) max(((short)-8835), ((short)-32753)));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) != (3607715793U)));
    var_20 = ((/* implicit */unsigned char) max((((/* implicit */int) var_9)), (((((4058016732342931261LL) > (((/* implicit */long long int) ((/* implicit */int) (short)15411))))) ? ((+(((/* implicit */int) var_10)))) : (((/* implicit */int) (unsigned char)222))))));
    var_21 = ((/* implicit */int) var_12);
}
