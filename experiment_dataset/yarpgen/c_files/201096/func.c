/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201096
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [i_1])) * (((/* implicit */int) arr_5 [i_2] [i_1] [i_0] [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-500))))) : (var_11)));
                    arr_9 [i_1] [i_0] = ((/* implicit */int) (((_Bool)1) ? (-4444564588082531911LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-73)))));
                }
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) (signed char)-73))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))));
                arr_10 [i_1] [i_0] [i_0] = ((/* implicit */_Bool) var_11);
                var_14 *= ((/* implicit */signed char) max((((((/* implicit */_Bool) -4444564588082531911LL)) ? (12810820334658352814ULL) : (((/* implicit */unsigned long long int) 2147483647)))), (((/* implicit */unsigned long long int) min(((-9223372036854775807LL - 1LL)), (-9223372036854775796LL))))));
                arr_11 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 673509346669029714ULL))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_3 = 2; i_3 < 17; i_3 += 1) 
    {
        var_15 = ((/* implicit */_Bool) (short)1860);
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) var_9))));
    }
    var_17 = ((/* implicit */unsigned short) (-((+(-7679092709262608111LL)))));
}
