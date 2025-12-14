/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5386
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
    var_15 = ((/* implicit */int) var_3);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_16 = ((/* implicit */int) ((arr_0 [i_0] [i_0]) ^ ((~(arr_0 [i_0] [i_0])))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) var_11))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0])))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 11; i_2 += 4) 
            {
                for (long long int i_3 = 1; i_3 < 9; i_3 += 2) 
                {
                    {
                        arr_12 [i_3 + 3] [i_2] = ((/* implicit */_Bool) ((unsigned int) min((max((((/* implicit */int) arr_4 [i_3] [i_3])), (arr_10 [i_0] [i_1 + 1] [8U]))), (max((((/* implicit */int) arr_7 [i_3] [i_2] [i_1])), (arr_5 [i_1] [i_2]))))));
                        arr_13 [i_3] [i_3] [i_3] [i_2] = ((/* implicit */unsigned char) ((max((arr_8 [i_1 - 1]), (((/* implicit */unsigned int) arr_9 [i_0] [i_3 - 1] [i_2 - 1] [i_1 - 1])))) < (arr_0 [i_0] [i_1 - 1])));
                    }
                } 
            } 
        } 
        var_17 = min((((/* implicit */unsigned int) ((arr_10 [i_0] [i_0] [i_0]) / (arr_10 [i_0] [i_0] [i_0])))), (3481624297U));
    }
}
