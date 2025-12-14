/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212123
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (short)25915))) / ((+(((/* implicit */int) var_7))))))) ? (((/* implicit */int) (!(((_Bool) (_Bool)1))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) == (((/* implicit */int) (short)-14753))))))))));
                var_18 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned short)29589)) - (29562))))))));
                var_19 &= ((/* implicit */unsigned long long int) (-(((long long int) arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1]))));
                var_20 = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (unsigned short)0))))));
            }
        } 
    } 
    var_21 |= ((/* implicit */long long int) ((signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) 18071345994291073004ULL))))), (max((((/* implicit */unsigned long long int) 4844814616099908564LL)), (var_1))))));
    var_22 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)65535)))))) && (((/* implicit */_Bool) var_5))));
    var_23 = ((/* implicit */unsigned short) (((((+(((/* implicit */int) (unsigned short)0)))) - (((/* implicit */int) var_8)))) % (((int) (+(((/* implicit */int) var_16)))))));
    var_24 = ((/* implicit */unsigned int) ((unsigned short) min((((/* implicit */unsigned long long int) min(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)12))))), (max((var_1), (((/* implicit */unsigned long long int) var_10)))))));
}
