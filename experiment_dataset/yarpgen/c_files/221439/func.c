/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221439
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                var_15 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_6)))))));
                var_16 = ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) 18446744073709551615ULL)));
                var_17 *= ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) arr_6 [i_1 - 1] [i_1 + 2] [10U])))))));
                var_18 += ((/* implicit */unsigned int) ((min((arr_5 [6U] [i_0] [6U]), (((/* implicit */unsigned long long int) -19)))) <= (((((/* implicit */unsigned long long int) var_1)) % (min((((/* implicit */unsigned long long int) 1073741792)), (1125899906842112ULL)))))));
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [2LL])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? ((+(((/* implicit */int) arr_6 [i_0] [i_1] [12ULL])))) : (((int) var_6)))))))));
            }
        } 
    } 
    var_20 = min((((/* implicit */long long int) min((var_12), (var_8)))), (((((/* implicit */long long int) min((24U), (2641397214U)))) % (((((/* implicit */_Bool) 3713362734U)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)26))))))));
}
