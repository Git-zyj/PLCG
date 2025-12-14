/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5026
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
    var_18 |= ((/* implicit */int) var_5);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? ((-(((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */_Bool) (unsigned short)4096)) ? (((/* implicit */int) var_13)) : (var_4)))));
        var_19 = var_12;
        var_20 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0]))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(unsigned short)5])) ? (((/* implicit */long long int) var_8)) : (((((/* implicit */_Bool) arr_6 [i_1] [9ULL])) ? (arr_5 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))) ? (((((/* implicit */int) arr_7 [i_1])) | (((/* implicit */int) arr_7 [i_1])))) : ((~(((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))))));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (2147483641) : (((/* implicit */int) arr_7 [i_1]))))) ? (((/* implicit */int) arr_7 [i_1])) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_5 [i_1] [i_1])), (7048914266208536390ULL)))) ? ((+(((/* implicit */int) arr_7 [i_1])))) : (((int) arr_7 [i_1]))))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) -3LL);
    }
    /* vectorizable */
    for (unsigned short i_2 = 1; i_2 < 23; i_2 += 1) 
    {
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_7)))))));
        arr_12 [i_2] = ((/* implicit */long long int) (+(((unsigned int) arr_10 [i_2] [(short)23]))));
        arr_13 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) 14509913939267115622ULL)) ? (((/* implicit */int) (unsigned short)5641)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) var_3))));
    }
    var_24 = ((/* implicit */unsigned long long int) min((var_2), (var_12)));
}
