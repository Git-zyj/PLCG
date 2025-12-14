/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212608
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
    var_13 = var_3;
    var_14 = ((/* implicit */signed char) ((var_9) != (var_8)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_5)), (arr_0 [i_0])))) ? (((arr_1 [i_0]) & (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)152)) >> (((((/* implicit */int) arr_0 [i_0])) - (106)))))))) : (max((min((((/* implicit */unsigned int) arr_0 [i_0])), (var_7))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)104)))))))));
        var_16 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) arr_1 [i_0])) + (min((((/* implicit */unsigned long long int) var_2)), (var_1))))) < ((((!(((/* implicit */_Bool) (unsigned char)39)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_1 [i_0])) & (9223372036854775807LL)))) : (8639607914649272654ULL)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 4; i_3 < 18; i_3 += 3) 
                {
                    {
                        arr_10 [17ULL] [i_1] [i_1] [0] [(short)9] [i_1] = ((/* implicit */long long int) arr_6 [i_0] [i_1] [i_0]);
                        var_17 = ((/* implicit */short) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))), (((var_5) ? (var_12) : (((/* implicit */long long int) arr_1 [i_1])))))) & (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                        var_18 = ((/* implicit */unsigned int) (signed char)(-127 - 1));
                        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) arr_3 [i_0] [5] [i_0])), (((((/* implicit */_Bool) ((var_12) + (((/* implicit */long long int) arr_9 [i_2] [i_2] [i_2] [i_2]))))) ? (min((var_7), (((/* implicit */unsigned int) (short)11526)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3 + 3] [i_3] [i_3] [i_0] [i_3]))))))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((_Bool) max((var_8), (((/* implicit */long long int) var_2)))))), (((long long int) (~(9223372036854775807LL))))));
    }
}
