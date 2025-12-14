/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35677
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) 687800223);
        arr_2 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_1 [i_0])))))))));
        arr_3 [i_0] = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) -687800214)))) ? (((((/* implicit */int) (unsigned char)226)) * (((/* implicit */int) var_12)))) : ((+(((/* implicit */int) var_16))))))) ? (((/* implicit */int) (unsigned short)39308)) : (var_15));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            var_21 *= ((/* implicit */unsigned char) 2147483647);
            arr_8 [i_0] [i_1] = ((/* implicit */unsigned short) -687800223);
        }
    }
    var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_13)) ? ((+(var_14))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)38904)) ? (-687800225) : (((/* implicit */int) (unsigned short)39310))))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
    var_23 += ((/* implicit */unsigned char) ((5829324795295577126ULL) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) (unsigned char)52))))) ? (((/* implicit */int) (unsigned short)26224)) : (((/* implicit */int) ((signed char) var_12))))))));
}
