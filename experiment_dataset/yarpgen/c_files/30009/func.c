/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30009
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
    var_19 = ((/* implicit */_Bool) var_3);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) min((arr_1 [i_0 + 2]), (((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */short) (signed char)84)), (var_18))))))))));
        arr_2 [i_0 - 2] [i_0] = min((max((((/* implicit */unsigned long long int) (unsigned short)0)), (12991844076935200045ULL))), (((/* implicit */unsigned long long int) min((arr_0 [i_0 - 1]), (arr_0 [i_0 + 1])))));
        arr_3 [i_0] = ((/* implicit */unsigned int) -490219031);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_9 [i_1] [i_2 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (max((((/* implicit */unsigned long long int) ((short) var_3))), (arr_4 [i_0 + 3] [11LL])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (signed char i_4 = 4; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [11] = ((/* implicit */long long int) ((5836286281605705524ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-23948))))))));
                                arr_16 [i_0] [i_0] [i_1] [i_2] [i_3] [i_0] [(short)8] = ((/* implicit */short) 3810811784U);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */long long int) var_18);
                    arr_17 [i_0 + 2] = ((/* implicit */signed char) 986482042);
                }
            } 
        } 
    }
    for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
    {
        var_22 *= ((/* implicit */unsigned char) (((+(((/* implicit */int) var_9)))) != (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (arr_18 [i_5])))))))));
        arr_22 [i_5] = ((/* implicit */unsigned char) arr_21 [15U]);
    }
}
