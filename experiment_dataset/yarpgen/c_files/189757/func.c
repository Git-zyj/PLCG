/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189757
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
    var_16 = ((/* implicit */unsigned char) var_9);
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((int) arr_1 [i_0] [i_0])) << (((((((/* implicit */_Bool) (short)-31182)) ? (14582827029669254597ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31182))))) - (14582827029669254597ULL)))))) < (((((/* implicit */_Bool) arr_1 [i_0 + 4] [i_0])) ? (arr_1 [i_0 + 3] [i_0]) : (arr_1 [i_0 - 1] [i_0])))));
        arr_3 [i_0] [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0])) && (((/* implicit */_Bool) (unsigned short)26830)))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)76))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (11908190015473791902ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31181)))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        arr_7 [(_Bool)1] |= ((/* implicit */int) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31206))) <= (1648952396303718521ULL))));
        var_17 = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) var_12)), ((~(var_9))))), (((/* implicit */unsigned long long int) var_1))));
        var_18 = ((/* implicit */_Bool) ((short) arr_4 [i_1]));
    }
}
