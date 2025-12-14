/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40164
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
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [12] = arr_1 [i_0];
        /* LoopSeq 3 */
        for (int i_1 = 3; i_1 < 23; i_1 += 1) /* same iter space */
        {
            arr_6 [(short)0] [(short)16] [(short)0] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [19LL]))) ^ (arr_3 [(short)13] [i_0] [i_0]))) < (((/* implicit */long long int) ((/* implicit */int) (short)-1385)))))) : (((/* implicit */int) arr_0 [13] [i_1]))));
            arr_7 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_1 - 2] [15] [15])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))) : (min((((/* implicit */long long int) arr_4 [i_0])), (-4602902377001467672LL)))));
        }
        for (int i_2 = 3; i_2 < 23; i_2 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */long long int) arr_4 [i_0]);
            arr_11 [i_2] [i_2] = (short)3201;
            arr_12 [(short)22] [i_2 + 1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_0 [i_2 - 3] [i_2 - 2]), (arr_0 [i_2 - 1] [i_2 - 2])))) ? (min((min((((/* implicit */long long int) arr_8 [i_0])), (arr_3 [12LL] [12LL] [i_2]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [6])) ? (((/* implicit */int) arr_8 [i_0])) : (arr_4 [20LL])))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (short)-31723))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [18]))) : ((+(6194179076680046209LL)))))));
        }
        for (int i_3 = 3; i_3 < 23; i_3 += 3) 
        {
            var_20 = (+(((/* implicit */int) arr_0 [i_3 + 1] [i_3 + 1])));
            var_21 = ((((arr_14 [i_3] [16LL] [i_0]) / (arr_14 [i_3] [(short)11] [i_3]))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_3 - 3])) >= (((/* implicit */int) arr_1 [i_3 - 1])))))));
        }
    }
    for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
    {
        arr_18 [8] = ((/* implicit */long long int) arr_5 [i_4] [(short)11]);
        var_22 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_9 [i_4])) ? (var_1) : (arr_9 [i_4]))), (((/* implicit */long long int) arr_13 [10LL] [10] [i_4]))));
    }
    var_23 = max((var_1), (((/* implicit */long long int) min((var_13), (((/* implicit */int) var_4))))));
}
