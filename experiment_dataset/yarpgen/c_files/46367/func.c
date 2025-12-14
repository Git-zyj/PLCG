/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46367
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
    var_10 = ((short) (signed char)66);
    var_11 = max((((/* implicit */long long int) var_5)), (min((((/* implicit */long long int) ((unsigned short) var_3))), (((4294967295LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-67))))))));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        var_12 -= ((/* implicit */unsigned short) (((+((-(var_1))))) % (((/* implicit */long long int) min(((-(((/* implicit */int) (short)7)))), ((~(((/* implicit */int) (short)7)))))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) var_7);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) ((((var_9) + (18210746247478915226ULL))) > (((235997826230636390ULL) - (((/* implicit */unsigned long long int) 3504892186U))))));
        arr_8 [i_1] [i_1] = ((/* implicit */_Bool) var_9);
        var_14 = var_1;
    }
    for (long long int i_2 = 4; i_2 < 16; i_2 += 2) 
    {
        var_15 *= ((/* implicit */long long int) (!(((((/* implicit */int) (signed char)66)) < (((/* implicit */int) ((var_1) == (((/* implicit */long long int) 4194303)))))))));
        arr_12 [i_2] [i_2] = var_0;
        arr_13 [i_2] = ((/* implicit */unsigned char) ((long long int) var_4));
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) 1864084735U))));
    }
}
