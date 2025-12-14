/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22420
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
    var_13 = ((/* implicit */unsigned int) var_7);
    var_14 = ((/* implicit */long long int) ((unsigned int) var_7));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_7 [i_1] [i_2] = ((/* implicit */short) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) var_4))))))));
                    arr_8 [i_2] [i_1] [i_1] [(signed char)8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_6 [i_1]))))) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) max((arr_4 [i_1]), (arr_4 [i_1]))))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_0 + 1] [12ULL] [i_0]))))) : (((var_1) ? (arr_3 [i_0 - 1] [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_3)))))))));
        arr_10 [i_0] [(short)15] = ((/* implicit */int) max((((/* implicit */unsigned short) ((signed char) arr_1 [i_0 + 2]))), (((unsigned short) ((((/* implicit */_Bool) arr_3 [i_0 + 4] [i_0])) ? (arr_0 [i_0 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)47))))))));
    }
}
