/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206512
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */long long int) arr_1 [i_1] [i_1 - 1]);
                arr_6 [8ULL] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 + 1])) ? (var_10) : (arr_4 [i_1 + 1] [i_1 + 1])))) >= ((~(144115188075855871ULL)))));
                arr_7 [12ULL] [12ULL] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (~(arr_0 [4LL] [i_1])))) && (((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) arr_0 [2LL] [i_1])))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        arr_10 [14ULL] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) 18302628885633695744ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [19LL])))))))), (((((/* implicit */_Bool) arr_9 [i_2])) ? (arr_9 [i_2]) : (arr_9 [i_2])))));
        arr_11 [2ULL] [16LL] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2])) ? (arr_9 [i_2]) : (arr_8 [i_2])))) + (((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */unsigned long long int) arr_8 [i_2])) : ((-(var_5))))));
    }
}
