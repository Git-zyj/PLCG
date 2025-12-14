/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219932
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (unsigned char)235))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_21 &= ((/* implicit */unsigned short) (_Bool)1);
                        arr_11 [i_3] [i_0] [i_1] [i_0] [i_0] |= (unsigned char)255;
                        arr_12 [5] [i_3] [i_3] = ((/* implicit */short) 131008LL);
                        var_22 = (unsigned char)30;
                        var_23 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)40)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967295U)))) ? ((((_Bool)1) ? (7594554763559513081ULL) : (1698887749135030556ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)109)))));
                    }
                    var_24 = ((/* implicit */unsigned short) (unsigned char)64);
                }
            } 
        } 
    }
    for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
    {
        arr_17 [i_4] |= (unsigned char)241;
        arr_18 [i_4] = ((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) 114492381U)) ? (-435133189) : (((/* implicit */int) (unsigned char)215)))) : (((/* implicit */int) (unsigned char)211))));
    }
    var_25 = ((/* implicit */unsigned long long int) (unsigned char)18);
    var_26 |= (_Bool)1;
}
