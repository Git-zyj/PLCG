/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202992
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned int) (short)18589)), (266338304U)));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (unsigned int i_3 = 1; i_3 < 22; i_3 += 2) 
                {
                    {
                        arr_12 [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) ((signed char) var_8))), (arr_11 [12] [i_3] [i_3] [i_3 + 1]))))) <= (((((/* implicit */_Bool) arr_11 [i_3 - 1] [i_3 + 2] [i_3 - 1] [i_3 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3 + 1]))) : (266338304U)))));
                        arr_13 [i_0] [i_1] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) 4028628983U);
                    }
                } 
            } 
        } 
    }
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) + (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) -55439899)) : (266338304U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : ((-(4028628984U)))));
}
