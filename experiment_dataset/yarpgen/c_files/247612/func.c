/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247612
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
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 += ((/* implicit */_Bool) 611265763U);
                    var_13 = ((/* implicit */unsigned long long int) max(((unsigned short)50675), (((/* implicit */unsigned short) arr_0 [i_0] [i_0]))));
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [10ULL])) / (arr_3 [(unsigned char)20] [(unsigned char)20] [(unsigned char)20])));
                    arr_7 [(unsigned short)2] [i_1] [i_2] [(short)19] = ((/* implicit */unsigned short) var_10);
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) var_5))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) var_8);
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
    {
        for (signed char i_4 = 1; i_4 < 17; i_4 += 4) 
        {
            {
                arr_14 [i_3] = ((/* implicit */unsigned char) (-((~(((/* implicit */int) (unsigned char)134))))));
                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) 4183926102U))));
            }
        } 
    } 
}
