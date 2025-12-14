/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230318
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
    var_11 = var_8;
    var_12 = ((/* implicit */long long int) var_1);
    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) var_10))));
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) var_1))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) min((((((((/* implicit */int) var_6)) < (((/* implicit */int) (unsigned char)14)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_3 [i_1] [11])))) : (((var_10) % (arr_5 [i_2] [i_1] [i_0 - 1]))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */int) (unsigned char)242)) % (((/* implicit */int) arr_2 [i_2] [i_2] [i_2])))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((arr_0 [i_1] [i_1 + 1]), (arr_0 [i_1] [i_1 + 1])))), (arr_7 [i_0])));
                                arr_13 [i_4] = ((/* implicit */unsigned short) ((((arr_4 [i_0 + 1]) % (arr_4 [i_0 + 1]))) > (((arr_4 [i_0 - 1]) * (((/* implicit */int) var_4))))));
                                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (-(arr_4 [i_0 + 1]))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_0 - 1] [i_1 - 1])) <= (((/* implicit */int) arr_1 [i_1]))))), (max((arr_3 [i_2] [1ULL]), (((/* implicit */unsigned short) arr_11 [i_1 - 1] [i_1] [(_Bool)1] [i_2] [i_2] [i_0 + 1] [i_1 - 1]))))))) ? (((((var_1) ^ (((/* implicit */unsigned int) 1073741824)))) >> (((/* implicit */int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 - 1]))))))));
                }
            } 
        } 
        var_17 = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_2 [(_Bool)1] [12] [(unsigned short)2]))))), (max((((/* implicit */unsigned long long int) (signed char)-27)), (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((arr_7 [i_0]) <= (((/* implicit */unsigned long long int) 777894992U))))))))));
        arr_15 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_8 [i_0 - 1]), (arr_10 [i_0] [i_0 - 1])))) ? (max((var_10), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0 - 1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_8 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
        var_18 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (var_3) : (((/* implicit */int) arr_1 [i_0 + 1]))))));
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 12; i_5 += 2) 
    {
        arr_19 [i_5] = ((/* implicit */unsigned char) arr_3 [i_5] [i_5]);
        arr_20 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) ^ (arr_7 [i_5])))) ? (((/* implicit */long long int) arr_17 [i_5])) : (((arr_18 [i_5] [i_5]) * (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
    }
}
