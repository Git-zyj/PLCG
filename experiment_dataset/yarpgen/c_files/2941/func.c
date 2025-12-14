/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2941
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
    for (long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 4; i_1 < 16; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */int) ((((((/* implicit */int) (short)4494)) < (((/* implicit */int) arr_0 [i_0 + 1])))) ? (((((/* implicit */unsigned int) -533258435)) - (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(-533258447))))))))));
                var_20 *= ((/* implicit */unsigned int) (+(((/* implicit */int) var_0))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) (+(max((var_1), ((~(var_3)))))));
    var_22 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) (-(134217724ULL)))) ? (((/* implicit */int) min((var_15), (((/* implicit */unsigned short) (unsigned char)54))))) : (var_14))));
    var_23 &= (-((-((+(((/* implicit */int) var_9)))))));
    var_24 -= ((/* implicit */unsigned short) var_5);
}
