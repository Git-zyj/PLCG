/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206103
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
    var_19 = ((/* implicit */unsigned int) var_11);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */short) (-9223372036854775807LL - 1LL));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) 0);
                            arr_12 [i_0] [i_0] [i_1] [(unsigned short)13] [i_3] [i_0] = (unsigned short)31252;
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */int) var_3);
}
