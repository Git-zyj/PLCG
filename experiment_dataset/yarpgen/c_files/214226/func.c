/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214226
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) min(((short)-11362), (((/* implicit */short) var_7))))) ? (((/* implicit */unsigned long long int) -8990516258106080880LL)) : (((unsigned long long int) var_1))))));
    var_20 = ((/* implicit */long long int) ((short) max((((/* implicit */short) ((var_8) <= (((/* implicit */int) (signed char)71))))), (((short) (unsigned short)43371)))));
    var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_8)), (max((4275459838163859430ULL), (((/* implicit */unsigned long long int) (unsigned short)34030))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_22 = ((/* implicit */short) arr_1 [i_0]);
        var_23 = (!(((/* implicit */_Bool) (unsigned short)19157)));
        var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-21443)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21444))) : (arr_2 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32476))) : (((unsigned long long int) arr_0 [i_0]))));
    }
}
