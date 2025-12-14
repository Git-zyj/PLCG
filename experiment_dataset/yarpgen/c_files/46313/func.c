/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46313
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_18 -= ((/* implicit */unsigned char) 0U);
        arr_2 [6] = ((/* implicit */unsigned int) arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        arr_6 [5ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_4 [i_1])), (arr_5 [i_1])))) ? (0) : (((/* implicit */int) arr_4 [i_1]))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) max((arr_7 [i_2] [i_2] [i_2]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_1] [i_2]))))))))));
            var_20 = ((/* implicit */unsigned int) max((var_20), (((((/* implicit */_Bool) (unsigned short)0)) ? (((((/* implicit */_Bool) max((arr_9 [(_Bool)1] [i_2] [i_1]), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [17] [i_2]))) : (arr_3 [i_1]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_1])))))))));
        }
        arr_10 [i_1] &= (!((_Bool)1));
    }
    var_21 = ((/* implicit */_Bool) var_6);
    var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+((~(var_15))))))));
}
