/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198430
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
    var_19 = ((/* implicit */unsigned long long int) var_18);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    {
                        arr_9 [i_0] [i_0] [i_1 - 1] [17LL] [i_1] [17LL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_1 + 3] [i_1 + 4] [i_1 - 1])) & (((/* implicit */int) arr_6 [i_1 - 4]))));
                        arr_10 [i_2] [(short)1] [i_2] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)39290)) % (max((((/* implicit */int) var_14)), (var_2)))))) - (max((-9223372036854775794LL), (((/* implicit */long long int) ((signed char) arr_3 [i_0] [i_2] [i_3])))))));
                        arr_11 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((18443029923438962644ULL) & (((/* implicit */unsigned long long int) 1LL))))) || (((/* implicit */_Bool) ((unsigned char) 13U))))))));
                    }
                } 
            } 
        } 
        var_20 -= ((/* implicit */int) 2U);
        var_21 = ((/* implicit */_Bool) arr_2 [i_0]);
    }
    var_22 = ((/* implicit */long long int) 4294967292U);
}
