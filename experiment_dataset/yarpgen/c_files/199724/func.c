/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199724
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
    var_20 = ((/* implicit */unsigned char) var_0);
    var_21 = var_4;
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) (unsigned char)61);
                                arr_16 [(unsigned char)0] [(_Bool)1] [i_2] [(unsigned char)9] [i_2] = ((/* implicit */_Bool) (unsigned char)61);
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1] = ((/* implicit */unsigned char) (_Bool)1);
                                arr_18 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) (short)9693);
                            }
                        } 
                    } 
                    arr_19 [i_0] [i_2] [(_Bool)1] = ((/* implicit */_Bool) (unsigned char)60);
                    arr_20 [i_2] = ((/* implicit */_Bool) (unsigned char)194);
                    var_23 = ((/* implicit */short) (unsigned char)61);
                }
            } 
        } 
        var_24 = ((/* implicit */short) (unsigned char)61);
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_31 [i_0] [i_5] [(short)11] [i_7] [(unsigned char)5] = ((/* implicit */unsigned char) (short)416);
                                arr_32 [(short)16] [i_5] [(short)16] [i_5] [i_5] [(short)6] = ((/* implicit */short) (unsigned char)170);
                            }
                        } 
                    } 
                    var_25 ^= (unsigned char)219;
                    arr_33 [i_0] [i_0] [i_0] = (unsigned char)195;
                }
            } 
        } 
    }
}
