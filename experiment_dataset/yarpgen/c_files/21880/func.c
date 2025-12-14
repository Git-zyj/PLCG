/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21880
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_11 ^= ((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (var_6))) % (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (arr_3 [i_0] [i_0]))));
        var_12 = ((signed char) (unsigned char)108);
    }
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)231))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) % (18446744073709551593ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_4))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) var_9))) % (((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) var_8))))))))));
    var_14 = ((/* implicit */signed char) (~(max((var_10), (((/* implicit */long long int) (unsigned short)32850))))));
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? ((~(((/* implicit */int) (unsigned char)91)))) : (((/* implicit */int) var_5))));
    /* LoopSeq 3 */
    for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_16 = ((/* implicit */short) (signed char)(-127 - 1));
        arr_7 [i_1] |= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)231))));
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-17478))))) ? (arr_2 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((arr_2 [i_1]) == (arr_2 [i_1])))))))))));
    }
    for (short i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        arr_10 [i_2] = ((/* implicit */long long int) arr_3 [i_2] [(short)7]);
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) arr_0 [i_2])))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_2])) > (((/* implicit */int) arr_0 [i_2]))))))))));
    }
    for (unsigned short i_3 = 4; i_3 < 8; i_3 += 4) 
    {
        var_19 *= ((/* implicit */long long int) ((unsigned char) var_4));
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3 - 3]))) + ((~(var_10)))))) ? (((1099494850560LL) << (((((((/* implicit */int) (signed char)-124)) + (177))) - (43))))) : (arr_2 [i_3])));
    }
}
