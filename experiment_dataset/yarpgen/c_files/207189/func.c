/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207189
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
    var_20 = ((/* implicit */unsigned int) var_19);
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_12)))) <= (min((((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (4043901155928372106ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2198126385452132136ULL))))))))))));
    var_22 = ((/* implicit */unsigned short) var_4);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_15)) * (((((/* implicit */_Bool) ((arr_1 [i_0]) ^ (((/* implicit */unsigned long long int) arr_3 [i_0]))))) ? (((arr_1 [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)223))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5)))))))));
        arr_5 [(short)18] &= ((/* implicit */unsigned short) (~((~(592343669)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_13 [i_0] = ((/* implicit */signed char) ((((arr_11 [i_1] [i_0] [i_2] [i_2]) <= (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_17))))))) ? (((/* implicit */unsigned long long int) min((arr_10 [i_0] [i_1] [i_1]), (arr_10 [i_2] [i_1] [i_0])))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_1)), (var_5))))) & (max((((/* implicit */unsigned long long int) var_6)), (18446744073709551614ULL)))))));
                    arr_14 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (~(max((arr_10 [i_0] [i_1] [i_2]), (((/* implicit */unsigned int) var_5))))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */signed char) ((var_16) * (min((((/* implicit */unsigned long long int) (+(var_10)))), (var_16)))));
}
