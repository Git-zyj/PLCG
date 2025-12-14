/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215123
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
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((var_11) | (((/* implicit */long long int) (-((+(((/* implicit */int) (_Bool)1))))))))))));
    var_16 = ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        var_17 ^= ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_1 [(unsigned char)12])) < (((/* implicit */int) var_0))))) >> ((((-(((/* implicit */int) arr_1 [8LL])))) + (554)))))) : (((((/* implicit */_Bool) (short)10445)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (18446744073709551615ULL))));
        var_18 = ((/* implicit */short) var_14);
        arr_3 [(unsigned short)12] |= ((/* implicit */short) var_4);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
        var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) * ((((((~(((/* implicit */int) arr_1 [i_0])))) + (2147483647))) >> ((((~(arr_2 [(unsigned short)0] [(unsigned short)0]))) - (17202111171627950048ULL)))))));
    }
}
