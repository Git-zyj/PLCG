/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/380
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2691344221U)) ? (((/* implicit */int) (short)27375)) : (((/* implicit */int) (short)-22436))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_5);
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(var_6)));
    }
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                {
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) arr_14 [i_1] [4ULL] [i_1])) | (var_11))))) ? (((/* implicit */unsigned long long int) arr_12 [i_1])) : (((((/* implicit */_Bool) (short)22422)) ? (arr_11 [i_1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3])))))));
                    arr_15 [7ULL] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(8337570605018334043ULL)))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_8 [i_1] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((var_8), (var_3)))) && (((/* implicit */_Bool) var_15))))) : (((/* implicit */int) var_5))));
                    arr_16 [i_1] [i_3] [i_3] [(short)18] |= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_14 [(unsigned char)12] [2ULL] [i_2])), (((unsigned long long int) (~(arr_7 [i_3]))))));
                    var_20 = ((/* implicit */unsigned int) ((arr_8 [i_1] [i_1]) % (((/* implicit */int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) var_2)))))));
                }
            } 
        } 
        arr_17 [i_1] = ((/* implicit */unsigned int) (~((~(var_14)))));
    }
}
