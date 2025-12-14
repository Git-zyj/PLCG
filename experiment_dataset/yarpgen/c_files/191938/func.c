/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191938
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_15 = arr_2 [i_0];
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) 2035117358)) == (10U)));
        arr_4 [i_0] = ((/* implicit */int) arr_2 [i_0]);
        arr_5 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45584))) <= (((((/* implicit */_Bool) (signed char)127)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))));
        arr_6 [4LL] = ((/* implicit */signed char) ((2610921827U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)176)))));
    }
    /* LoopSeq 1 */
    for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            arr_11 [(short)4] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) 593313977U)))))) | (((/* implicit */int) (unsigned short)25954))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) var_6);
                            arr_21 [i_1] [i_2] [i_3] [i_4] [i_3] = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25950))) & (((unsigned int) var_6)));
                        }
                    } 
                } 
                var_17 |= ((/* implicit */unsigned char) arr_12 [i_1]);
            }
        }
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            var_18 -= (unsigned short)25934;
            arr_24 [i_6] [i_1] [(signed char)1] = ((/* implicit */int) ((((/* implicit */_Bool) 4012150837U)) && (((/* implicit */_Bool) 7723066406591721252LL))));
        }
        var_19 = ((/* implicit */signed char) arr_16 [(signed char)7]);
    }
}
