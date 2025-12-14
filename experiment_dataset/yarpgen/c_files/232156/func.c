/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232156
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 &= ((/* implicit */unsigned short) arr_3 [i_2] [i_1]);
                    var_18 &= ((/* implicit */unsigned short) arr_2 [10LL]);
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_3 [i_2] [i_0]), (arr_3 [i_0] [i_1])))) ? (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_6 [i_1] [i_2])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)64679))))))) : (((((long long int) (-9223372036854775807LL - 1LL))) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1])))))));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_5 [i_0] [i_2]), ((-(arr_6 [i_0] [i_1])))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) * (((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (arr_4 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [2ULL]))))))) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)857), (((/* implicit */unsigned short) arr_3 [i_1] [i_1]))))))));
                }
            } 
        } 
    } 
    var_21 &= var_6;
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) 13ULL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (_Bool)0)))))));
}
