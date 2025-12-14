/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203883
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
    var_13 *= ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) max(((_Bool)0), (var_3)))))));
    var_14 &= (((_Bool)1) ? (((/* implicit */unsigned long long int) ((int) var_11))) : (var_11));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_2 [i_0 - 2] [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_3 [i_0 - 2] [0U] [i_1 - 1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0 + 2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_1 [i_0 + 2]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_5 [i_0] [i_0]) : (var_0)))) ? (arr_5 [i_0 - 2] [i_1 - 1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_1] [i_0 + 2])) : (((/* implicit */int) (_Bool)1)))))))));
                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-829109879814955809LL)))) ? (((((/* implicit */_Bool) arr_5 [i_0 - 2] [i_1 - 1])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 3]))))) : (((/* implicit */long long int) (+(((/* implicit */int) var_9)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) var_12);
    var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_7))));
}
