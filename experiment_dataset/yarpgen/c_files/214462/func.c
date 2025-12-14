/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214462
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) (short)-1731)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) (short)16985)))) : (((((/* implicit */int) (short)1750)) + (((/* implicit */int) arr_0 [i_0])))))) <= (((/* implicit */int) arr_1 [i_0])))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((-1673705369), (((/* implicit */int) (short)-16985))))) ? (((((((/* implicit */int) arr_1 [i_0])) + (2147483647))) << (((((/* implicit */int) (unsigned char)232)) - (232))))) : (((((/* implicit */_Bool) (unsigned char)181)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [20])))))) / (((int) arr_0 [i_0]))));
    }
    for (int i_1 = 3; i_1 < 17; i_1 += 1) 
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((((/* implicit */_Bool) arr_0 [i_1 + 4])) ? (((/* implicit */int) arr_0 [i_1 + 2])) : (((/* implicit */int) (unsigned char)218)))) : (((int) (-(((/* implicit */int) arr_1 [i_1])))))));
        arr_7 [14LL] [(signed char)4] = ((/* implicit */long long int) ((min((((/* implicit */int) ((signed char) (short)16985))), (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) (short)255)))))) < (((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1])) - (((/* implicit */int) arr_1 [i_1]))))) ? (((((/* implicit */_Bool) arr_4 [i_1] [(_Bool)1])) ? (((/* implicit */int) arr_5 [i_1 - 1] [i_1])) : (((/* implicit */int) (signed char)-78)))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (unsigned char)162)) : (((/* implicit */int) (unsigned char)20))))))));
    }
    var_17 = ((/* implicit */unsigned char) ((((min((((var_4) / (((/* implicit */int) var_12)))), (((/* implicit */int) var_1)))) + (2147483647))) << (((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)29547)) : (((/* implicit */int) (unsigned char)181)))))) - (107)))));
}
