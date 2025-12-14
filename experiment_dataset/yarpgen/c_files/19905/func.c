/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19905
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
    var_13 = ((/* implicit */int) ((unsigned short) ((short) ((((/* implicit */_Bool) 614344939U)) ? (614344948U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-10353)))))));
    var_14 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4675220908035924599ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) 614344914U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : ((+(12ULL)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-49)) * (((/* implicit */int) var_12))))) ? ((+(((/* implicit */int) var_9)))) : (min((((/* implicit */int) var_4)), (624661177))))))));
    var_15 = ((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)48)) ? (var_8) : (var_2)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) > (var_11)))) : (624661163)))));
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (((/* implicit */int) min(((short)26337), (((/* implicit */short) var_1))))) : ((+(((/* implicit */int) (short)10338))))))) ? (min((((((/* implicit */_Bool) (short)10352)) ? (18446744073709551599ULL) : (((/* implicit */unsigned long long int) 2047)))), (((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned int) (short)5))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (18446744073709551601ULL) : (((/* implicit */unsigned long long int) 8681627720438176301LL))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) > (var_0)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) >= (var_0)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) min((((/* implicit */long long int) var_11)), (-8503432472994370508LL)))))));
                    arr_8 [i_0] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((signed char) (short)26316))))) : (min(((+(var_2))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) 689613092U)) : (var_0)))))));
                }
            } 
        } 
    } 
}
