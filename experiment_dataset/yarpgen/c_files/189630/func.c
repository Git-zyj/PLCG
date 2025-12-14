/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189630
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
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_17 *= ((/* implicit */short) (signed char)-103);
                var_18 *= ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 + 1])) + (((/* implicit */int) arr_0 [i_0 + 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)103))) : ((-(18446744073709551615ULL))));
                var_19 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_3 [i_0] [i_1] [i_1])))) ? (min((((/* implicit */unsigned long long int) (signed char)-119)), (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 2])))))) ? (arr_3 [i_0] [(unsigned char)6] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-109)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)118)), (arr_1 [i_0 + 2])))))))))));
            }
        } 
    } 
    var_20 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-22829)) : (var_16))), (((/* implicit */int) ((short) (signed char)120)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_9)))) ? (((unsigned long long int) var_16)) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3)))))));
    var_21 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_5)))))))) > (var_13)));
}
