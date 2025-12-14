/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1994
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
    var_11 = ((/* implicit */int) max((((/* implicit */unsigned int) var_1)), (((((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-44)) + (2147483647))) >> (((((/* implicit */int) var_8)) + (20389)))))) ^ (684167855U)))));
    var_12 = ((/* implicit */int) max((max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_2)) : (6396162554912722835ULL))), (min((((/* implicit */unsigned long long int) (short)-29090)), (9804647863563935108ULL))))), (((var_7) ? (min((((/* implicit */unsigned long long int) var_2)), (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_5), (var_4)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_3 [(short)4] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [5])) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) ? (min((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (2082538937U))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((short)13445), (((/* implicit */short) (unsigned char)252)))))));
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) | (max((arr_0 [i_0] [i_0]), (((/* implicit */int) var_8))))))) ? (((((/* implicit */_Bool) min((var_10), (11870690454796634765ULL)))) ? (((/* implicit */int) ((var_0) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))) : ((-(((/* implicit */int) arr_2 [i_0])))))) : (((/* implicit */int) ((_Bool) arr_0 [i_0] [i_0])))));
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (signed char)44))));
    }
}
