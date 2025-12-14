/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46384
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
    var_13 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */long long int) var_10))));
    var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(-1601733065))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 355040841U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63818))) : (1740689442U))) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) -1)), (var_8))))))))));
        var_15 = (i_0 % 2 == 0) ? (min((((((/* implicit */int) (unsigned short)7179)) << (((arr_1 [i_0 + 2] [i_0]) + (359895458))))), (((max((203400645), (arr_1 [i_0] [i_0]))) | (((((/* implicit */_Bool) 5759456771587453709ULL)) ? (var_7) : (arr_1 [(unsigned char)7] [i_0]))))))) : (min((((((/* implicit */int) (unsigned short)7179)) << (((((((arr_1 [i_0 + 2] [i_0]) + (359895458))) + (48908739))) - (7))))), (((max((203400645), (arr_1 [i_0] [i_0]))) | (((((/* implicit */_Bool) 5759456771587453709ULL)) ? (var_7) : (arr_1 [(unsigned char)7] [i_0])))))));
    }
    for (unsigned int i_1 = 2; i_1 < 16; i_1 += 1) 
    {
        var_16 = arr_2 [2ULL];
        arr_8 [14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [2LL])) ? (arr_2 [(short)6]) : (arr_0 [18])))) ? (((((/* implicit */_Bool) arr_2 [18U])) ? (arr_0 [8U]) : (arr_0 [(unsigned char)14]))) : (arr_0 [12])));
        var_17 = ((/* implicit */int) max((var_17), (((min((((((/* implicit */_Bool) 8589410304LL)) ? (((/* implicit */int) arr_7 [i_1])) : (-1))), (arr_1 [i_1] [(unsigned short)0]))) - (((/* implicit */int) arr_7 [i_1 + 2]))))));
        arr_9 [i_1] = (-((~(((/* implicit */int) arr_5 [i_1 + 2] [i_1 - 2])))));
    }
}
