/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26281
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_11 [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-((+(((/* implicit */int) arr_1 [i_2] [(unsigned short)6])))))))));
                    arr_12 [i_1] [14ULL] [i_1] [i_1] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_4 [i_1 - 1] [i_0]))))));
                }
            } 
        } 
    } 
    var_12 ^= ((/* implicit */int) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) - (8892502093893224567ULL)))))) ? (((((/* implicit */_Bool) -15LL)) ? (-7035469891574865652LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-27001))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((int) var_9)))))));
    /* LoopNest 2 */
    for (unsigned char i_3 = 1; i_3 < 18; i_3 += 2) 
    {
        for (unsigned short i_4 = 3; i_4 < 18; i_4 += 1) 
        {
            {
                var_13 ^= ((/* implicit */long long int) (+(((/* implicit */int) ((short) (!(((/* implicit */_Bool) (signed char)127))))))));
                var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_3]))))))))));
            }
        } 
    } 
}
