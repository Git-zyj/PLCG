/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21996
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
    var_15 ^= ((/* implicit */int) max((5235260076402105412ULL), (5102943757538375604ULL)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_16 ^= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)35333)))) ? (max((max((((/* implicit */unsigned int) arr_1 [i_0] [i_0])), (4294967295U))), (((/* implicit */unsigned int) min((var_1), (((/* implicit */unsigned char) var_6))))))) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_0 [i_0])))), (((((((/* implicit */int) var_5)) + (2147483647))) << (((((((/* implicit */int) arr_0 [i_0])) + (85))) - (6))))))))));
        var_17 += ((/* implicit */_Bool) (-((+(((/* implicit */int) arr_1 [i_0] [i_0]))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_18 = ((/* implicit */short) min((((/* implicit */unsigned long long int) min(((unsigned char)17), (((/* implicit */unsigned char) ((_Bool) var_12)))))), (7949739518425514245ULL)));
        arr_4 [i_1] [i_1] = (i_1 % 2 == zero) ? (((/* implicit */short) ((((/* implicit */_Bool) ((arr_2 [i_1]) >> ((((-(arr_2 [i_1]))) - (16251062748111423078ULL)))))) ? (max((((/* implicit */unsigned long long int) arr_3 [i_1 - 1])), (arr_2 [i_1]))) : (((/* implicit */unsigned long long int) (~(arr_3 [i_1 - 1]))))))) : (((/* implicit */short) ((((/* implicit */_Bool) ((arr_2 [i_1]) >> ((((((-(arr_2 [i_1]))) - (16251062748111423078ULL))) - (16234829102759626605ULL)))))) ? (max((((/* implicit */unsigned long long int) arr_3 [i_1 - 1])), (arr_2 [i_1]))) : (((/* implicit */unsigned long long int) (~(arr_3 [i_1 - 1])))))));
        var_19 = ((/* implicit */short) arr_3 [(_Bool)1]);
    }
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((max(((!(((/* implicit */_Bool) var_2)))), (var_12))) ? ((-((~(var_9))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)14)) : (var_8)))), (min((var_9), (var_9))))))))));
}
