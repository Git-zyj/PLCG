/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208826
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
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) max((((int) (_Bool)1)), (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (var_5)))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 7; i_0 += 4) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_0 - 3] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)138))) : (2006305155956502373ULL))) >> (((((((arr_0 [i_0]) - (((/* implicit */int) (unsigned char)118)))) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)165))) > (var_6)))))) - (970529499)))));
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)137))) < (((((/* implicit */_Bool) (unsigned short)21934)) ? (((/* implicit */unsigned int) 0)) : (1073741824U)))));
        var_14 = ((/* implicit */unsigned short) min((0ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 3] [i_0 - 1])) ? (arr_0 [i_0]) : (arr_0 [i_0]))))));
        var_15 = ((/* implicit */signed char) ((((5975068778400301336ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_11)))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)152)) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : ((-2147483647 - 1)))) : (((((/* implicit */_Bool) (unsigned char)137)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_8)))))))));
        var_16 = ((/* implicit */short) (((-(((/* implicit */int) (unsigned char)164)))) + (((/* implicit */int) var_12))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_17 = ((int) arr_6 [i_1]);
        var_18 = ((/* implicit */int) ((((/* implicit */int) ((unsigned char) 775926057U))) < (((/* implicit */int) (unsigned char)152))));
        arr_7 [i_1] = ((/* implicit */int) arr_1 [i_1] [i_1]);
        arr_8 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1786742452)) ? (((/* implicit */int) (unsigned char)118)) : (-2147483626)));
    }
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((+(((/* implicit */int) (signed char)26)))) * ((~(((/* implicit */int) (unsigned short)52753))))))) ? (((/* implicit */int) (unsigned short)12782)) : (((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) / (((/* implicit */int) (unsigned char)119))))));
    var_20 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)230)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (11881961360591005238ULL))) : (min((var_10), (var_6))))))));
    var_21 += (-(((int) ((int) (signed char)-46))));
}
