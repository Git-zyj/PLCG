/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221523
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
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        arr_10 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((long long int) arr_0 [i_2 - 1])) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) max((arr_2 [i_1]), (((/* implicit */signed char) var_0))))), (arr_4 [i_0] [i_2] [i_3])))))));
                        arr_11 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) max((11094484852197237095ULL), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) arr_6 [i_2])))))));
                        var_19 = ((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2 + 2]);
                        arr_12 [i_1] = ((/* implicit */unsigned int) arr_3 [i_3]);
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((7352259221512314521ULL), (((/* implicit */unsigned long long int) arr_2 [i_0])))), (((/* implicit */unsigned long long int) var_11))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (7352259221512314521ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((~(var_6))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_8)), (arr_7 [i_0] [i_0])))) ? (((/* implicit */int) min((arr_6 [i_0]), (arr_6 [i_0])))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_5 [i_0] [i_0] [13LL] [i_0]))))))))))));
        var_21 -= ((/* implicit */long long int) (((!(var_17))) && (((/* implicit */_Bool) min((max((arr_2 [i_0]), (((/* implicit */signed char) arr_1 [i_0] [i_0])))), (((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_3))))))))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        arr_15 [i_4] = ((/* implicit */unsigned short) (_Bool)1);
        arr_16 [i_4] [i_4] = ((/* implicit */unsigned short) var_10);
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) var_11))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (!((_Bool)1))))));
        arr_19 [i_5] = ((/* implicit */_Bool) var_14);
    }
}
