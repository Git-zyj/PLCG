/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215713
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */int) var_8)) + (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)11346))))))));
    var_18 = var_13;
    var_19 = ((/* implicit */unsigned int) var_8);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (arr_0 [i_1])))) % (min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_0])), (var_11))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)32343)) || (((/* implicit */_Bool) (signed char)-33))))))));
                var_21 = ((/* implicit */unsigned char) ((min((arr_3 [i_0] [i_0] [i_0]), (-8796811016703319100LL))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)32)) != (((/* implicit */int) (short)13706))))))));
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) | (((/* implicit */int) (unsigned char)144))))) ^ (622956363U)))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) == (((/* implicit */int) (signed char)-33)))))));
            }
        } 
    } 
}
