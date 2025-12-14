/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52793
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
    var_14 = min((6193479790861292236ULL), (((/* implicit */unsigned long long int) (_Bool)0)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1 + 2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) 4294967295U))));
                    var_15 = ((/* implicit */unsigned long long int) var_6);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (long long int i_4 = 2; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0]))) : (arr_7 [i_0])))))))));
                                arr_15 [i_0] [9LL] [i_0] [i_0] |= (signed char)0;
                                var_17 = ((/* implicit */int) (signed char)127);
                                var_18 = ((/* implicit */signed char) ((min((var_10), (((((/* implicit */_Bool) arr_7 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (13LL))))) ^ (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_2] [i_4]))) : (var_7)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 4; i_6 < 10; i_6 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_18 [i_0] [i_6 - 3] [i_6 - 3] [i_2] [i_6 - 3] [i_0]) * (((long long int) 0ULL))))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) 17542011643145828015ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_19 [i_1] [i_1] [i_1])))))))))));
                                arr_22 [i_0] = ((/* implicit */int) arr_16 [i_0] [(signed char)8] [(signed char)8] [i_5] [i_6 + 1]);
                                arr_23 [i_0] [i_1] [i_2] [3ULL] [i_6 - 1] = ((/* implicit */signed char) var_3);
                                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) != (min((min((var_0), (((/* implicit */long long int) arr_21 [i_0] [i_1 - 1] [i_2] [i_6] [(signed char)9] [(signed char)5])))), (var_6))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
