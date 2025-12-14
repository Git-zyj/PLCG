/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240084
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
    var_10 = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) (+(1638620216228231377LL)))), (((((/* implicit */_Bool) (unsigned char)244)) ? (3797483905621627108ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))), (((/* implicit */unsigned long long int) min((((((/* implicit */int) var_7)) * (((/* implicit */int) var_8)))), ((+(((/* implicit */int) (unsigned short)52379)))))))));
    var_11 = ((/* implicit */unsigned char) max((((/* implicit */int) var_5)), ((+(((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_1)))))))));
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)6686)) ? (max((min((0ULL), (((/* implicit */unsigned long long int) 1490721979691664429LL)))), (((/* implicit */unsigned long long int) var_9)))) : (6388674458058626944ULL))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((signed char) arr_1 [i_0]));
        arr_4 [(unsigned short)12] |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [(unsigned char)12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15))) : (arr_2 [(_Bool)1]))) + (((((/* implicit */_Bool) 3797483905621627118ULL)) ? (arr_2 [10U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))));
    }
    for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        var_13 = ((/* implicit */unsigned char) arr_6 [i_1] [i_1]);
        var_14 = ((/* implicit */unsigned char) ((unsigned long long int) min((((((/* implicit */_Bool) 4166342642U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)573)))), (((int) var_9)))));
    }
}
