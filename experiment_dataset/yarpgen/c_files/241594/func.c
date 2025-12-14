/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241594
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */long long int) ((var_16) * (((/* implicit */int) var_12))))) * (((287948901175001088LL) / (((/* implicit */long long int) -1179540538)))))) : (((/* implicit */long long int) max((((((/* implicit */int) var_7)) * (((/* implicit */int) var_12)))), (((((/* implicit */int) var_9)) * (((/* implicit */int) var_6)))))))));
    var_18 = ((/* implicit */unsigned char) max(((-((-(var_8))))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_2)), (max((((/* implicit */unsigned short) var_10)), (var_9))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] |= ((/* implicit */signed char) ((min(((+(((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) arr_1 [i_1])))) / (((/* implicit */int) arr_1 [i_1]))));
                arr_5 [i_0] [i_0] = ((/* implicit */short) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_14), (arr_3 [i_0] [i_0]))))) <= ((~(arr_0 [i_0] [i_1]))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
                            {
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0]))) & (arr_6 [i_0])))) ^ ((~(1044921924491017209LL)))));
                                var_20 = ((/* implicit */short) ((((((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1])) + (2147483647))) >> (((((/* implicit */int) arr_10 [i_1] [i_1] [i_3] [i_3])) + (30746)))));
                            }
                            arr_13 [i_0] [i_3] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) arr_3 [i_0] [i_1]))))));
                            arr_14 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]);
                        }
                    } 
                } 
                var_21 += ((/* implicit */short) min((((/* implicit */int) arr_3 [i_0] [i_1])), (((((/* implicit */int) var_5)) ^ (((/* implicit */int) arr_12 [i_1]))))));
                var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((-2660016610183399167LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)177)))))) ? (arr_0 [i_0] [i_1]) : (((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_0] [i_0] [i_0]))) & (arr_0 [i_1] [i_1])))))));
            }
        } 
    } 
}
