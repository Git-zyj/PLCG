/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215108
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_19 *= ((/* implicit */_Bool) ((unsigned short) min((arr_2 [i_0]), (arr_0 [i_0]))));
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)50367)) & (((/* implicit */int) (unsigned short)50373))))) ? (((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) arr_7 [8] [i_1])), (var_1))) | (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [i_0] [13ULL])), ((unsigned short)50367)))))))) : (((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)15198))))) & (10486690814704842389ULL)))));
                        arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) (~(min((((/* implicit */unsigned long long int) ((arr_0 [i_3]) - (((/* implicit */long long int) 123116337U))))), (((unsigned long long int) 2525564384U))))));
                    }
                } 
            } 
        } 
    }
    var_20 = ((/* implicit */int) ((long long int) ((short) var_0)));
    var_21 = var_17;
}
