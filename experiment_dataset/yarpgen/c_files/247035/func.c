/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247035
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((unsigned long long int) -1LL)) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (0) : (arr_1 [i_0]))))));
        var_14 = ((signed char) ((((/* implicit */_Bool) (-(arr_0 [i_0])))) ? (((((/* implicit */_Bool) (unsigned char)91)) ? (var_1) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
    }
    /* LoopSeq 1 */
    for (long long int i_1 = 3; i_1 < 14; i_1 += 4) 
    {
        arr_6 [i_1 - 1] = ((/* implicit */long long int) (((~(((/* implicit */int) (unsigned short)40803)))) - (arr_1 [i_1 - 1])));
        var_15 = ((/* implicit */unsigned int) (~(arr_3 [i_1] [i_1 - 3])));
    }
}
