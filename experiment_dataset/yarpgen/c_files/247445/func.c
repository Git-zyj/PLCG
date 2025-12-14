/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247445
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
    var_15 = ((/* implicit */unsigned long long int) -1999189305);
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) -1999189305)) ? (((/* implicit */int) (_Bool)1)) : (1999189314))))))));
    var_17 ^= ((/* implicit */short) var_11);
    var_18 |= ((/* implicit */signed char) ((((/* implicit */_Bool) min((max((1999189310), (((/* implicit */int) (unsigned char)12)))), (((/* implicit */int) var_0))))) && (((/* implicit */_Bool) (unsigned char)242))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */int) (_Bool)0);
                var_20 = ((/* implicit */int) arr_0 [i_1]);
                var_21 = ((/* implicit */signed char) var_7);
                var_22 = ((/* implicit */unsigned short) min((((/* implicit */int) arr_6 [i_1 + 1] [i_1 - 2])), (min((-1907071479), (-1907071492)))));
            }
        } 
    } 
}
