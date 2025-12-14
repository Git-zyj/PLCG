/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45966
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
    var_17 = ((/* implicit */unsigned short) var_15);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] = 18446744073709551615ULL;
        /* LoopNest 3 */
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 10; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_14 [i_0] [(unsigned short)3] [i_1] [i_1 + 1] [i_0] = (_Bool)0;
                        arr_15 [i_0] [i_1 + 2] [i_2 + 1] [i_3] = ((/* implicit */_Bool) (unsigned short)11268);
                        arr_16 [i_0] [(unsigned char)8] [i_0] = ((/* implicit */_Bool) (unsigned char)0);
                    }
                } 
            } 
        } 
    }
    var_18 = ((/* implicit */unsigned short) var_7);
    var_19 = ((/* implicit */unsigned long long int) var_7);
}
