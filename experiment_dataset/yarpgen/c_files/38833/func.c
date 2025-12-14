/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38833
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
    var_11 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) + (((/* implicit */int) (unsigned char)130))))) ? (((/* implicit */int) (unsigned char)66)) : (((/* implicit */int) min(((short)32748), (((/* implicit */short) (!(var_5)))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] = arr_0 [i_0];
        arr_4 [9ULL] [9ULL] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((arr_2 [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) 8508072061632892314ULL)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) var_6)))))) * (arr_2 [i_0])));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (arr_0 [i_0 + 2]) : (arr_0 [i_0 - 2]))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3665787336U)) ? (93896878937484269LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (max((arr_0 [i_0 + 1]), (((/* implicit */unsigned long long int) arr_1 [i_0])))) : (((((/* implicit */_Bool) (unsigned char)193)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))))));
        var_12 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) (unsigned char)51)) && ((_Bool)1))) ? (max((arr_2 [i_0]), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) / (var_2)))))) << (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)0) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-120)))))))))));
        var_13 = ((/* implicit */unsigned char) (_Bool)1);
    }
    /* vectorizable */
    for (short i_1 = 2; i_1 < 13; i_1 += 3) 
    {
        var_14 ^= ((/* implicit */_Bool) ((arr_8 [i_1 + 1] [i_1]) + (((/* implicit */int) arr_7 [i_1 + 2]))));
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((/* implicit */int) arr_1 [i_1 + 2])) : (((/* implicit */int) (_Bool)1))));
    }
    var_16 = ((/* implicit */long long int) (unsigned short)12422);
}
