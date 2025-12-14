/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247778
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((1048575U) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)32)))));
                    arr_10 [i_2] = var_4;
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                {
                    arr_19 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) arr_11 [i_3]);
                    arr_20 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_12 [i_4]))))));
                    arr_21 [i_4] [i_3] = ((/* implicit */signed char) (((+(((/* implicit */int) max(((short)-6683), (((/* implicit */short) (unsigned char)242))))))) | ((((~(((/* implicit */int) (unsigned char)178)))) & ((+(((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
    } 
}
