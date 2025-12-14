/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213496
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
    var_12 = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (var_4))) : (((/* implicit */int) var_9)))));
    var_13 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) != (((((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) << (((((/* implicit */int) min((var_5), (var_11)))) - (52)))))));
    var_14 |= ((/* implicit */unsigned long long int) min((min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */int) var_10)))))), (((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_8)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) min((var_9), (var_8))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [(_Bool)0] |= ((((/* implicit */_Bool) ((((min((arr_1 [i_0] [i_2]), (((/* implicit */long long int) arr_2 [i_0 - 2])))) + (9223372036854775807LL))) >> (((arr_5 [i_0 - 2]) - (525933764U)))))) ? (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0 - 1])))) : (((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 2])) : (((/* implicit */int) arr_3 [i_0 - 2] [i_0 - 2])))));
                    arr_9 [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) arr_7 [(short)4] [i_1] [i_1]);
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 2]), (((/* implicit */unsigned int) arr_4 [i_0 - 2]))))) * (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [i_0]))) / (arr_0 [i_1])))) ? (((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_2])) / (arr_0 [i_0]))) : (arr_0 [i_0 - 2])))));
                    var_16 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 2])) > (((/* implicit */int) arr_6 [(unsigned char)10] [i_0 - 1]))))), (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [(short)6] [i_0])) >> (((/* implicit */int) arr_2 [i_0 - 2]))))) ^ (((arr_0 [21ULL]) << (((arr_0 [(unsigned char)8]) - (18278395753574817671ULL)))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) var_9);
}
