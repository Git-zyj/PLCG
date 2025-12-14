/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49129
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
    var_13 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_14 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)23168)) : (((/* implicit */int) arr_2 [18ULL] [18ULL])))));
        var_15 = ((/* implicit */_Bool) ((((((/* implicit */int) (short)(-32767 - 1))) >= (((/* implicit */int) (short)32757)))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */long long int) var_1)) - (var_5))))))));
        var_16 = ((/* implicit */unsigned short) ((signed char) ((18446744073709551612ULL) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)8))))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_4 [i_1 + 1])) == (((/* implicit */int) arr_4 [i_1 + 3])))) ? (((arr_4 [i_1 - 2]) ? (((/* implicit */int) arr_4 [i_1 + 1])) : (((/* implicit */int) arr_4 [i_1 - 2])))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)32757)) : (((/* implicit */int) arr_4 [i_1 - 2]))))));
        arr_6 [i_1] = (short)-32759;
    }
    var_17 = ((/* implicit */unsigned short) var_0);
}
