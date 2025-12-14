/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38730
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
    var_20 = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) (unsigned short)6333)), (((unsigned long long int) -6258050645301080846LL)))), (max((((/* implicit */unsigned long long int) var_9)), (var_15)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -63750932)) ? (0U) : (1222484719U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (1419791357)))) : (((arr_1 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0] [i_0]))))) % (((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_0 + 1] [i_0 - 2]) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 + 3])) ? (((/* implicit */int) var_14)) : (-1419791357)))))))));
        var_21 = min((((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (524160LL)))), (((/* implicit */unsigned int) -1419791357)));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    {
                        var_22 = ((/* implicit */_Bool) arr_3 [i_0] [i_2 - 1] [i_3]);
                        var_23 = ((/* implicit */_Bool) max((((int) arr_5 [i_0 + 2])), (((((/* implicit */_Bool) arr_8 [i_3] [i_2] [i_2] [i_1] [i_0 + 1] [i_0 + 2])) ? (-1419791357) : (((/* implicit */int) arr_5 [i_2 - 1]))))));
                    }
                } 
            } 
        } 
    }
}
