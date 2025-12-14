/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21523
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
    var_12 = ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */_Bool) ((((2676663225978128908LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))) + (((/* implicit */long long int) var_10))));
                    var_14 -= ((/* implicit */long long int) arr_5 [i_1] [i_0]);
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        var_15 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_9 [9ULL] [i_1] [i_1] [i_2] [i_3] [i_3])), (var_4)))) + (((arr_2 [i_1]) + (((/* implicit */unsigned long long int) var_8))))))) && (((/* implicit */_Bool) max((arr_3 [i_1] [i_1] [(unsigned char)9]), (((signed char) var_4)))))));
                        var_16 = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_2]);
                        arr_11 [i_3] [i_1] [i_2] [i_3] [i_0] [i_0] = ((/* implicit */unsigned char) arr_3 [i_0] [i_3] [i_2]);
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            arr_16 [(_Bool)1] [i_4] [i_4] [i_2] [6] [i_0] [i_0] = ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_2] [i_4] [i_5] [i_2] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5] [i_2] [i_1] [i_0]))) : (arr_15 [i_0] [i_0] [i_2] [(unsigned char)7] [i_5] [i_4] [i_5]));
                            arr_17 [i_5] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((arr_12 [i_2] [7ULL]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_4] [i_4] [i_2]))));
                            var_17 &= ((/* implicit */long long int) ((((/* implicit */unsigned int) 1484881878)) > (1463712363U)));
                        }
                        for (short i_6 = 0; i_6 < 11; i_6 += 1) 
                        {
                            var_18 = ((/* implicit */signed char) ((arr_13 [10] [i_2] [i_4] [i_6]) * (max((var_5), (((/* implicit */unsigned long long int) var_4))))));
                            var_19 = ((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_1])) ? (var_4) : (var_7)))))));
                            arr_20 [i_4] [i_1] [0LL] [i_4] [7] [i_0] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-57)) + ((+(((/* implicit */int) (signed char)5))))));
                            var_20 = ((/* implicit */unsigned long long int) var_6);
                        }
                        for (long long int i_7 = 1; i_7 < 10; i_7 += 3) 
                        {
                            var_21 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) ((var_0) > (arr_0 [i_7])))), (min((((/* implicit */unsigned long long int) var_3)), (var_5))))), (((unsigned long long int) arr_19 [i_7] [i_7] [i_7] [i_7 - 1]))));
                            var_22 = ((/* implicit */long long int) max((arr_1 [i_1] [i_4]), (((/* implicit */int) ((signed char) max((arr_2 [i_2]), (((/* implicit */unsigned long long int) arr_12 [i_0] [(signed char)8]))))))));
                        }
                        arr_23 [i_4] [i_2] [i_2] [i_1] [i_1] [(_Bool)1] |= ((((unsigned long long int) var_5)) >= (((/* implicit */unsigned long long int) ((arr_12 [i_0] [i_1]) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1)))))))));
                        var_23 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)(-127 - 1))) - (-1724781867)))), ((~(var_10))))) >> (((min(((~(var_3))), (((/* implicit */long long int) ((var_7) + (var_8)))))) - (517662634LL)))));
                    }
                    arr_24 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) arr_9 [i_0] [7ULL] [i_2] [i_2] [i_2] [i_2]);
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned int) ((_Bool) max((((/* implicit */long long int) ((var_1) || (((/* implicit */_Bool) (unsigned short)15))))), (((((/* implicit */_Bool) (short)-18232)) ? (-8127833891245603975LL) : (((/* implicit */long long int) 1484881878)))))));
    var_25 = ((/* implicit */signed char) var_4);
}
