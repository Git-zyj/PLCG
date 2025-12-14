/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33364
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
    var_17 &= ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned short)61785))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0 - 1] [i_1] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((short) var_1))) ? (((/* implicit */int) arr_11 [i_0 + 1] [i_1] [i_2 + 3] [i_0 - 1] [i_4] [i_4])) : ((+(((/* implicit */int) var_14)))))) / (((/* implicit */int) (unsigned char)165))));
                                var_18 |= ((/* implicit */short) ((((/* implicit */int) arr_11 [i_0 - 1] [i_1] [i_2 - 2] [i_2 + 3] [i_3] [i_4])) | (((/* implicit */int) (unsigned short)255))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)23791)) & ((~(((/* implicit */int) var_3))))));
                }
            } 
        } 
    } 
}
