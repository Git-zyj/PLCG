/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236909
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
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned int) var_5);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) | (((/* implicit */int) var_0))));
                    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) arr_4 [i_0 + 1] [i_1]))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 16; i_3 += 3) 
    {
        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            {
                arr_13 [i_3] [i_3] [i_4] |= ((/* implicit */unsigned long long int) var_10);
                var_15 = ((/* implicit */signed char) ((arr_9 [i_4]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [13U] [13U])))));
            }
        } 
    } 
}
