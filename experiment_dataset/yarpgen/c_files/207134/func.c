/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207134
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
    var_10 = ((/* implicit */short) var_0);
    var_11 = ((/* implicit */short) (~(9223372036854775807LL)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 7; i_0 += 2) 
    {
        arr_2 [i_0] [i_0 + 4] = -1723859712;
        arr_3 [(_Bool)1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [(signed char)8]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */int) arr_0 [i_0])) : (-1723859710))))))) ? (((arr_1 [8LL]) & (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [9]))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)2)) > (((/* implicit */int) arr_0 [i_0]))))))))));
        var_12 = ((/* implicit */unsigned char) (+(min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) ((((/* implicit */long long int) 536870911)) == (arr_1 [i_0]))))))));
        var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) (signed char)63))));
    }
    var_14 |= var_4;
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_1 = 4; i_1 < 14; i_1 += 3) 
    {
        arr_8 [i_1] [i_1] = arr_7 [(_Bool)1] [i_1];
        arr_9 [i_1] = ((/* implicit */_Bool) (~(arr_7 [i_1 - 1] [i_1 + 1])));
    }
}
