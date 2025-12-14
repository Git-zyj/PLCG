/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30928
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
    /* LoopSeq 2 */
    for (signed char i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_17 [i_0] = arr_10 [9ULL] [9ULL] [3LL];
                                arr_18 [i_0] [i_0 + 1] [0ULL] [i_0] [i_2 - 1] [6U] [i_4 + 1] = arr_7 [(unsigned short)5] [i_1 + 2] [10] [8ULL];
                                var_19 = ((/* implicit */long long int) arr_5 [i_0 + 1] [2ULL]);
                            }
                        } 
                    } 
                    var_20 ^= ((/* implicit */unsigned int) min((min((var_2), (6212115594823809494ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_9 [i_0 - 1] [i_1 - 1] [(signed char)1])), (arr_12 [i_0] [(_Bool)1] [0ULL] [i_2 + 1] [i_2 + 1]))))));
                }
            } 
        } 
        arr_19 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_0)))) || (((/* implicit */_Bool) min((arr_10 [9U] [9U] [9U]), (((/* implicit */unsigned long long int) arr_16 [i_0 - 2] [i_0 - 1] [i_0] [i_0] [i_0])))))));
        arr_20 [12U] = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) var_1)), (arr_14 [i_0] [i_0] [i_0] [3U] [i_0 - 2] [i_0 - 2] [i_0]))), (((/* implicit */unsigned long long int) 1431261249))));
    }
    for (signed char i_5 = 2; i_5 < 20; i_5 += 1) 
    {
        arr_23 [i_5] [i_5] = arr_22 [i_5 - 2];
        var_21 = ((/* implicit */long long int) var_0);
        arr_24 [i_5] = ((/* implicit */unsigned long long int) arr_22 [i_5 - 1]);
    }
    var_22 = ((/* implicit */unsigned int) (unsigned char)102);
    var_23 &= ((/* implicit */short) ((((/* implicit */long long int) var_16)) != (((((/* implicit */long long int) (~(((/* implicit */int) (short)-13709))))) + (var_1)))));
}
