/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38566
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
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 7; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_7 [i_0] [i_1])), (arr_3 [i_0] [i_2] [i_0])))))))));
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_2))));
                                var_20 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */int) max((arr_2 [(short)6]), (var_3)))) <= (((((arr_3 [(signed char)5] [(signed char)5] [i_2]) + (2147483647))) << (((((arr_5 [i_0]) + (1860790094))) - (10)))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_17))))) ? (((((/* implicit */_Bool) var_15)) ? (arr_4 [4] [i_0] [1U] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0]))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_3])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_5] [i_6] = ((/* implicit */unsigned char) var_9);
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_13 [(unsigned short)4] [i_0 + 1] [(unsigned short)4] [i_2]), (arr_13 [i_0] [i_0 - 1] [(short)6] [i_6])))) >= (((((/* implicit */_Bool) arr_13 [i_0] [i_0 - 1] [i_0] [i_6])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [(unsigned short)3] [i_1] [i_5] [(unsigned char)6])) : (((/* implicit */int) arr_13 [i_0] [i_0 - 1] [i_0 - 1] [(_Bool)1]))))));
                                var_22 = ((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) (short)6050)), (arr_12 [i_0] [i_2] [i_5] [i_6])))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_1 [i_0 - 1])))) ? (((/* implicit */unsigned long long int) (((((~(((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_2])))) + (2147483647))) << (((((((/* implicit */int) ((short) var_7))) + (2023))) - (7)))))) : (((5522696333391789312ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1])))))));
                    var_24 = ((/* implicit */_Bool) ((unsigned int) arr_4 [i_1 - 2] [i_0] [i_0] [i_0]));
                }
            } 
        } 
    } 
    var_25 &= ((short) var_4);
}
