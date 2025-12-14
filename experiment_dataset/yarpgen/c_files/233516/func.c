/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233516
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 += (unsigned char)126;
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) var_6))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)34295))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned int) 1185649888);
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 4) 
                {
                    {
                        arr_15 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3 + 2] |= ((/* implicit */unsigned long long int) -1);
                        arr_16 [i_0] [i_1] [i_2] [i_3 - 1] = ((/* implicit */unsigned int) arr_3 [i_0]);
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_1] [i_3] = ((/* implicit */unsigned long long int) -1896960477);
                    }
                } 
            } 
        }
        var_20 += ((/* implicit */unsigned char) ((int) 8283822327330941773LL));
    }
    var_21 &= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 7252319840407080837LL)) ? (-1185649911) : (((/* implicit */int) (_Bool)0)))), (var_6)))) ? (3209929994U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)183)) <= (-1185649908)))))));
}
