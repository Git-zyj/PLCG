/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206679
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
    var_12 *= (signed char)127;
    var_13 = ((/* implicit */short) var_7);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_14 = (~(((/* implicit */int) arr_1 [i_0])));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            var_15 = ((/* implicit */unsigned short) ((long long int) var_1));
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_3 = 1; i_3 < 13; i_3 += 2) 
                {
                    for (unsigned int i_4 = 2; i_4 < 12; i_4 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (((-2147483647 - 1)) == (2147483647))))));
                            arr_11 [(unsigned char)3] [(unsigned char)3] [i_2] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) arr_6 [3] [(short)2] [i_2] [i_3])) / (var_10))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3 - 1])))));
                            arr_12 [i_2] [i_4] [(unsigned char)12] = ((/* implicit */unsigned char) ((((-8527664898006040009LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (signed char)-5)) + (29)))));
                            var_17 = ((((/* implicit */int) ((unsigned short) (short)10363))) & (((/* implicit */int) var_9)));
                            var_18 = ((/* implicit */signed char) 16384U);
                        }
                    } 
                } 
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) arr_2 [i_0] [i_1] [i_0]))));
                var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_4))));
            }
        }
    }
}
