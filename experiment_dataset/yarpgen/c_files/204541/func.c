/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204541
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
    var_19 ^= ((/* implicit */signed char) var_11);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (4029316207U)));
                    arr_7 [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1])) != (((/* implicit */int) var_8))))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 1])))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned int) (~(max((var_1), (var_10)))));
                        var_22 = ((/* implicit */unsigned int) (unsigned char)165);
                    }
                    for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
                    {
                        arr_14 [i_2] [i_4] [i_2] [i_0] &= ((/* implicit */signed char) min((((/* implicit */unsigned char) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) >= (var_7))))), (min(((unsigned char)154), ((unsigned char)91)))));
                        var_23 = ((/* implicit */signed char) (unsigned short)11723);
                        arr_15 [i_2] &= ((((/* implicit */_Bool) (unsigned char)96)) ? ((~(((/* implicit */int) arr_11 [i_0 - 1])))) : (((/* implicit */int) max((arr_11 [i_0 - 1]), (arr_11 [i_0 - 1])))));
                        var_24 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(3U)))) >= (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)63839))))) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) != (((/* implicit */int) var_18))))))))));
                    }
                    arr_16 [i_0 - 1] [(short)8] [i_2] = ((/* implicit */short) ((unsigned int) var_6));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (~(var_13))))) ? ((~(((/* implicit */int) (unsigned char)130)))) : (var_10)));
}
