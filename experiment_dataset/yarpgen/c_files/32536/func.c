/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32536
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
    for (short i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 17154017777728042101ULL)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)21609)) / (((/* implicit */int) (signed char)123))))) : (arr_1 [i_0 - 1] [i_0 - 1])));
        arr_2 [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned char) ((unsigned int) var_4));
    }
    for (short i_1 = 1; i_1 < 11; i_1 += 1) 
    {
        var_12 ^= ((/* implicit */_Bool) ((short) var_9));
        arr_5 [10LL] = ((/* implicit */_Bool) max((arr_3 [i_1] [i_1 + 3]), ((((+(((/* implicit */int) var_3)))) * (((/* implicit */int) (short)25526))))));
        var_13 = ((/* implicit */signed char) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) 3ULL)) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1])))))) * (min((((/* implicit */int) ((((/* implicit */long long int) -12)) < (2704793978741534508LL)))), (((((/* implicit */_Bool) arr_4 [(_Bool)1] [0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))))));
        arr_6 [i_1 + 2] = ((/* implicit */short) max((((((/* implicit */_Bool) var_10)) ? (arr_1 [i_1 + 1] [i_1 + 1]) : (arr_1 [i_1 - 1] [i_1]))), (((/* implicit */unsigned int) (~(4))))));
        arr_7 [i_1 + 3] = ((/* implicit */unsigned int) min((max((((((/* implicit */_Bool) 18446744073709551597ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19424))) : (2ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */long long int) var_1)) : (-1LL)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 - 1])) ? (((var_0) - (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) max((var_8), (((/* implicit */unsigned int) var_7))))))))));
    }
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((var_0) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)85))))))))) <= (-1LL)));
    var_15 = (unsigned char)73;
}
