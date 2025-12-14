/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215495
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_2] = 1018769413571938724ULL;
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        arr_10 [i_3] [i_0] &= 1939290772350102939ULL;
                        arr_11 [i_0] [i_1] [i_1] [1U] [i_2] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)2243)) ? (var_14) : (7749250187238654952ULL))) >> (((7749250187238654966ULL) - (7749250187238654929ULL)))));
                    }
                    arr_12 [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) (+(((10697493886470896664ULL) * (((/* implicit */unsigned long long int) 3646870862U))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) (short)2228);
}
