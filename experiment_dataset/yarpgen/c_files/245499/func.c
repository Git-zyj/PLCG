/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245499
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
    var_14 = ((/* implicit */unsigned long long int) (-(-374867103)));
    var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(var_13))))));
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 14570698943674601220ULL)) ? (14948011588517249701ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21237))))))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 65472U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (4294901823U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 0ULL)))) : (var_13)))) ? (((/* implicit */unsigned long long int) 65472U)) : (min(((+(18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5357885645198504776LL)) ? (var_9) : (7844288219156607870LL))))))));
                var_17 = ((/* implicit */unsigned long long int) ((min((65472U), (var_5))) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
    var_18 |= ((/* implicit */short) ((unsigned long long int) (~(min((((/* implicit */long long int) (unsigned char)184)), (-6525666190810120289LL))))));
}
