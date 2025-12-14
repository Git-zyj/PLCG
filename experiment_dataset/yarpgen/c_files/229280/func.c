/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229280
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
    var_20 -= (+(13808723714225906951ULL));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2 - 1] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))) > (((/* implicit */int) ((signed char) arr_5 [i_1] [i_1])))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned char) ((((var_19) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_2]))))) % (((var_14) * (var_0)))));
                        var_22 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2 + 3] [i_2 + 3] [i_2 + 3]))) : (var_9)));
                        var_23 &= ((/* implicit */unsigned short) var_7);
                    }
                }
            } 
        } 
    } 
}
