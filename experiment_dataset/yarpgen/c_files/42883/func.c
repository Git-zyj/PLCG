/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42883
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)78)) | (((/* implicit */int) var_14))));
    var_18 = ((/* implicit */short) var_2);
    var_19 = ((/* implicit */signed char) var_2);
    var_20 = ((/* implicit */unsigned char) 3226485121U);
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) min((arr_0 [i_0 - 3] [i_0]), (arr_0 [i_0 + 1] [i_0]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)32148))))) ? (((((/* implicit */_Bool) (short)-32137)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((((/* implicit */int) arr_0 [i_0] [i_0])) * (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) ((((((/* implicit */int) arr_3 [i_0 - 2] [i_0 - 2])) + (2147483647))) >> (((((/* implicit */int) (unsigned char)193)) - (179))))))) ^ (((/* implicit */int) arr_3 [i_0] [i_0 - 2]))));
        var_22 = arr_1 [i_0 + 1];
    }
    for (short i_1 = 2; i_1 < 17; i_1 += 1) 
    {
        var_23 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((min((((/* implicit */short) arr_6 [(short)6])), ((short)32137))), (((/* implicit */short) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 3537959801U))))))))));
        var_24 -= ((/* implicit */unsigned char) min((((/* implicit */int) ((short) (-(((/* implicit */int) (unsigned char)78)))))), (((((arr_7 [i_1]) <= (((/* implicit */unsigned long long int) 959643903U)))) ? (((((/* implicit */_Bool) arr_6 [(unsigned char)10])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-32135)))) : (((/* implicit */int) arr_6 [(signed char)6]))))));
        var_25 = ((/* implicit */unsigned char) ((signed char) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)53)) ? (arr_7 [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15)))))));
        var_26 -= ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) arr_6 [(short)12])), (var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32179)) ? (((/* implicit */int) arr_6 [(unsigned char)12])) : (((/* implicit */int) arr_6 [(unsigned char)16])))))));
    }
}
