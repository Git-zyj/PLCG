/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54569
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
    for (int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) arr_1 [i_0]))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                for (unsigned short i_3 = 1; i_3 < 12; i_3 += 4) 
                {
                    {
                        arr_13 [i_0] [i_1 - 1] [i_1 - 1] [(unsigned short)3] [i_1] = ((/* implicit */unsigned short) ((short) arr_1 [i_0 + 1]));
                        arr_14 [i_1] [i_1] = ((/* implicit */_Bool) arr_4 [i_1] [i_1]);
                        arr_15 [i_1] [i_2] [i_1 - 1] [i_1] = ((/* implicit */_Bool) ((unsigned char) var_6));
                    }
                } 
            } 
            var_19 &= ((/* implicit */long long int) (_Bool)1);
        }
        arr_16 [i_0] |= ((/* implicit */signed char) (+(var_7)));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) var_7);
        var_21 = ((/* implicit */unsigned long long int) var_10);
    }
    /* vectorizable */
    for (signed char i_5 = 3; i_5 < 23; i_5 += 3) 
    {
        var_22 = ((/* implicit */short) arr_19 [(short)6] [i_5]);
        var_23 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)66)) ? (2147483644) : (120)))));
    }
}
