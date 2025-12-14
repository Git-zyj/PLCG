/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54469
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
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-23527)) ? (max((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3)))), (((/* implicit */int) (short)23527)))) : ((-(((/* implicit */int) var_2))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */short) (~(((/* implicit */int) arr_1 [i_1 - 2] [i_1 + 2]))));
                    var_19 = ((arr_8 [(_Bool)1] [i_1 + 3] [i_1 + 3]) >= (((/* implicit */int) (unsigned char)42)));
                    var_20 -= ((/* implicit */unsigned char) (unsigned short)255);
                }
            } 
        } 
        var_21 *= ((/* implicit */unsigned short) (unsigned char)62);
        arr_9 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)38)) : (((/* implicit */int) (_Bool)0))))) : (arr_7 [(signed char)4] [(signed char)4])));
    }
}
