/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212323
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (min((((/* implicit */unsigned long long int) ((var_4) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) var_8))))), (min((((/* implicit */unsigned long long int) (unsigned char)15)), (var_2)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_7 [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 6422916466549876907ULL)) ? (6422916466549876883ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)219)))))));
                arr_8 [12ULL] [i_1] [i_1] &= ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)240))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) var_3);
}
