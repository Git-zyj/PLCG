/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37044
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
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_16 *= ((((((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned long long int) (signed char)-72))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (1447348055213294478ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)69))))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) var_1))))));
        var_17 &= ((/* implicit */int) var_9);
    }
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        arr_4 [i_1] [i_1] = ((/* implicit */unsigned int) ((min((((((/* implicit */int) (unsigned short)20981)) - (((/* implicit */int) var_11)))), (((/* implicit */int) (short)-3)))) & (((((/* implicit */int) var_1)) - (((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) (short)-3)))))))));
        var_18 = ((/* implicit */unsigned int) ((_Bool) max((((/* implicit */signed char) ((((/* implicit */int) (unsigned char)255)) == (((/* implicit */int) (short)6555))))), (((signed char) arr_1 [i_1])))));
        var_19 = arr_1 [i_1];
    }
    var_20 = ((/* implicit */int) min((var_20), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_15)), ((+(var_12)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (~(0U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)6)) : (((/* implicit */int) var_7)))))))) : (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) var_6)) <= (((/* implicit */int) (unsigned char)26))))), (var_5))))))));
    var_21 &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */int) var_7)))) < (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (1845330127))))))));
    var_22 = ((/* implicit */unsigned int) min((4ULL), (((/* implicit */unsigned long long int) (short)2))));
}
