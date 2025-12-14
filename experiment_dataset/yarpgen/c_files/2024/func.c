/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2024
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
    var_19 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_16) ? (var_10) : (var_15)))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (max((((/* implicit */unsigned int) ((_Bool) var_3))), (var_1)))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        arr_11 [i_1] [i_2] = ((/* implicit */_Bool) ((unsigned int) arr_6 [i_0] [(signed char)9] [i_0]));
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (15433550007941262353ULL)))) ? ((-(var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 11; i_4 += 4) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 13; i_5 += 2) 
                        {
                            {
                                var_21 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) var_18))));
                                arr_16 [i_5] [i_5] [(_Bool)1] [i_4] [(unsigned short)2] [i_2] = (!(((/* implicit */_Bool) ((int) arr_7 [i_4 + 1] [i_4 + 1] [i_4] [i_0]))));
                                arr_17 [i_2] [i_2] [i_2] [i_1] [i_5] [i_2] [i_1] = var_8;
                                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_12 [i_4] [i_4 - 1] [i_4] [i_4 + 1])), (arr_13 [i_4] [i_4 + 1] [i_4] [i_4 + 1] [i_4 - 1])))) ? (min((arr_10 [i_4] [i_4 + 1] [i_4 + 2] [i_4 - 1]), (arr_10 [i_4] [i_4 + 1] [i_4] [i_4 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-23))))))));
                                arr_18 [i_0] [i_0] [i_0] [i_0] [3] [i_0] [i_2] = ((/* implicit */long long int) (~(arr_1 [i_0])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_16)), (((unsigned int) (+(((/* implicit */int) var_2)))))));
}
