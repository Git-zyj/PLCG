/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22730
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
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 15; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) arr_0 [10] [(unsigned char)7]);
        var_15 = ((/* implicit */unsigned long long int) max((max(((+(((/* implicit */int) (short)16384)))), (((/* implicit */int) arr_1 [i_0 - 2])))), (max((((/* implicit */int) (!(((/* implicit */_Bool) (short)-16360))))), (arr_0 [(unsigned short)15] [(unsigned short)15])))));
    }
    for (short i_1 = 2; i_1 < 15; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 1; i_2 < 15; i_2 += 2) 
        {
            for (signed char i_3 = 4; i_3 < 14; i_3 += 1) 
            {
                {
                    var_16 = ((/* implicit */int) var_9);
                    var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned int) max((((/* implicit */int) arr_7 [i_2] [6] [i_3 + 1])), ((~(((/* implicit */int) var_6))))))) - (((var_0) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-16385)))))));
                }
            } 
        } 
        arr_11 [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) max((((/* implicit */short) arr_3 [i_1 + 1])), ((short)16366))))));
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 1])))))))));
    }
    var_19 = ((/* implicit */_Bool) (short)-16382);
}
