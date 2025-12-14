/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27225
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
    var_12 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)17270)) || (((/* implicit */_Bool) -2052810625))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((-1567135350) < (((/* implicit */int) var_6)))) || (((/* implicit */_Bool) min(((short)17263), (((/* implicit */short) (signed char)(-127 - 1)))))))))));
                var_14 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_3 [i_0] [i_1] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1])))))) ? ((~(4718680940676440051LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)127)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)127))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-17256))))) : (min((((/* implicit */unsigned long long int) (unsigned char)237)), (arr_3 [(_Bool)1] [i_1] [i_0]))))))));
                var_15 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((unsigned int) 2113929216))) ? (2147483648U) : (((/* implicit */unsigned int) 2147483617)))), (((/* implicit */unsigned int) ((1314885060U) < (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_1]))))))))));
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((-152139048084876068LL), (((/* implicit */long long int) 2147483620))))) || (((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) (_Bool)0)), (var_0))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((_Bool) 2021468775U)) || (((((/* implicit */_Bool) ((unsigned short) 1164741831))) || (((/* implicit */_Bool) ((unsigned int) (short)14692))))))))));
    var_18 |= ((/* implicit */short) -661738980);
}
