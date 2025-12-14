/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44716
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((var_9), (((/* implicit */unsigned short) var_6))))), (arr_7 [i_0] [i_1 - 1] [i_0])))) && (((/* implicit */_Bool) min((((/* implicit */long long int) arr_2 [i_0])), (arr_5 [i_0] [i_1 - 1] [i_0]))))));
                    arr_9 [i_0] = ((((/* implicit */_Bool) 437999307)) ? (4294967232U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4))));
                    var_12 = ((/* implicit */unsigned int) min(((~(arr_5 [i_0] [i_1] [i_0]))), (((/* implicit */long long int) min((((/* implicit */short) (signed char)(-127 - 1))), ((short)-17253))))));
                    var_13 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) var_5)) : (arr_3 [i_0]))));
                }
            } 
        } 
        var_14 = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)4))))), (min((((/* implicit */unsigned int) (unsigned short)56365)), (1534122474U))));
        var_15 *= ((/* implicit */unsigned int) ((unsigned char) ((arr_3 [i_0]) * (arr_0 [i_0]))));
    }
    var_16 = ((/* implicit */unsigned long long int) (unsigned char)252);
    var_17 = ((/* implicit */unsigned long long int) var_0);
}
