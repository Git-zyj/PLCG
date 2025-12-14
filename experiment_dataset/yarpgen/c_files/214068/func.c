/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214068
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
    var_20 = ((/* implicit */int) min((min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) * (var_19))), (((/* implicit */unsigned long long int) (unsigned char)69)))), (((/* implicit */unsigned long long int) min((((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), ((signed char)96)))), (((((/* implicit */_Bool) var_14)) ? (var_13) : (((/* implicit */int) var_3)))))))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned int) var_17))))) > (var_8))))) & (((((/* implicit */_Bool) var_14)) ? (var_8) : (((/* implicit */unsigned long long int) max((var_18), (((/* implicit */long long int) (unsigned char)96)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_4 [i_0 + 1] [i_0 + 1] = ((/* implicit */short) ((int) 2245970286471529156ULL));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (unsigned char i_3 = 1; i_3 < 18; i_3 += 3) 
                {
                    {
                        var_22 = ((/* implicit */int) ((((unsigned long long int) arr_0 [i_0 + 1] [i_3 + 3])) >> (((-5296093237588469859LL) + (5296093237588469872LL)))));
                        var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_3 - 1] [i_3 + 1]))));
                        arr_14 [i_3 + 3] [i_2] [i_1] [i_0 + 1] = ((/* implicit */_Bool) var_18);
                        arr_15 [i_2] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_0 + 1] [i_2] [i_3 + 2]))));
                    }
                } 
            } 
        } 
        var_24 = ((int) (signed char)35);
    }
    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) 4544997817965980877ULL))));
}
