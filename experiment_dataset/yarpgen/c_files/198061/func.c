/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198061
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
    var_20 = ((/* implicit */signed char) (+(((/* implicit */int) var_14))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_21 = ((/* implicit */int) (+(((2693506347U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (signed char)106)) > (((/* implicit */int) (short)-26345))))) + (max((var_19), (((((/* implicit */int) var_3)) >> (6ULL))))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            var_23 ^= (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))));
                            var_24 = ((/* implicit */short) 18446744073709551615ULL);
                        }
                        arr_13 [i_0] [i_2] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)12375)) ? (-1054456465) : (-171923359)))) ? (var_15) : (max((((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (short)-26345)) + (26353))))), (-829363434)))));
                        arr_14 [i_2] [i_2] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)48725))))), (((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) >> (((((/* implicit */int) (unsigned short)35768)) - (35756)))))));
                        arr_15 [i_2] [0] [i_2] [i_3] [i_2] = ((/* implicit */unsigned int) max(((((_Bool)0) ? (6ULL) : (((/* implicit */unsigned long long int) 332913305)))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_19)) : (6ULL)))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_10) ? (-585837629) : (171923327)))) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (short)21569)) : (((/* implicit */int) (unsigned short)37177)))) : ((-(((/* implicit */int) (unsigned char)81))))));
    }
    var_26 = ((/* implicit */_Bool) var_9);
}
