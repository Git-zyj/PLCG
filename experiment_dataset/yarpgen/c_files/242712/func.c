/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242712
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
    var_17 = ((/* implicit */_Bool) ((long long int) max(((+(((/* implicit */int) var_1)))), (((/* implicit */int) ((unsigned char) var_4))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((unsigned int) arr_2 [i_0])) << ((((-(((/* implicit */int) arr_1 [3ULL])))) * (((/* implicit */int) ((((/* implicit */int) arr_3 [10U] [i_0])) >= (((/* implicit */int) arr_1 [i_1]))))))))))));
                var_19 = ((/* implicit */unsigned char) max((((unsigned int) arr_4 [i_0])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_2 [i_0])))))));
                var_20 ^= ((/* implicit */unsigned short) max((((/* implicit */int) max((arr_4 [i_0]), (((/* implicit */short) arr_1 [i_1]))))), (((((((/* implicit */int) arr_2 [i_0])) ^ (((/* implicit */int) arr_2 [i_1])))) << (((((/* implicit */_Bool) (short)-16425)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(unsigned short)10] [i_1]))) : (var_16)))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [5U]))) - (((max((-12LL), (((/* implicit */long long int) (_Bool)1)))) - (((/* implicit */long long int) arr_6 [i_0] [(unsigned char)11] [i_3] [i_4])))))))));
                                var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) min((arr_9 [i_0] [i_1] [(unsigned short)7] [i_3] [i_0] [i_4]), (((/* implicit */short) arr_2 [i_2]))))), (arr_11 [i_3] [i_0] [2U] [i_3] [i_3] [i_3]))))));
                                var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) min((((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_1])), (((((/* implicit */int) arr_8 [i_0] [(short)2] [i_2] [i_3] [4])) << (((((/* implicit */int) arr_1 [(short)5])) - (209)))))))), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) <= (((/* implicit */int) arr_2 [i_3])))))) + (((unsigned int) arr_13 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3] [i_4]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_4))))), (((var_9) ^ (3795005611U)))))), (((((var_3) * (var_3))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)34408), (((/* implicit */unsigned short) var_14))))))))));
    var_25 = ((/* implicit */unsigned char) var_14);
}
