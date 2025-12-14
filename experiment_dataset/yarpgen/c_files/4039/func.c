/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4039
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_16 = (~(((unsigned int) arr_1 [i_0])));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (((long long int) (short)7906)) : (var_1)));
            arr_6 [i_1] [i_1] [(unsigned short)11] = ((/* implicit */int) 1089980110U);
            var_18 = ((/* implicit */short) 1969595854U);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            arr_10 [i_0] = ((/* implicit */unsigned int) var_5);
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                for (unsigned short i_4 = 1; i_4 < 13; i_4 += 4) 
                {
                    {
                        var_19 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_3 [i_4 - 1])) : (arr_11 [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 - 1])));
                        var_20 &= ((/* implicit */_Bool) arr_9 [i_0] [i_0]);
                    }
                } 
            } 
        }
        arr_16 [i_0] [i_0] = ((/* implicit */unsigned char) var_15);
    }
    var_21 = ((/* implicit */unsigned int) var_13);
}
