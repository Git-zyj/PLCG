/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46173
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 13; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */long long int) min((var_12), (5656518002378287318LL)));
                    var_13 = ((/* implicit */unsigned char) (unsigned short)2);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned char) 5656518002378287304LL);
    /* LoopSeq 1 */
    for (long long int i_3 = 4; i_3 < 10; i_3 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) (short)-32767);
        var_16 = ((/* implicit */unsigned long long int) (short)-32767);
        arr_10 [3ULL] [i_3] = ((/* implicit */int) (_Bool)1);
        var_17 = ((/* implicit */short) -6100247862025798942LL);
    }
    var_18 = ((/* implicit */int) (unsigned char)71);
}
