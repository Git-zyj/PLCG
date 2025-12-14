/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2057
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
    var_14 = ((/* implicit */unsigned int) var_8);
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) (~(arr_2 [i_0]))));
        arr_4 [i_0] [(unsigned short)8] = ((/* implicit */unsigned char) (short)-7061);
    }
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        var_15 *= ((/* implicit */unsigned int) ((int) ((min((((/* implicit */unsigned long long int) -846273900)), (var_0))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_6 [i_1] [i_1])))))));
        /* LoopNest 2 */
        for (short i_2 = 4; i_2 < 19; i_2 += 3) 
        {
            for (short i_3 = 2; i_3 < 21; i_3 += 2) 
            {
                {
                    arr_14 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(((long long int) arr_7 [i_3 - 1]))));
                    var_16 &= ((/* implicit */unsigned long long int) ((unsigned char) ((((unsigned long long int) var_1)) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_6 [13ULL] [i_2])))))));
                }
            } 
        } 
    }
}
