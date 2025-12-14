/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32691
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1 + 1]))) - (524287ULL)));
                var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) (!((!((_Bool)1))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        var_11 = ((/* implicit */unsigned short) arr_8 [i_2] [i_2]);
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 23; i_4 += 1) 
            {
                for (short i_5 = 2; i_5 < 22; i_5 += 1) 
                {
                    {
                        arr_16 [i_4] [i_4] [i_4] [i_5 - 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_3] [i_4 + 1] [i_2] [i_5 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2] [i_2]))) : (arr_12 [i_2] [i_3] [i_4] [i_4])))) & (((unsigned long long int) var_5))));
                        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_4 + 1] [i_4 + 1] [i_5 + 1])) | (((/* implicit */int) var_8)))))));
                    }
                } 
            } 
        } 
    }
}
