/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193458
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((-1) <= (((/* implicit */int) (unsigned short)65535)))))) >= (((((/* implicit */unsigned int) arr_2 [0] [12] [i_2])) * (arr_4 [i_1] [0ULL] [i_2])))))) % (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)24)) ^ (((/* implicit */int) (unsigned short)65508))))) && (((((/* implicit */_Bool) arr_7 [(unsigned short)2] [i_1] [12LL] [(unsigned short)14])) && (((/* implicit */_Bool) arr_4 [i_2] [i_1] [i_0]))))))))))));
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((arr_5 [i_0] [i_1] [(unsigned short)14]) & (arr_5 [i_0] [i_1] [i_2]))))));
                    arr_8 [i_0] = ((/* implicit */unsigned short) ((arr_4 [i_0] [(unsigned char)9] [i_0]) * (((arr_4 [i_2] [i_1] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) ((arr_4 [i_0] [i_1] [i_2]) > (arr_1 [i_2] [i_0])))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_10 [i_3]) % (arr_10 [i_3])))) && (((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3]))) <= (arr_10 [i_3])))));
        arr_13 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_3])) >> (((arr_9 [i_3]) - (155236722U)))));
    }
    for (unsigned short i_4 = 3; i_4 < 16; i_4 += 1) 
    {
        var_23 = ((/* implicit */unsigned long long int) ((((((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4]))) - (arr_9 [i_4]))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_4]))))) - (((((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_4])) - (arr_11 [i_4] [5ULL])))) - (((arr_10 [i_4 + 1]) + (((/* implicit */unsigned int) arr_11 [i_4] [i_4]))))))));
        arr_17 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */int) arr_12 [(unsigned short)10])) & (((/* implicit */int) arr_16 [i_4])))) < (((/* implicit */int) ((arr_11 [i_4] [i_4 + 1]) < (((/* implicit */int) arr_15 [i_4])))))))) * (((/* implicit */int) ((((arr_14 [i_4]) - (arr_9 [i_4]))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_4]))))))));
        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((((/* implicit */int) ((arr_9 [i_4]) < (arr_14 [14])))) != (((/* implicit */int) arr_15 [i_4])))) && (((((/* implicit */int) (unsigned short)16)) == (-1))))))));
    }
    for (int i_5 = 0; i_5 < 23; i_5 += 4) 
    {
        var_25 = arr_19 [i_5] [i_5];
        arr_22 [(short)7] = ((/* implicit */unsigned int) arr_21 [i_5] [i_5]);
        var_26 = ((/* implicit */unsigned long long int) arr_19 [i_5] [i_5]);
    }
    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 4) 
    {
        var_27 |= ((/* implicit */unsigned char) arr_24 [i_6] [i_6]);
        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_6])) ^ (arr_19 [i_6] [i_6])))) == (((((/* implicit */unsigned long long int) arr_19 [2U] [i_6])) - (arr_24 [i_6] [i_6])))))) / (((/* implicit */int) arr_18 [i_6])))))));
        arr_25 [1U] = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_24 [16] [i_6]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_6] [i_6])))))) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_11 [i_6] [i_6]) > (((/* implicit */int) arr_20 [i_6] [i_6])))))) > (((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_6]))) ^ (arr_9 [i_6]))))))));
    }
}
