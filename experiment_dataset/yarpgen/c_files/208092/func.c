/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208092
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_2 = 2; i_2 < 7; i_2 += 3) 
            {
                var_20 += ((/* implicit */unsigned short) (~((~(var_4)))));
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        {
                            arr_15 [i_0] [i_1] [i_2 + 2] [i_3] [i_0] [i_0] [i_3] = ((/* implicit */_Bool) (short)2787);
                            arr_16 [i_1] [i_1] = ((/* implicit */short) arr_10 [7U] [(_Bool)1] [(signed char)5] [7U]);
                        }
                    } 
                } 
            }
            var_21 = ((/* implicit */unsigned int) max((var_21), ((~(arr_9 [i_0] [i_0 + 2] [i_0])))));
            var_22 -= ((/* implicit */_Bool) var_3);
        }
        arr_17 [i_0] = ((/* implicit */unsigned char) (+(arr_0 [(unsigned char)0])));
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) arr_8 [(short)2] [0] [(short)2] [(short)2]))));
    }
    var_24 = ((/* implicit */signed char) var_16);
}
