/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212162
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
    var_10 = ((/* implicit */unsigned char) var_8);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) ((unsigned long long int) 18446744073709551615ULL))))));
        var_11 = ((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */unsigned short) ((18446744073709551615ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))), (arr_1 [i_0 - 2]))));
        arr_3 [6ULL] = ((/* implicit */unsigned char) var_3);
    }
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        var_12 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [(_Bool)1] [i_1]))) % (((((/* implicit */_Bool) -8394695639883788647LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13))) : (8394695639883788647LL)))));
        var_13 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_4 [i_1] [i_1]) ? (((/* implicit */int) (unsigned short)56964)) : (((/* implicit */int) arr_4 [i_1] [i_1]))))) ? (((/* implicit */int) max((arr_5 [i_1]), (((/* implicit */signed char) (_Bool)1))))) : ((~(((/* implicit */int) arr_4 [i_1] [(unsigned short)16]))))));
    }
}
