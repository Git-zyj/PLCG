/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31406
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
    var_11 = ((/* implicit */_Bool) var_7);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        arr_13 [i_2] = ((/* implicit */unsigned int) ((int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_5 [i_1] [i_1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))))) > (arr_10 [i_2 + 1] [i_0 + 1] [i_0 - 3] [(short)8]))));
                        arr_14 [i_2] [i_1] = ((/* implicit */short) arr_8 [i_0 - 1] [i_1 + 2] [i_2]);
                        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1])) ? ((-(((((/* implicit */_Bool) (signed char)2)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)126))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 31)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (8246337208320LL))))))));
                        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) 0LL))));
                        arr_15 [i_2] [i_1] [i_1] [12] [i_3] [7U] = arr_6 [i_2];
                    }
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 4294967295U)) | (arr_5 [i_0] [i_0])));
                }
            } 
        } 
    } 
}
