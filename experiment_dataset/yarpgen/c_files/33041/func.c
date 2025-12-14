/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33041
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) ((var_1) ^ (var_8)))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_6))) : (((var_1) | (7040879575583581146ULL))))) : (max((min((((/* implicit */unsigned long long int) var_6)), (7040879575583581148ULL))), (((((/* implicit */_Bool) 2147483647)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
    var_16 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) - (((4556632545777637888ULL) | (var_3))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!((_Bool)1)))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_17 = (~(((max((13890111527931913727ULL), (((/* implicit */unsigned long long int) var_0)))) ^ (var_8))));
        var_18 ^= ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) arr_1 [14ULL])), (0ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [10U])) ? (arr_1 [i_0]) : (((/* implicit */int) var_12))))) : (min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (var_2))));
        arr_2 [i_0] = ((((/* implicit */_Bool) ((unsigned long long int) var_14))) ? (3ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((0ULL) < (6843226471105709151ULL)))) / ((~(((/* implicit */int) (_Bool)0))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((arr_1 [i_0]) == (arr_1 [i_0])))), (((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_13)))))))));
    }
    for (int i_1 = 1; i_1 < 21; i_1 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) 3U);
        var_20 ^= var_9;
    }
    var_21 |= ((/* implicit */_Bool) ((unsigned long long int) var_3));
}
