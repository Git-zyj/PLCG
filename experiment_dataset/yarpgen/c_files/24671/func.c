/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24671
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((((((/* implicit */int) ((signed char) arr_0 [i_0 - 1]))) + (2147483647))) << (((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-82))) | (arr_0 [i_0]))) - (4294967215U)))))) : (((((unsigned int) arr_2 [i_0 - 1] [i_0 - 1] [i_0])) << (((((/* implicit */int) ((short) arr_2 [i_0] [i_0] [i_1]))) - (1931)))))));
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((12783870476584524030ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) var_2);
    var_15 &= ((/* implicit */unsigned long long int) (!((((!(((/* implicit */_Bool) var_7)))) && (((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_9))))))));
    var_16 ^= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) min((var_6), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))))));
}
