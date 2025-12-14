/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190256
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)-3))));
        arr_3 [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((((/* implicit */short) var_12)), ((short)4)))) ? (((((/* implicit */_Bool) var_14)) ? (var_14) : (((/* implicit */int) var_8)))) : (((((/* implicit */int) var_12)) / (356819080))))), (((((/* implicit */int) arr_1 [i_0] [i_0])) / (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        arr_4 [i_0] |= ((unsigned short) ((((/* implicit */int) arr_0 [i_0] [i_0])) * (((/* implicit */int) arr_0 [i_0] [i_0]))));
        arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_0] [i_0]))) ? (((((/* implicit */int) arr_0 [(short)8] [i_0])) & (((/* implicit */int) var_10)))) : (((/* implicit */int) max((((unsigned short) var_6)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [(signed char)1] [(signed char)1]))))))))));
        arr_6 [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)32256)) : ((((!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((((/* implicit */_Bool) (unsigned short)3523)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [(unsigned short)6] [i_0]))))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 2) 
    {
        var_16 ^= ((/* implicit */unsigned short) min((((((/* implicit */int) var_9)) & (((/* implicit */int) arr_8 [i_1 + 1])))), (((((var_1) ^ (((/* implicit */int) arr_7 [(unsigned short)11])))) & ((~(((/* implicit */int) arr_7 [i_1]))))))));
        var_17 = ((/* implicit */unsigned short) ((int) min((((/* implicit */unsigned short) var_8)), (var_11))));
    }
    var_18 |= ((/* implicit */unsigned char) ((((/* implicit */int) max((max(((short)-3), (var_9))), (((/* implicit */short) (!(((/* implicit */_Bool) var_0)))))))) - (max((((((/* implicit */int) var_10)) + (((/* implicit */int) var_5)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4))))))));
}
