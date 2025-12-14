/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219575
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
    var_15 += ((/* implicit */unsigned int) ((unsigned long long int) var_6));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) max((((/* implicit */short) arr_3 [13LL] [i_0] [i_0])), ((short)-32755)))) ? (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (2223437455752010907LL))))))));
                var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0])) ? (arr_1 [i_0 - 1] [i_0]) : (arr_1 [i_0 - 1] [i_0]))) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0]))))))));
            }
        } 
    } 
}
