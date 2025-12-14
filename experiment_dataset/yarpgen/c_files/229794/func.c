/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229794
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) arr_2 [i_0]);
        arr_4 [i_0] &= ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_2 [i_0])))) & (((/* implicit */int) max((arr_2 [i_0]), (arr_2 [i_0]))))));
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_12 [i_1] [(signed char)11] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-2192)) ? (((/* implicit */int) (short)-911)) : (((/* implicit */int) (short)911))));
                    var_16 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned int) (short)-933)))))))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned long long int) var_8);
    }
    var_18 = ((/* implicit */short) ((signed char) ((var_5) >> (((((/* implicit */int) (unsigned char)135)) - (90))))));
}
