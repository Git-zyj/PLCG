/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189742
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
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_15 *= ((/* implicit */unsigned int) ((unsigned short) arr_0 [i_0]));
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min((((/* implicit */short) (signed char)-100)), (var_11)))), (((unsigned int) var_1))))) ? (min((arr_0 [i_0]), (arr_0 [i_0]))) : (min((((/* implicit */unsigned int) ((short) 4444836494900828424ULL))), (((0U) / (arr_0 [(_Bool)1])))))));
        var_17 = arr_1 [i_0];
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)171)))))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((_Bool) max((((unsigned char) var_9)), (((/* implicit */unsigned char) arr_3 [8U] [i_0] [i_0]))))))));
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((unsigned char) ((int) min((arr_8 [i_2] [(short)0] [i_0]), (((/* implicit */int) (unsigned short)54330))))))));
                    var_21 *= ((/* implicit */unsigned char) arr_5 [i_1 + 1]);
                }
            } 
        } 
    }
    var_22 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) 2065217726)) : ((-9223372036854775807LL - 1LL))))))) ? ((-9223372036854775807LL - 1LL)) : (var_7)));
}
