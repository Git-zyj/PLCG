/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38139
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
    var_16 += ((/* implicit */unsigned short) ((_Bool) 3800894704U));
    var_17 ^= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_14)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_8)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(18446744073709551615ULL)))))))));
    var_18 = ((/* implicit */unsigned char) ((_Bool) ((short) (!(((/* implicit */_Bool) 15446174349546166023ULL))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 7; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) arr_1 [i_1]);
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned char) (-(arr_0 [i_0])));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0 + 2])) ? (arr_6 [i_0] [i_0] [i_0 + 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 1])))));
                            arr_10 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_1] |= arr_1 [i_0 + 2];
                            arr_11 [i_0] [i_0] [i_2] [i_3] [i_3] [i_0 - 1] = ((/* implicit */_Bool) ((unsigned short) arr_6 [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_2 - 1]));
                            var_22 += arr_6 [i_0] [i_1] [i_2] [i_4];
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            var_23 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))));
                            arr_15 [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) arr_0 [i_0]));
                        }
                        arr_16 [i_0] [i_3] = ((/* implicit */unsigned long long int) arr_12 [i_0 + 1] [i_0 + 1] [i_1] [i_2 + 1] [i_2] [i_2 + 3]);
                    }
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned int) var_2);
    }
}
