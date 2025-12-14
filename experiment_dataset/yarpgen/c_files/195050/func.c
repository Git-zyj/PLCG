/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195050
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
    var_13 = ((/* implicit */long long int) (unsigned short)25199);
    var_14 = ((/* implicit */long long int) (+(((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_9)))) * (((/* implicit */int) (!(((/* implicit */_Bool) 15143134932729256343ULL)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        var_15 = arr_2 [i_0];
        var_16 *= ((/* implicit */unsigned short) arr_0 [i_0]);
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        var_17 = ((/* implicit */int) (!(((((/* implicit */_Bool) ((short) (unsigned short)39502))) && (((/* implicit */_Bool) ((short) arr_2 [i_1])))))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 2; i_2 < 10; i_2 += 1) 
        {
            for (long long int i_3 = 3; i_3 < 8; i_3 += 4) 
            {
                {
                    arr_11 [8ULL] [8ULL] &= ((/* implicit */long long int) ((var_11) ? ((+(((/* implicit */int) (unsigned short)26035)))) : (((/* implicit */int) (_Bool)0))));
                    arr_12 [i_1] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */int) var_0)), (((((/* implicit */int) ((unsigned short) arr_0 [i_3]))) >> (((((/* implicit */int) (unsigned short)48544)) - (48541)))))));
                    var_18 = ((/* implicit */long long int) (+(max((((/* implicit */unsigned long long int) var_3)), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (15143134932729256343ULL)))))));
                }
            } 
        } 
        arr_13 [i_1] = ((/* implicit */short) arr_6 [i_1] [i_1]);
    }
}
