/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211458
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
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) arr_2 [i_0]);
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (((-(((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) ((signed char) (short)(-32767 - 1))))));
                    arr_10 [i_0] [i_0 + 3] [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) var_5))));
                }
            } 
        } 
    }
    var_15 = ((/* implicit */_Bool) var_0);
    var_16 = ((/* implicit */signed char) var_14);
}
