/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2950
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
    var_20 ^= ((/* implicit */long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned short) var_11))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)86))) + (768801836U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) ((var_0) > (arr_2 [i_1] [i_2 + 2])))), (max((arr_4 [i_2] [(unsigned char)11]), (((/* implicit */short) (_Bool)1))))))) ? (-2097152) : (((/* implicit */int) ((_Bool) ((short) arr_0 [i_0]))))));
                    var_22 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_5 [i_2] [5ULL] [5ULL] [(_Bool)1])))) * (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_1])) > (((/* implicit */int) arr_4 [i_0] [i_1])))))))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) << (((/* implicit */int) (_Bool)0))))) : (arr_6 [i_2] [(unsigned char)0] [(short)4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                }
            } 
        } 
    } 
}
