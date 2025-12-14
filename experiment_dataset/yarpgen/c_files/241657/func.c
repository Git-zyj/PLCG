/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241657
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
    var_13 = 4611686018427387904LL;
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((short) (-(((/* implicit */int) arr_1 [i_0 + 1])))));
        arr_3 [i_0 + 1] = ((((/* implicit */long long int) ((((var_6) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39070))))) ? (((/* implicit */int) (short)8192)) : (((/* implicit */int) (unsigned short)26477))))) & ((~(7284396557140746100LL))));
    }
    for (long long int i_1 = 1; i_1 < 21; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) (unsigned short)39070);
        var_14 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((arr_4 [i_1] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) (short)-8192))) : (arr_5 [i_1])))))) ? (min(((-(((/* implicit */int) (short)-8192)))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)152)) == (((/* implicit */int) (signed char)-40))))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (arr_5 [i_1 - 1]))))));
        var_15 = ((/* implicit */long long int) ((((/* implicit */long long int) -225627345)) >= (min((-9223372036854775795LL), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)112)))))))));
        var_16 += ((/* implicit */unsigned long long int) (-((((_Bool)1) ? (((/* implicit */int) (short)-8169)) : (((/* implicit */int) (short)-8192))))));
    }
    var_17 = ((/* implicit */long long int) (+(((/* implicit */int) (short)-8183))));
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_0))));
}
