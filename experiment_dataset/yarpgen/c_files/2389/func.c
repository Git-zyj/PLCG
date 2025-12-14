/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2389
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_4 [i_0] [6U] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0]))));
        var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */long long int) ((int) arr_0 [(short)13] [i_0]))) : (((long long int) arr_0 [11ULL] [11ULL]))));
    }
    for (short i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_11 *= ((/* implicit */unsigned int) (+(((/* implicit */int) min((arr_6 [i_1]), (arr_6 [i_1]))))));
        var_12 = min(((~(arr_5 [i_1]))), (((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_1]))))));
    }
    var_13 = ((/* implicit */unsigned long long int) var_5);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) 9090227283075885726ULL)) ? (((/* implicit */unsigned long long int) 508472345U)) : (8990019819204717901ULL)));
        arr_11 [i_2] = ((/* implicit */long long int) ((int) arr_1 [i_2]));
        var_15 = ((/* implicit */signed char) (+(arr_7 [i_2])));
    }
    /* vectorizable */
    for (short i_3 = 2; i_3 < 12; i_3 += 1) 
    {
        arr_15 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_3 - 2])) << (((((/* implicit */int) arr_1 [i_3 - 2])) - (31047)))));
        arr_16 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */int) arr_12 [i_3 - 2])) : (((/* implicit */int) arr_12 [i_3]))))) || (((/* implicit */_Bool) arr_2 [i_3 - 2]))));
    }
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_4)) : (((((/* implicit */_Bool) (unsigned char)22)) ? (9090227283075885726ULL) : (18446744073709551585ULL)))));
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : ((-(max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)142))))))));
}
