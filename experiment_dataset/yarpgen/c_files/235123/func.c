/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235123
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] |= 16777216U;
        arr_3 [7U] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) <= (((/* implicit */int) arr_0 [i_0] [i_0]))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? ((~(arr_1 [i_0] [i_0]))) : (arr_1 [i_0] [i_0])));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                {
                    arr_15 [4ULL] = ((/* implicit */unsigned int) max((min((min((arr_1 [8U] [i_1]), (((/* implicit */unsigned long long int) var_7)))), (6109290261118394864ULL))), (0ULL)));
                    arr_16 [i_1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) var_0);
                }
            } 
        } 
        arr_17 [i_1] [i_1] = arr_14 [i_1] [i_1] [i_1] [i_1];
    }
    var_10 = var_7;
    var_11 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_2))) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (0U) : (var_1)))))))));
}
