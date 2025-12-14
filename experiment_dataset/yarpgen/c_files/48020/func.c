/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48020
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
    var_15 = ((/* implicit */unsigned short) var_6);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (((((~(var_14))) | (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 + 1]))))) >= (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [18ULL] [i_1 - 1] [i_1 + 3]))))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1 - 1] [i_1 + 2])) ? ((+(((/* implicit */int) arr_2 [i_1] [i_1 + 1] [i_1 - 1])))) : ((+(((/* implicit */int) arr_2 [i_1] [i_1 - 1] [i_1 + 2]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 1; i_2 < 13; i_2 += 2) 
    {
        for (int i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            for (signed char i_4 = 4; i_4 < 11; i_4 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) var_7);
                    arr_15 [i_2 + 1] [11U] [12U] = ((/* implicit */long long int) (+((~(4294967295U)))));
                    arr_16 [i_4 + 3] = ((/* implicit */unsigned char) var_6);
                }
            } 
        } 
    } 
}
