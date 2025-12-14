/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191787
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
    var_16 = ((/* implicit */unsigned char) var_7);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 -= ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
        var_18 -= ((/* implicit */short) arr_0 [(_Bool)0]);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            var_19 -= ((/* implicit */unsigned short) arr_2 [i_0] [i_1 - 1] [i_1 + 1]);
            arr_4 [i_0] = ((/* implicit */unsigned short) arr_2 [i_0] [i_0] [i_1]);
            var_20 = ((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_0] [i_0] [i_0]));
        }
        /* vectorizable */
        for (unsigned short i_2 = 1; i_2 < 14; i_2 += 1) 
        {
            var_21 = ((/* implicit */unsigned short) arr_3 [i_2 + 1] [i_0] [i_2 + 1]);
            /* LoopNest 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned int i_4 = 2; i_4 < 13; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */short) ((unsigned long long int) arr_2 [i_4 + 2] [i_4 + 2] [i_2 + 1]));
                            var_23 = ((/* implicit */unsigned int) arr_2 [i_0] [i_0] [i_0]);
                        }
                    } 
                } 
            } 
        }
    }
    var_24 = ((/* implicit */unsigned short) var_3);
    var_25 = ((/* implicit */_Bool) ((short) var_3));
}
