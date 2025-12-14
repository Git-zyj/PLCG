/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234988
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            var_14 &= ((unsigned char) ((((/* implicit */_Bool) (-(3979531760307644536LL)))) || (((/* implicit */_Bool) arr_3 [i_0] [2U] [i_2]))));
                            var_15 |= ((/* implicit */long long int) (+((-(((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (var_6) : (((/* implicit */unsigned long long int) -7875101439927204407LL))))))));
                            var_16 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2551265176U))));
                        }
                        for (unsigned int i_5 = 2; i_5 < 11; i_5 += 2) 
                        {
                            arr_17 [(unsigned char)3] [(unsigned char)4] [i_3] [i_3] = var_10;
                            var_17 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)138)) << (((var_3) + (5762717084869305970LL))))) <= (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) < (((/* implicit */int) (unsigned char)104)))))))), (((((((/* implicit */long long int) var_9)) == (var_4))) ? (((/* implicit */unsigned long long int) arr_11 [i_1 + 1] [i_1] [i_5 + 1] [7ULL])) : ((+(208842759000025632ULL)))))));
                        }
                        var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)114)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                    }
                } 
            } 
        } 
        arr_18 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)97)) : (((/* implicit */int) (!(((/* implicit */_Bool) -3262505236604556647LL)))))));
    }
    var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)104))));
    var_20 = var_3;
}
