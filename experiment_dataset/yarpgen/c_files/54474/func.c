/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54474
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
    var_18 = max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((((/* implicit */long long int) ((/* implicit */int) var_2))) / (var_10))))), (var_10));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        for (long long int i_4 = 2; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_19 *= ((/* implicit */unsigned short) ((((/* implicit */int) ((min((arr_8 [i_2] [i_0] [i_2 - 2] [(unsigned char)14]), (((/* implicit */unsigned long long int) var_0)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) == (((/* implicit */int) ((arr_6 [(short)2] [i_1] [i_0]) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_9 [i_0 - 2]))))))))));
                                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */int) var_11)) - (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_4 [i_0]))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_7 [i_1] [(short)2] [(short)2] [i_1])), (var_1))))) & (min((arr_2 [i_0]), (((/* implicit */unsigned long long int) var_1)))))) : (arr_6 [i_2] [i_3] [i_3]))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */int) (unsigned short)16698)) < (((/* implicit */int) (unsigned char)4)))))));
                    arr_14 [(signed char)14] [(signed char)14] = ((/* implicit */unsigned char) ((max((((((/* implicit */int) var_11)) * (((/* implicit */int) var_17)))), (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-22)), ((unsigned char)18)))))) >= (((((/* implicit */int) (signed char)0)) - (((/* implicit */int) (short)27519))))));
                    arr_15 [i_0] = max((((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_2])) * (((/* implicit */int) ((var_13) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))), (min((6499836386972482927LL), (((/* implicit */long long int) (unsigned char)250)))));
                }
            } 
        } 
    } 
}
