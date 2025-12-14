/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42384
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
    var_10 = ((/* implicit */unsigned short) var_6);
    var_11 = ((((/* implicit */_Bool) (~(min((var_2), (((/* implicit */long long int) var_7))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) - (((/* implicit */int) var_0))))) ? (((/* implicit */int) (unsigned char)58)) : (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (max((var_2), (((/* implicit */long long int) (unsigned char)87)))))));
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */int) var_8)) & (((/* implicit */int) var_9)))))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)169)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : (((/* implicit */int) var_7)))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0 - 2]);
        arr_5 [i_0] = ((/* implicit */_Bool) (~(arr_1 [i_0 - 1])));
        arr_6 [i_0] = ((/* implicit */unsigned char) ((((arr_1 [i_0 - 2]) / (((/* implicit */int) arr_2 [i_0 - 2])))) - (((arr_1 [i_0 - 2]) - (arr_1 [i_0 - 2])))));
        arr_7 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) min(((unsigned char)168), (min(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)1))))))) << (((arr_1 [(_Bool)1]) + (300393792)))));
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_13 = arr_8 [i_1];
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_1])) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)241)))))), (min((var_2), (((/* implicit */long long int) var_0)))))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_0 [i_1]), (arr_0 [i_1]))))))))));
        var_15 ^= ((/* implicit */_Bool) arr_1 [i_1]);
    }
    var_16 = ((/* implicit */unsigned int) (((!(((((/* implicit */int) var_3)) < (((/* implicit */int) var_7)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4))));
}
