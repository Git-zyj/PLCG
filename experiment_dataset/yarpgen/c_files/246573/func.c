/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246573
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
    var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) var_7))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) arr_4 [(short)1] [i_1]);
                arr_7 [i_1] [i_1] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [18LL])) || (((/* implicit */_Bool) arr_4 [(signed char)6] [i_1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)157)))))))) ? (((((((/* implicit */_Bool) arr_3 [7ULL])) && (((/* implicit */_Bool) arr_0 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))) : (((((/* implicit */_Bool) arr_1 [i_0 - 4])) ? (arr_5 [(short)6] [i_1] [i_1]) : (arr_5 [i_0] [10] [i_0]))))) : (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_5 [16ULL] [16ULL] [(short)4])) ? (arr_4 [i_1] [i_0]) : (((/* implicit */int) arr_3 [20U]))))))));
            }
        } 
    } 
}
