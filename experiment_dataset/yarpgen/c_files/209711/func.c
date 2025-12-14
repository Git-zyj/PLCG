/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209711
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
    var_16 ^= ((/* implicit */unsigned char) var_9);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned char) var_6);
            arr_7 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_1])) * ((-(((/* implicit */int) var_11))))));
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_3);
        }
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            for (unsigned int i_3 = 1; i_3 < 23; i_3 += 3) 
            {
                {
                    var_17 = ((/* implicit */int) var_10);
                    arr_13 [i_0] = var_0;
                    arr_14 [i_0] = ((/* implicit */signed char) var_6);
                    var_18 |= ((/* implicit */unsigned short) ((_Bool) arr_2 [i_0 - 1]));
                }
            } 
        } 
    }
}
