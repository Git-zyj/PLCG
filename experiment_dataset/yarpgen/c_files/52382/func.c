/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52382
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
    var_20 = ((/* implicit */unsigned int) min((max((((/* implicit */int) (short)4321)), (1073733632))), (((/* implicit */int) var_13))));
    var_21 = ((/* implicit */short) 3894692617U);
    var_22 = ((/* implicit */int) var_10);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0 - 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (arr_1 [i_0]) : (((((/* implicit */_Bool) 293604557)) ? (arr_1 [11LL]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [4LL])))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)151)))))) : (arr_1 [8U])));
    }
}
