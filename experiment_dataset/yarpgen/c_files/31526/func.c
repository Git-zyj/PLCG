/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31526
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
    for (short i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned int) arr_1 [i_0]);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (arr_7 [i_0 + 1] [i_0 - 1] [i_0 - 2]) : (((/* implicit */unsigned long long int) arr_1 [i_0 - 1])))))));
                    arr_9 [i_0 - 1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((3989583947U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_1])))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                for (unsigned int i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    {
                        arr_19 [i_5] [i_3] [i_5] [i_4] [i_3] [i_0 + 1] = ((/* implicit */_Bool) 3989583947U);
                        arr_20 [i_3] [i_3] [i_3] [i_4] [i_4] [i_5] = (-(var_5));
                        arr_21 [8ULL] |= ((/* implicit */unsigned long long int) 305383329U);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 4) 
    {
        var_13 |= ((/* implicit */long long int) arr_24 [i_6]);
        arr_25 [i_6] = ((/* implicit */_Bool) ((1525839657U) << (((2755534540U) - (2755534540U)))));
    }
    var_14 = ((/* implicit */short) min((var_5), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4)))), (((/* implicit */int) var_10)))))));
}
