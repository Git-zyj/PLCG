/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38971
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
    var_18 = ((/* implicit */unsigned short) var_2);
    var_19 *= ((/* implicit */unsigned long long int) 3628244812U);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_20 &= ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) (unsigned short)14632))) ^ (((/* implicit */int) (signed char)-8))));
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)-21739)) && (((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) (unsigned short)0))))))))));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) >= (arr_1 [i_0])));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_11);
    }
}
