/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39327
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_9 [i_1] [i_1] [(short)17] &= ((/* implicit */signed char) (((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)3)) : (((/* implicit */int) (signed char)102)))))) * (((/* implicit */int) arr_3 [i_0]))));
                    arr_10 [i_0] [i_1] [1U] [i_0] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8651049471885650994ULL)) ? (((/* implicit */int) (short)-9922)) : (((/* implicit */int) (short)-9604))))) ? (((/* implicit */int) (unsigned char)0)) : (-861916480))));
                    var_19 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2455949332479308519ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)14933), (var_5))))) : (((arr_5 [i_0] [i_0] [i_1] [i_2]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(short)17] [i_0] [(short)17] [i_2])))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 706749761)) || (((/* implicit */_Bool) (short)-15))))) : ((-(2147483647)))));
                    arr_11 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) arr_1 [i_0] [i_1]);
                }
            } 
        } 
    } 
    var_20 &= ((/* implicit */unsigned long long int) max((var_18), (var_14)));
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((unsigned long long int) (-2147483647 - 1))))));
}
