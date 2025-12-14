/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39737
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
    var_12 = ((/* implicit */int) min(((~(min((-262144LL), (((/* implicit */long long int) (unsigned char)168)))))), (((/* implicit */long long int) ((unsigned char) var_11)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = min((min((arr_0 [i_0]), (arr_0 [i_0]))), (((/* implicit */int) ((unsigned char) ((unsigned long long int) 262129LL)))));
        var_13 = min((max((arr_0 [i_0]), (((/* implicit */int) arr_1 [i_0])))), ((~(arr_0 [i_0]))));
        arr_3 [1] &= ((/* implicit */unsigned char) arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        var_14 -= ((/* implicit */unsigned short) ((short) arr_6 [i_1]));
        var_15 = ((/* implicit */unsigned short) (+((~(arr_5 [(_Bool)1])))));
        arr_7 [(unsigned short)1] = ((/* implicit */_Bool) (+(arr_4 [i_1])));
        var_16 = ((/* implicit */_Bool) (~(arr_6 [i_1])));
    }
    var_17 = var_8;
}
