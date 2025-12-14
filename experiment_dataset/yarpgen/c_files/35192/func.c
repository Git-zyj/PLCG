/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35192
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
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3171305588U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (max((((/* implicit */long long int) (_Bool)1)), (7043094837362839161LL)))))) ? (min((((((/* implicit */_Bool) var_0)) ? (11091577077904630403ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) ((unsigned short) arr_2 [(short)2] [i_0]))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0 - 3]))))))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (!(((((/* implicit */int) arr_1 [i_0 - 1])) > (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))))));
            var_14 += ((/* implicit */unsigned long long int) 7);
        }
        for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            var_15 += ((/* implicit */short) var_8);
            var_16 += ((/* implicit */unsigned int) arr_7 [i_0 - 2] [i_2]);
            var_17 = ((int) arr_4 [i_0 + 1] [i_2]);
            var_18 += ((/* implicit */unsigned short) max((var_6), (((/* implicit */unsigned long long int) ((short) max((var_2), (((/* implicit */int) arr_0 [i_0 + 1]))))))));
            /* LoopNest 2 */
            for (unsigned int i_3 = 2; i_3 < 23; i_3 += 2) 
            {
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    {
                        var_19 += ((/* implicit */short) var_11);
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (max((((/* implicit */long long int) (unsigned char)176)), ((-9223372036854775807LL - 1LL))))))))));
                    }
                } 
            } 
        }
        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_6 [i_0 + 2])) ? (((/* implicit */int) arr_6 [i_0 - 2])) : (((/* implicit */int) arr_6 [15U]))))))));
            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((short) (short)16963))) ? (((((/* implicit */_Bool) ((int) var_6))) ? (((/* implicit */unsigned long long int) ((1715829513) % (((/* implicit */int) arr_6 [i_5]))))) : ((+(var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_0 + 1])) >= (arr_13 [(signed char)16] [i_5] [(unsigned short)16]))))))))));
        }
        var_23 += ((/* implicit */short) ((((/* implicit */_Bool) min((arr_7 [i_0 + 2] [i_0 - 3]), (arr_7 [i_0 - 3] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_10)))) : (((((/* implicit */_Bool) (short)32749)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 - 2] [i_0]))) : (var_6)))));
        var_24 += ((/* implicit */short) ((int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) 536870911)) ^ (arr_2 [(signed char)17] [i_0])))) && (((/* implicit */_Bool) ((unsigned int) (_Bool)1))))));
    }
    var_25 = ((/* implicit */unsigned long long int) min((var_25), (min((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) var_0))) >= (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0)))))))))));
    var_26 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (min((((/* implicit */unsigned int) var_2)), (min((((/* implicit */unsigned int) var_2)), (1736543415U)))))));
}
