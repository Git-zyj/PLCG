/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195011
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
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) 0ULL))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 7; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_18 = arr_6 [i_0] [i_1];
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned short) min(((-(arr_8 [i_1]))), (max((min((arr_8 [i_1]), (arr_2 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36344))) * (1851202396U))))))));
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((((15ULL) + (((/* implicit */unsigned long long int) arr_3 [i_1 - 1] [i_1 + 4] [i_1 + 3])))) >> (((arr_5 [i_0]) - (1504499488U)))))));
                        var_21 |= ((((/* implicit */_Bool) arr_3 [(unsigned short)10] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((arr_3 [i_0] [i_0] [i_0]) + (arr_3 [i_0] [i_2] [i_3])))) : (arr_6 [i_0] [i_1 + 1]));
                        arr_9 [i_1] [3ULL] [i_1] [i_1] [(unsigned short)0] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551601ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10))) : ((-9223372036854775807LL - 1LL)))))));
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) ((var_12) < (((/* implicit */unsigned long long int) var_7))));
}
