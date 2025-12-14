/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49791
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
    var_16 ^= ((unsigned short) var_15);
    var_17 = ((/* implicit */unsigned int) var_11);
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 11; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) -2525332937892371058LL);
        arr_2 [i_0] = ((/* implicit */unsigned int) ((long long int) arr_1 [i_0] [i_0 - 2]));
    }
    for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_3 [i_1]) - (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned int) arr_5 [i_1] [i_1]))))) : ((~(-2525332937892371027LL)))))) ? (((/* implicit */unsigned long long int) max((arr_3 [i_1]), (((/* implicit */long long int) ((((/* implicit */int) arr_4 [(unsigned char)4])) * (((/* implicit */int) var_1)))))))) : (var_13));
        var_20 |= (~(9223372036854775807LL));
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((var_13) >> ((((~(arr_5 [i_1] [i_1]))) - (1882215407))))))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)100)) : (((/* implicit */int) arr_4 [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_3 [i_1])))) : (-2525332937892371058LL)))) ? (max((((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_6 [i_1])))), (arr_5 [i_1] [i_1]))) : ((-(((/* implicit */int) (signed char)-53))))));
        var_23 = ((/* implicit */signed char) var_4);
    }
    var_24 = ((/* implicit */unsigned short) var_8);
    var_25 = ((/* implicit */short) var_6);
}
