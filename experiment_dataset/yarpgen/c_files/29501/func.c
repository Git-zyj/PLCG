/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29501
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
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((arr_0 [i_0 + 1]) > (((arr_0 [i_0]) | (var_13))))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(14418687819701919412ULL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 + 1])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */long long int) (-(var_12)))) : (((((/* implicit */_Bool) var_9)) ? (arr_0 [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))));
        var_15 |= ((/* implicit */unsigned short) min((max(((+(((/* implicit */int) var_11)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 - 2]))))))), (((/* implicit */int) var_9))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 2) 
    {
        var_16 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_6 [i_1 + 1])) ? (arr_6 [i_1 - 2]) : (arr_6 [i_1 + 1]))) << (((min((arr_6 [i_1]), (((/* implicit */long long int) arr_5 [5ULL])))) - (49LL)))));
        var_17 = ((/* implicit */short) arr_5 [i_1]);
        var_18 = ((/* implicit */unsigned short) arr_5 [i_1 + 3]);
    }
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)16066)) ? (((((/* implicit */_Bool) 4028056254007632203ULL)) ? (((/* implicit */unsigned int) 2147483647)) : (511U))) : (((/* implicit */unsigned int) 2147483647))));
    var_20 = ((/* implicit */short) max((var_20), (var_9)));
}
