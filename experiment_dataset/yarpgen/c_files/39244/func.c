/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39244
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
    var_10 = ((((/* implicit */_Bool) 2282223161412379784ULL)) ? (((/* implicit */int) (unsigned char)183)) : (((/* implicit */int) (short)20283)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_7 [i_2 + 1] [i_2] [i_2] [i_0] = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) (short)-20282))))) ? (((unsigned int) 16164520912297171831ULL)) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) 2282223161412379784ULL)))))));
                    arr_8 [i_0] [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) ((var_9) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 + 3] [i_2 - 2] [i_2 - 1]))))))));
                }
            } 
        } 
    } 
    var_11 |= ((/* implicit */int) 23ULL);
}
