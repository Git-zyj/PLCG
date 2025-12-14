/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212238
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        var_19 = ((/* implicit */long long int) arr_2 [i_1 + 2]);
                        arr_9 [(signed char)5] [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */signed char) arr_4 [i_0] [i_0] [i_1 - 1]);
                        arr_10 [i_0] = ((/* implicit */unsigned long long int) (signed char)-79);
                        var_20 ^= ((/* implicit */unsigned char) arr_4 [i_0] [i_2] [i_2]);
                        arr_11 [i_3] [i_3] |= ((/* implicit */unsigned short) arr_5 [(unsigned short)20] [i_3] [i_2]);
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */_Bool) arr_5 [(short)16] [i_0] [i_0]);
        var_22 = ((/* implicit */short) ((unsigned char) (signed char)-95));
    }
    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) var_5))));
}
