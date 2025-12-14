/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237195
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
    var_17 = ((/* implicit */_Bool) ((unsigned int) var_4));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (((_Bool)0) ? (12645677886582232876ULL) : (606500984542141100ULL)))) && (((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))))))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_2 [i_0]))))))));
        arr_4 [i_0] = ((((/* implicit */long long int) var_8)) != (arr_1 [i_0] [i_0]));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) == ((((_Bool)1) ? (((/* implicit */int) (unsigned short)65525)) : (var_11)))));
    }
}
