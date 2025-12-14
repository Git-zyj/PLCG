/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237031
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
    var_15 = ((/* implicit */int) min((((unsigned long long int) var_12)), (((/* implicit */unsigned long long int) var_6))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    {
                        var_16 = arr_7 [i_0] [i_0];
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)0))))))))));
                        arr_8 [i_0 - 1] = ((/* implicit */signed char) ((int) max((arr_2 [i_0 - 1] [i_0 - 1]), (((/* implicit */unsigned long long int) 2147483630)))));
                    }
                } 
            } 
        } 
        arr_9 [i_0] [i_0] = ((/* implicit */signed char) arr_5 [i_0 - 1] [i_0]);
    }
    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36528))) ^ (((((/* implicit */_Bool) ((arr_12 [i_4]) ^ (((/* implicit */unsigned long long int) var_11))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (537041554U)))) : (((((/* implicit */unsigned long long int) -421660383)) & (arr_5 [i_4] [i_4])))))))));
        arr_14 [i_4] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)122)), (1970892671U)));
        arr_15 [i_4] = ((/* implicit */int) ((short) ((short) arr_6 [i_4])));
    }
}
