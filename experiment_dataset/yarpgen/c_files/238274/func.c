/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238274
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */int) arr_1 [i_0]);
        arr_4 [(short)0] = (~(min((((/* implicit */unsigned int) var_11)), (arr_2 [i_0] [i_0]))));
        arr_5 [i_0] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) var_7)))) > (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) arr_0 [i_0] [i_0])))))) : (max((((/* implicit */unsigned long long int) ((arr_1 [i_0]) / (((/* implicit */unsigned int) -22752648))))), (0ULL)))));
        var_18 = ((arr_1 [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) ((max((arr_0 [i_0] [(unsigned short)17]), (arr_1 [i_0]))) < (max((((/* implicit */unsigned int) var_6)), (arr_2 [i_0] [i_0]))))))));
    }
    var_19 ^= ((/* implicit */long long int) var_1);
}
