/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215515
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                arr_7 [i_0] = ((/* implicit */int) var_17);
                var_19 &= arr_0 [i_1];
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_5 [(unsigned short)16]);
                    arr_11 [i_2] [i_0] = ((/* implicit */short) arr_1 [i_2] [i_2]);
                }
                /* vectorizable */
                for (short i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    arr_15 [i_0] [i_3] = ((/* implicit */long long int) arr_9 [i_1] [i_1 - 1] [i_1]);
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) var_12))));
                    arr_16 [(short)1] [i_3] [i_3] [i_0] = ((/* implicit */int) var_17);
                    var_21 = ((/* implicit */short) min((var_21), (var_16)));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_0))));
    var_23 = ((/* implicit */unsigned long long int) var_18);
    var_24 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_11))));
    var_25 += var_3;
}
