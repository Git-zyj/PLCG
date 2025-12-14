/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26669
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
    var_10 = ((/* implicit */signed char) var_5);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_11 = ((/* implicit */int) arr_2 [3U] [(short)1]);
        var_12 -= ((/* implicit */unsigned char) (~(arr_0 [i_0] [i_0])));
        var_13 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65521))) : (-111598370139681477LL)))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 3; i_1 < 22; i_1 += 1) 
    {
        var_14 -= ((/* implicit */unsigned char) (~((-(-5314541439115168504LL)))));
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) arr_4 [i_1]))));
        arr_5 [i_1] = ((/* implicit */signed char) (-(arr_3 [i_1])));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) arr_3 [i_1]);
    }
    var_16 = ((/* implicit */unsigned char) var_9);
    var_17 = ((/* implicit */short) ((((/* implicit */int) min((var_8), (((/* implicit */short) ((signed char) var_0)))))) ^ (((/* implicit */int) var_8))));
}
