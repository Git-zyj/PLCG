/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28128
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
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (~((-(((unsigned long long int) (unsigned short)2487)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) arr_7 [i_0]);
                    var_19 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_2] [i_1] [i_0])) * (((/* implicit */int) arr_1 [i_2 + 1] [i_0 - 1]))))) ? (((((/* implicit */_Bool) ((((((/* implicit */int) arr_6 [i_2 - 1] [i_1] [i_0])) + (2147483647))) >> (((arr_7 [i_1]) + (1386704869)))))) ? (36028797018963967ULL) : (((/* implicit */unsigned long long int) -1410701731)))) : (((/* implicit */unsigned long long int) (((+(((/* implicit */int) (_Bool)1)))) >> (((((/* implicit */int) (short)2047)) - (2036))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [i_0] = ((/* implicit */int) arr_9 [i_1] [i_1] [(signed char)5] [i_0] [i_3] [i_2]);
                        var_20 *= ((/* implicit */unsigned int) max(((((_Bool)1) ? (2125423057) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_2 [i_0])) : (63))))), (((/* implicit */int) max((var_12), (arr_6 [i_3] [i_3] [i_0 - 1]))))));
                    }
                    for (int i_4 = 2; i_4 < 8; i_4 += 3) 
                    {
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? ((+(((/* implicit */int) arr_6 [i_4 + 2] [i_2 - 2] [i_0 - 1])))) : ((+(268435455))))))));
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) arr_3 [i_0 - 1] [i_4 + 4] [i_4])), (arr_0 [i_0]))) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                    }
                }
            } 
        } 
    } 
    var_23 *= ((/* implicit */int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (11778459210444590689ULL)))) ? (max((6668284863264960915ULL), (((/* implicit */unsigned long long int) (short)-12178)))) : ((~(var_15))))) % (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
}
