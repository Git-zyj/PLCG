/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190821
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
    var_20 = ((/* implicit */int) var_5);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)28093)) ? (((/* implicit */int) (signed char)-36)) : (((/* implicit */int) (_Bool)1))));
                arr_7 [5ULL] [(short)5] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), (var_12)))) && (((((/* implicit */_Bool) (signed char)31)) || ((_Bool)1)))))) * (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1)))))))));
                arr_8 [i_1] = ((/* implicit */long long int) ((min((((3786463854U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)-20735))))), (((/* implicit */unsigned int) (short)-20716)))) / (((/* implicit */unsigned int) var_17))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) (((((+(((/* implicit */int) var_6)))) >= (((/* implicit */int) var_2)))) ? (((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned short)127), (((/* implicit */unsigned short) var_8))))) || (((/* implicit */_Bool) ((unsigned int) var_14)))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 3767276932U)) ? (10U) : (1428881862U)))))))));
}
