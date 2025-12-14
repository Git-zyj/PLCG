/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25630
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
    var_13 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) var_8)))))) > (var_1)))), (((long long int) (unsigned char)115))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 23; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 3) 
                    {
                        var_14 = ((/* implicit */unsigned char) ((var_1) >> (((((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1])) - (64)))));
                        var_15 = ((/* implicit */short) var_9);
                    }
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned char) (_Bool)1);
                        arr_15 [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) arr_13 [i_0] [i_1 + 1]));
                        var_17 -= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_0 [i_2] [i_2]))));
                    }
                    for (unsigned char i_5 = 1; i_5 < 23; i_5 += 2) 
                    {
                        arr_20 [i_5] [(unsigned char)7] [i_5] [i_5 + 1] = ((/* implicit */signed char) ((long long int) max((0U), (((/* implicit */unsigned int) arr_12 [i_0] [i_0 + 1] [i_0] [i_1] [i_2] [i_1])))));
                        var_18 = ((/* implicit */unsigned int) var_10);
                        var_19 |= ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((arr_14 [i_5] [i_1 - 2]) == (arr_14 [i_1 + 1] [i_1 + 1]))))));
                    }
                    var_20 = ((/* implicit */signed char) (_Bool)0);
                    var_21 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_16 [i_0] [i_1] [i_1] [i_2])), (var_6))))) | (var_5)))) || (((/* implicit */_Bool) min(((~(arr_6 [i_2] [i_1 + 1] [i_0]))), (((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_2] [i_0])))))));
                }
            } 
        } 
    } 
}
