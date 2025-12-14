/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226911
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
    var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_1))));
    var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_10)), (((((/* implicit */int) (unsigned char)6)) / (((/* implicit */int) (unsigned char)249))))));
    var_20 = (~(var_2));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (((~(530876643U))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_0 + 1] [i_0 + 1])) ? (((((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) / (((/* implicit */int) (unsigned char)22)))) : (arr_0 [i_1] [i_0])))))))));
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */int) (unsigned char)3)) >> (((((/* implicit */int) (signed char)62)) - (48)))))));
                var_22 -= ((((((/* implicit */_Bool) ((signed char) arr_1 [i_1]))) ? (((((/* implicit */unsigned int) 2076255135)) - (2757463000U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)6)) * (((/* implicit */int) (unsigned short)29518))))))) << (((arr_0 [i_1] [i_1]) + (1644611053))));
            }
        } 
    } 
}
