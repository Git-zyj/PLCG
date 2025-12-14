/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23118
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        var_10 = min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))))), (max((((/* implicit */unsigned long long int) arr_2 [i_0 + 1])), (var_0))));
        var_11 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)25751)) : (((/* implicit */int) var_2))))), (var_0))), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) (signed char)2)))) < (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-2601)))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */int) var_4);
        var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_2 [i_1])))) ? ((+(((/* implicit */int) var_7)))) : (((((/* implicit */int) var_4)) / (((/* implicit */int) var_7)))));
        var_13 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)123))));
        arr_8 [(unsigned short)7] [i_1] |= (~((-(((/* implicit */int) var_2)))));
    }
    for (int i_2 = 2; i_2 < 17; i_2 += 4) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2 - 2])) ? (arr_10 [i_2]) : (((/* implicit */unsigned long long int) var_9))))) ? (((((/* implicit */int) var_6)) / (-1479731983))) : (1479731983)))));
        var_14 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)60917))))) == (((((((/* implicit */unsigned long long int) var_9)) >= (var_3))) ? (((/* implicit */unsigned long long int) var_8)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_9 [i_2 + 2] [i_2 - 1])) : (arr_10 [i_2 - 2])))))));
        var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)50)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))));
    }
    var_16 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)60917)) << (((((((/* implicit */_Bool) 1918628313)) ? (16153770977208592493ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) - (16153770977208592482ULL)))))) ? ((~((~(((/* implicit */int) var_6)))))) : (((/* implicit */int) var_2)));
}
