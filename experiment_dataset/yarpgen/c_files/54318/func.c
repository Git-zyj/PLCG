/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54318
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
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_8 [i_0 - 2] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) ((((int) (short)3402)) & (((arr_1 [(short)11]) >> (((/* implicit */int) (unsigned char)0)))))))));
                    var_15 = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [(signed char)1]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [2] [i_0] [i_0] [i_0] |= ((/* implicit */signed char) ((((((/* implicit */_Bool) 2200404812U)) && (((/* implicit */_Bool) (short)3402)))) && ((!(((/* implicit */_Bool) min((arr_12 [(unsigned short)18]), (((/* implicit */unsigned long long int) arr_9 [i_4] [i_3])))))))));
                                var_16 = ((/* implicit */signed char) var_13);
                                var_17 = ((/* implicit */signed char) ((((((1841265847) >> (((/* implicit */int) var_3)))) != (((/* implicit */int) arr_7 [i_4] [i_3] [i_0 - 1])))) ? ((((~(arr_10 [i_4] [i_3] [i_2] [i_1]))) % (((/* implicit */long long int) -1)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_2 [(_Bool)1] [i_1]))) ? (arr_0 [i_0]) : (((/* implicit */int) min((var_12), (((/* implicit */short) var_4))))))))));
                                arr_15 [i_4] [i_4] [i_1] [i_1] [i_1] [i_4] [i_0 + 1] = var_1;
                                var_18 |= (signed char)-8;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((((/* implicit */int) var_3)) ^ (((/* implicit */int) (unsigned char)238)));
    var_20 ^= ((/* implicit */unsigned short) min((((((/* implicit */int) var_2)) << ((((+(((/* implicit */int) (short)3402)))) - (3387))))), (min((((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)255)))), ((~(((/* implicit */int) (signed char)-7))))))));
}
