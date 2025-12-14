/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216540
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
    for (long long int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [i_2] [i_2] [7U] = ((/* implicit */long long int) (_Bool)1);
                    var_15 = ((/* implicit */short) 1450428435);
                    arr_8 [i_2] [i_1 - 1] [(unsigned char)13] [i_2] = ((/* implicit */_Bool) (signed char)127);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) 1450428432);
    var_17 = (_Bool)1;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            for (unsigned short i_5 = 2; i_5 < 14; i_5 += 4) 
            {
                {
                    arr_18 [i_3] [i_4] [6] = ((/* implicit */unsigned int) (signed char)-110);
                    var_18 = (signed char)(-127 - 1);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) 674774195);
}
