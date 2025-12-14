/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221702
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_13)))) ? (max((var_6), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))) ? (18446744073709551608ULL) : (((/* implicit */unsigned long long int) ((int) var_9)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_16 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_11)) : (-8988201438289158799LL))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (524287LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) 16ULL)) ? (((/* implicit */unsigned long long int) -6325957267575549141LL)) : (18446744073709551600ULL))), (18446744073709551609ULL))))));
                var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [4LL]))))) ? (((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) arr_0 [i_1])))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_0 [i_1]))))));
                var_18 ^= ((/* implicit */signed char) max((((/* implicit */long long int) min((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_1 [8ULL])) : (((/* implicit */int) var_3)))), (((/* implicit */int) var_5))))), (min((-7966188280663404194LL), (((/* implicit */long long int) (short)(-32767 - 1)))))));
                var_19 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) arr_2 [i_1]))))) > (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_0]))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) 1450785433847814125LL));
            }
        } 
    } 
    var_20 |= ((/* implicit */long long int) var_2);
}
