/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224029
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
    for (int i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (+((+(((/* implicit */int) arr_0 [i_0 + 3] [i_0 + 3])))))))));
        var_14 = arr_2 [i_0];
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_1 = 3; i_1 < 12; i_1 += 4) 
    {
        arr_5 [(unsigned short)5] [i_1] = ((/* implicit */_Bool) var_8);
        /* LoopNest 3 */
        for (long long int i_2 = 2; i_2 < 13; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                for (unsigned char i_4 = 1; i_4 < 12; i_4 += 4) 
                {
                    {
                        var_15 += arr_3 [(unsigned char)7];
                        var_16 += ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */long long int) -623391190)) : (137438822400LL)));
                        var_17 = ((/* implicit */unsigned char) var_1);
                    }
                } 
            } 
        } 
    }
}
