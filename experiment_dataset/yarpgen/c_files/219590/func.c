/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219590
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((var_8) == (((/* implicit */long long int) min((var_0), (var_14)))))))) <= ((-(var_4)))));
    var_17 = ((/* implicit */short) (-(var_4)));
    var_18 -= ((/* implicit */unsigned short) ((unsigned int) max((9223372036854775807LL), (((/* implicit */long long int) (-(((/* implicit */int) var_2))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_19 = ((/* implicit */long long int) max((var_19), ((+(((long long int) min((var_7), (((/* implicit */long long int) (unsigned short)0)))))))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 15; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */long long int) (+(((/* implicit */int) (short)0))));
                    var_21 ^= ((/* implicit */int) ((((/* implicit */_Bool) max(((+((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) ((unsigned int) var_4)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_6 [i_1 - 3] [i_1] [i_1]))))) : (((unsigned long long int) (unsigned short)65532))));
                }
            } 
        } 
    }
    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3U)))))) >= (((long long int) var_3))))), (((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (20ULL)))));
        var_22 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_6 [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) var_1)) : (20ULL)))))));
    }
}
