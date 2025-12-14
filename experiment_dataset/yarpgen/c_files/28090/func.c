/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28090
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
    for (int i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)48))) : (-1LL)))) ? (((/* implicit */long long int) var_1)) : (((-8182124646376847711LL) + (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0 - 1])))))));
        var_17 -= ((/* implicit */int) ((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (min((((/* implicit */long long int) var_10)), (8182124646376847699LL)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_18 = ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (8182124646376847710LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        arr_13 [i_4] [i_2] [i_2] [i_2] [i_2] [(short)0] = ((/* implicit */short) ((var_13) ? (((min((var_0), (((/* implicit */unsigned long long int) 363007490U)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3] [i_1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_9 [i_4] [i_2] [i_1])) / (arr_12 [i_3])))) ? (min((-8182124646376847711LL), (((/* implicit */long long int) (unsigned short)1023)))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0))))))))));
                        var_19 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) 0U))));
                    }
                    var_20 = ((/* implicit */int) arr_2 [i_2]);
                    arr_14 [i_1] = ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) ((var_2) && (((/* implicit */_Bool) 234881024))))), (min((((/* implicit */long long int) (short)-7796)), ((-9223372036854775807LL - 1LL)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) -1LL)) ? (2147483647) : (((/* implicit */int) (_Bool)0)))))));
                }
            } 
        } 
        arr_15 [i_1] = ((unsigned short) min(((((-9223372036854775807LL - 1LL)) * (((/* implicit */long long int) ((/* implicit */int) var_13))))), (((/* implicit */long long int) (_Bool)0))));
    }
    var_21 = ((/* implicit */unsigned short) var_15);
}
