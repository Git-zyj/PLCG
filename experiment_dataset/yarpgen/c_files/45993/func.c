/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45993
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) -605165907)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)7659))));
    var_15 = ((/* implicit */_Bool) var_2);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (((-(((((/* implicit */_Bool) (signed char)6)) ? (var_4) : (((/* implicit */int) arr_2 [i_0])))))) ^ (((/* implicit */int) ((signed char) arr_2 [i_0])))));
        arr_4 [6LL] = max((var_10), (((/* implicit */short) ((arr_1 [i_0] [i_0]) == (arr_1 [i_0] [i_0])))));
    }
    for (signed char i_1 = 2; i_1 < 11; i_1 += 3) 
    {
        arr_8 [7] [7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_5 [i_1 + 2] [i_1 - 2])) : (((/* implicit */int) arr_5 [i_1 - 2] [i_1 + 4]))))) ? (arr_0 [i_1] [i_1]) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_1 + 2])))))));
        var_16 = ((/* implicit */short) (-(((unsigned long long int) arr_5 [i_1 + 4] [i_1 + 2]))));
        var_17 = ((/* implicit */unsigned char) max((max((((/* implicit */short) (unsigned char)115)), ((short)-6689))), (((/* implicit */short) max((((/* implicit */unsigned char) arr_6 [i_1 + 3] [(unsigned char)2])), (max(((unsigned char)86), (((/* implicit */unsigned char) (signed char)117)))))))));
    }
    /* vectorizable */
    for (signed char i_2 = 2; i_2 < 15; i_2 += 1) 
    {
        arr_13 [i_2] = var_13;
        arr_14 [i_2] [i_2] = ((/* implicit */unsigned char) (short)(-32767 - 1));
        var_18 = arr_2 [(short)16];
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) ^ (((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (((/* implicit */int) arr_10 [i_2] [i_2 + 1])) : (((/* implicit */int) var_1))))));
        arr_15 [i_2] = ((/* implicit */short) (-(arr_1 [i_2 - 2] [i_2 - 1])));
    }
}
