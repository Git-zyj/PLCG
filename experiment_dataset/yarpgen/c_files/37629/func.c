/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37629
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
    var_19 = ((/* implicit */int) var_0);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) /* same iter space */
                    {
                        arr_11 [12U] [i_2 + 2] [i_2 + 4] [i_3] = ((/* implicit */unsigned short) ((17566348643824547774ULL) << (((((((/* implicit */_Bool) var_4)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) - (2908537107U)))));
                        arr_12 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */short) (((_Bool)1) && (((/* implicit */_Bool) 1654059627U))));
                        arr_13 [i_0] [i_0] [i_0] [i_0] |= var_1;
                    }
                    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
                    {
                        var_20 -= ((/* implicit */unsigned int) (!(arr_5 [i_2 + 4])));
                        arr_18 [i_0] [i_0] [i_1 + 1] [i_2] [(unsigned char)1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1] [i_1 + 1] [i_2 + 2])) || (((/* implicit */_Bool) arr_7 [i_0] [i_1 + 1] [i_1 + 1] [i_2 + 4]))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) arr_16 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1]))));
                        arr_22 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_0]);
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (_Bool)1))));
                    }
                }
            } 
        } 
        var_23 |= ((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [(short)1] [i_0] [i_0]);
    }
}
