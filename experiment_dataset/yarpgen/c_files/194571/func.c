/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194571
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
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_10 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)146)) ? (((/* implicit */int) (unsigned char)101)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))));
                var_11 = ((unsigned char) arr_1 [i_0]);
                arr_6 [i_1] [i_1] [i_1] |= ((/* implicit */unsigned char) var_9);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 1; i_2 < 14; i_2 += 1) 
                {
                    var_12 = ((/* implicit */unsigned char) arr_0 [i_0]);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) ((short) (unsigned char)238));
                                arr_13 [i_0] = ((/* implicit */unsigned char) ((short) arr_5 [i_0] [i_3] [i_0]));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_14 = ((unsigned char) var_6);
}
