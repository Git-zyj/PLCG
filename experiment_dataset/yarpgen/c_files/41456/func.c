/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41456
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) ((358590562U) == (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
        var_19 = min((358590562U), (358590562U));
        arr_3 [i_0 + 1] = ((/* implicit */unsigned long long int) (~((~(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0 + 1])))))))));
        arr_4 [(signed char)4] = ((/* implicit */short) var_1);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        arr_8 [i_1] = ((358590562U) - (1471906949U));
        var_20 ^= ((/* implicit */short) ((358590577U) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) var_6))))))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 3; i_2 < 15; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                {
                    var_21 = ((/* implicit */short) max((var_21), (((short) ((((/* implicit */_Bool) 28)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_12 [(unsigned char)10] [(short)13] [i_3]))))));
                    var_22 = ((/* implicit */unsigned int) var_16);
                    var_23 = ((/* implicit */int) ((((/* implicit */int) (short)-5079)) < (var_2)));
                    var_24 = ((/* implicit */int) arr_5 [i_3]);
                }
            } 
        } 
    }
    var_25 ^= ((/* implicit */int) ((((/* implicit */_Bool) max((max((3890917989515018575ULL), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */unsigned long long int) max((var_5), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (var_2)))))) : (var_4)));
}
