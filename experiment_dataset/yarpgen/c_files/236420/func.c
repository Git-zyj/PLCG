/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236420
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned char) min((((unsigned long long int) arr_0 [i_0])), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_11)), (((((/* implicit */_Bool) var_6)) ? (arr_0 [i_0]) : (((/* implicit */long long int) var_5)))))))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 23; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_15 = ((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */int) (_Bool)0)) : (1048575));
                    var_16 = ((/* implicit */short) ((max((1613407388474641380LL), (((/* implicit */long long int) (_Bool)1)))) - (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))));
                    var_17 = ((/* implicit */unsigned int) (((!((_Bool)1))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 3])) ? (((/* implicit */int) arr_4 [i_0] [i_1 - 3])) : (((/* implicit */int) (unsigned char)88)))) : (((((/* implicit */_Bool) (unsigned short)37114)) ? (((/* implicit */int) arr_1 [i_1] [i_1 - 3])) : (((/* implicit */int) arr_1 [i_0] [i_1 - 3]))))));
                }
            } 
        } 
    }
    var_18 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 4829928127449215575ULL)) ? (1501926983232965019LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)96))))));
    var_19 = ((/* implicit */_Bool) var_3);
}
