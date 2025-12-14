/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27204
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1 + 1] [0LL] [i_3] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (arr_1 [i_3]) : (arr_1 [i_2]))) & (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_13)), (((unsigned int) 12095001344303838062ULL)))))));
                                arr_15 [i_1 + 1] [i_0] = (_Bool)1;
                            }
                        } 
                    } 
                } 
                var_14 = ((((/* implicit */long long int) var_7)) | (((((/* implicit */_Bool) arr_8 [i_0] [i_1 + 1])) ? (arr_8 [i_0] [i_1 + 1]) : (arr_8 [i_0] [(unsigned short)9]))));
            }
        } 
    } 
    var_15 = var_11;
}
