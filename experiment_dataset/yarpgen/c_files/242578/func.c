/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242578
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
    var_13 = ((/* implicit */unsigned int) ((unsigned short) 1632122475));
    var_14 |= ((/* implicit */long long int) ((((/* implicit */_Bool) 17298512497289732959ULL)) || (((/* implicit */_Bool) var_6))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_15 = ((arr_0 [i_0]) ^ (((/* implicit */unsigned long long int) (+(-57066685)))));
        var_16 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))))) ? (((((/* implicit */_Bool) 2196177741110753468LL)) ? (((/* implicit */unsigned int) 1805604995)) : (110981656U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((18446744073709551587ULL) <= (((/* implicit */unsigned long long int) 2765885415U)))))))), (((/* implicit */unsigned int) ((unsigned char) arr_0 [i_0]))));
        var_17 = max((max((arr_3 [i_0]), (arr_3 [i_0]))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0]) : (arr_3 [(signed char)3]))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */int) (~(var_0)));
        arr_9 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) (signed char)14)))));
    }
}
