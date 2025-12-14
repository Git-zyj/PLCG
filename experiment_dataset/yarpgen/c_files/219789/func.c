/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219789
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
    var_17 = min((var_13), (((/* implicit */unsigned short) var_5)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? ((+(0ULL))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_1 [(short)3] [i_0])) : (((/* implicit */int) arr_2 [(signed char)12] [i_0])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : ((~((+(4ULL))))));
        arr_3 [i_0 - 1] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1]))) == (arr_0 [i_0 - 1] [i_0 - 1]))))));
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) ((short) arr_6 [i_1] [6U] [i_1])))));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_0 [i_0 + 1] [i_1 - 1]), (((((/* implicit */_Bool) (signed char)80)) ? (((/* implicit */long long int) ((/* implicit */int) (short)15831))) : (9223372036854775807LL)))))) ? (((/* implicit */int) (short)16)) : (((/* implicit */int) min((arr_2 [i_1 - 2] [i_1 - 1]), (arr_2 [i_1 - 1] [i_1]))))));
                    arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1] = var_16;
                    arr_11 [i_1] [i_1 - 1] [(_Bool)1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_16)))) >> (((((/* implicit */int) max((arr_5 [i_1]), (arr_2 [i_0] [(signed char)4])))) - (4962)))));
                }
            } 
        } 
    }
}
