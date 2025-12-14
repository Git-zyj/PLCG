/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29111
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
    var_16 = ((/* implicit */int) (+(((long long int) ((13838979295663105103ULL) != (1ULL))))));
    var_17 = var_7;
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_18 -= max((((((unsigned long long int) 13838979295663105119ULL)) % (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_1), (((/* implicit */unsigned char) arr_2 [i_0] [i_2])))))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)67))) + (var_12)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)34)) ? (201326592U) : (((/* implicit */unsigned int) -2147483643))))) : (arr_5 [i_2] [i_0]))));
                    var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (13838979295663105121ULL)));
                }
            } 
        } 
    } 
    var_20 -= ((/* implicit */unsigned short) var_15);
    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_7)))))));
}
