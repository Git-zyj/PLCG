/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37639
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
    var_17 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23848))) : (13871951000799421489ULL))), (((/* implicit */unsigned long long int) ((unsigned int) var_6))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_3 [(signed char)12] [i_0] &= ((/* implicit */unsigned char) ((((_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [6])) ? (arr_0 [6] [i_0]) : (arr_0 [5] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_0 [i_0] [i_0]))))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (arr_0 [2LL] [(signed char)3])))) - (((((/* implicit */_Bool) arr_2 [10U] [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [(_Bool)1] [i_0])))))));
        var_18 = ((/* implicit */_Bool) max((var_18), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_0] [i_0]))) ? (((((/* implicit */_Bool) arr_0 [(signed char)9] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [(_Bool)1]))) : (arr_0 [i_0] [i_0]))) : (((/* implicit */long long int) ((int) arr_1 [i_0] [i_0]))))))))));
    }
}
