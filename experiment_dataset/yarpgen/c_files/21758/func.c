/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21758
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (((+(((((/* implicit */_Bool) (short)-29989)) ? (((/* implicit */long long int) 11U)) : (1385289769461592725LL))))) + (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */unsigned int) ((/* implicit */int) var_11))) <= (var_6)))))))));
        arr_3 [i_0] [i_0 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) -585685357)) ? (arr_1 [i_0] [i_0 + 1]) : (arr_1 [i_0] [(_Bool)1])))))) ? (((/* implicit */long long int) (~(((arr_1 [i_0] [i_0]) & (arr_1 [i_0 - 1] [i_0 + 1])))))) : ((-9223372036854775807LL - 1LL))));
        arr_4 [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((1511054245079114820LL) + (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [18U] [11U])) ? (((/* implicit */int) (signed char)104)) : (arr_1 [i_0 - 3] [i_0 - 3])))) : (4294967272U)))));
        arr_5 [i_0 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_0 [i_0 - 1]) - (arr_0 [i_0 + 1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (arr_0 [i_0])))) ? (((long long int) arr_1 [i_0] [i_0])) : (arr_0 [i_0]))))));
    }
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) var_3))));
        var_13 ^= ((/* implicit */unsigned char) (-(((long long int) 2147483641))));
    }
    for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        var_14 = ((/* implicit */unsigned int) (unsigned char)147);
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) + (((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)206))) : (705289818U)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) ((8841330108345818681LL) < (((/* implicit */long long int) 4294967289U))))) : (((/* implicit */int) ((unsigned char) 9U)))))) : (((min((6U), (((/* implicit */unsigned int) (short)-29989)))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2])))))));
        var_16 = ((/* implicit */unsigned int) min((max((((/* implicit */int) var_3)), (((int) var_11)))), (((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2]))) <= (2199023255551LL))))))));
        var_17 = ((/* implicit */unsigned int) max((((/* implicit */int) arr_6 [(unsigned short)3])), (((((var_10) + (2147483647))) << (((((((((/* implicit */_Bool) (short)29988)) ? (var_0) : (((/* implicit */long long int) var_10)))) + (5923049600263323467LL))) - (20LL)))))));
    }
    var_18 &= ((/* implicit */long long int) var_1);
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) var_1))));
    var_20 |= ((/* implicit */unsigned int) var_4);
}
