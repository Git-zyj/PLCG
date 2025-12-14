/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31813
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (((((-(var_13))) + (9223372036854775807LL))) << ((((-(var_2))) - (3265722432U)))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_14)), (var_3)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)45139)) ? (arr_1 [i_0]) : (arr_0 [i_0])))) : ((+(6159927069792639571ULL))))));
        var_17 = ((/* implicit */long long int) (~(min((((arr_1 [i_0]) ^ (arr_0 [i_0]))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_8)) : (var_4)))))));
    }
    var_18 = ((/* implicit */unsigned int) var_5);
    var_19 = var_6;
}
