/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54299
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_18 *= ((/* implicit */unsigned long long int) ((_Bool) ((unsigned char) (~(arr_8 [(unsigned short)19] [(unsigned short)19] [7ULL] [(unsigned short)19])))));
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1 + 2] [i_1])) ? (arr_3 [i_1 + 1] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1 + 1] [i_1])))))) ? (((/* implicit */int) ((((/* implicit */int) arr_6 [i_1] [i_1 + 1] [12ULL])) == (((/* implicit */int) arr_6 [i_1] [i_1 - 1] [i_1]))))) : (((/* implicit */int) arr_6 [i_1] [i_1 + 2] [10ULL]))));
                    arr_9 [i_1] [19ULL] = ((/* implicit */long long int) (((-(((((/* implicit */_Bool) 20U)) ? (16383U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) / (max((((/* implicit */unsigned int) arr_6 [i_1] [i_1] [i_1])), (arr_5 [i_2])))));
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (((((_Bool)1) ? (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1])))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)128))))))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_3 = 3; i_3 < 18; i_3 += 1) 
    {
        arr_13 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_3 - 1] [i_3 - 2])) ? (((/* implicit */unsigned long long int) var_2)) : (((unsigned long long int) min((((/* implicit */int) arr_11 [i_3] [12LL])), (1073676288))))));
        var_21 += ((/* implicit */long long int) (+((+(-1073676298)))));
        arr_14 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1073676288)) ? (((/* implicit */int) arr_10 [i_3 - 3] [i_3 - 2])) : (-1073676267)))) ? (((/* implicit */long long int) arr_12 [6ULL] [i_3])) : (((((/* implicit */long long int) ((/* implicit */int) arr_10 [20ULL] [i_3]))) ^ (1023LL)))))) ? (arr_12 [i_3 - 2] [i_3]) : (((/* implicit */int) arr_10 [i_3] [(unsigned short)11]))));
        arr_15 [0ULL] [i_3 - 1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_10 [(unsigned char)9] [(unsigned char)9])) ? (-1073676306) : (((/* implicit */int) (unsigned char)227))))))) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) (unsigned char)37))));
    }
    /* vectorizable */
    for (unsigned char i_4 = 2; i_4 < 11; i_4 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_5 = 1; i_5 < 11; i_5 += 2) 
        {
            for (long long int i_6 = 4; i_6 < 12; i_6 += 2) 
            {
                for (unsigned short i_7 = 1; i_7 < 11; i_7 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_10 [i_4] [i_5 + 2])) : (((/* implicit */int) arr_10 [i_4 + 1] [i_5 + 1]))));
                        var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_23 [i_6] [(signed char)2]))) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) arr_12 [i_5 + 2] [i_5 + 1]))));
                        var_24 *= ((/* implicit */unsigned int) ((arr_8 [i_4] [i_5 + 2] [i_4] [4U]) < (arr_8 [i_4 - 1] [i_5] [i_4 - 1] [i_4 - 1])));
                        var_25 = ((/* implicit */unsigned long long int) arr_12 [7] [i_5]);
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_17 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_16 [12] [i_4])))))));
        var_27 ^= ((((/* implicit */int) arr_4 [i_4 + 1] [i_4 + 1])) + (((/* implicit */int) (unsigned char)28)));
    }
    var_28 += 281474976709632ULL;
}
