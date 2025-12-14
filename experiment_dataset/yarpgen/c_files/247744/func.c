/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247744
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
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_2 [i_1] [i_0] [i_0])))) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), (var_10)))) : (((((/* implicit */int) (unsigned char)21)) * (((/* implicit */int) var_5))))))) <= (((((/* implicit */_Bool) ((short) var_14))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0 + 1] [i_1])))))) : (arr_2 [i_0] [i_0 + 1] [i_1]))))))));
                var_18 |= ((/* implicit */int) ((((/* implicit */_Bool) 2333467784U)) ? (((((((/* implicit */_Bool) 0U)) ? (18446744073709551606ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32759))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-86))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                var_19 -= ((/* implicit */unsigned long long int) arr_0 [i_1]);
                var_20 = ((/* implicit */unsigned int) arr_1 [i_1 + 1] [i_1 + 1]);
                var_21 = ((/* implicit */unsigned int) ((min((max((18446744073709551606ULL), (((/* implicit */unsigned long long int) (unsigned char)147)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (((/* implicit */int) (short)-32760)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))) < (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_11)))))))));
            }
        } 
    } 
    var_22 = ((long long int) var_1);
    var_23 = ((/* implicit */unsigned short) min((((((2167315290U) + (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)33427)) : (((/* implicit */int) var_0))))))), (((/* implicit */unsigned int) var_12))));
    var_24 = ((/* implicit */unsigned int) ((short) ((max((732764391U), (((/* implicit */unsigned int) var_12)))) << (((((/* implicit */int) max(((short)-22575), ((short)32755)))) - (32747))))));
    var_25 = ((/* implicit */unsigned short) var_11);
}
