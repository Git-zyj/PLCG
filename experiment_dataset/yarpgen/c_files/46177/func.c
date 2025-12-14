/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46177
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
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) arr_4 [i_0] [i_0] [i_0] [(unsigned char)6]);
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (~(((arr_1 [i_0 - 2]) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) (unsigned char)127)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        for (long long int i_4 = 4; i_4 < 11; i_4 += 1) 
        {
            {
                var_19 += ((/* implicit */unsigned char) ((unsigned short) arr_9 [i_4] [i_4] [i_3]));
                var_20 = (-((-(arr_5 [i_3] [i_3] [i_3]))));
                var_21 = ((/* implicit */long long int) max((18014398375264256ULL), (((/* implicit */unsigned long long int) arr_6 [i_3]))));
            }
        } 
    } 
}
