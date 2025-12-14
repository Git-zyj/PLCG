/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48081
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
    var_19 = ((/* implicit */_Bool) var_3);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))))), (((((var_13) & (arr_1 [(short)16]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? ((-(((/* implicit */int) arr_3 [i_0 + 3])))) : (((((/* implicit */int) arr_3 [i_0])) - (((/* implicit */int) var_9))))));
                    arr_9 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32755))))), (((/* implicit */unsigned long long int) arr_3 [i_0])))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_11)))) || (((/* implicit */_Bool) (unsigned char)73)))))));
                    arr_10 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0 + 2])) & (((/* implicit */int) arr_7 [i_0] [i_0 + 1] [i_0]))))) ? (((/* implicit */int) (unsigned char)182)) : (((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1))))) & (((/* implicit */int) arr_6 [1U] [i_0 - 1] [i_2]))))));
                }
            } 
        } 
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) min(((~(((/* implicit */int) arr_6 [i_0 - 1] [i_0 + 2] [i_0])))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_7 [(signed char)17] [i_0 + 3] [i_0 - 1])), (((unsigned short) arr_1 [2ULL]))))))))));
    }
    for (unsigned char i_3 = 4; i_3 < 18; i_3 += 3) 
    {
        var_22 *= ((/* implicit */signed char) min((((/* implicit */unsigned int) ((arr_8 [(unsigned char)14] [i_3 - 1] [i_3] [i_3 - 1]) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 14ULL))))))))), (max((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3 + 1]))) : (var_5))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_11 [18U])) : (((/* implicit */int) (unsigned char)6)))))))));
        var_23 &= ((/* implicit */unsigned int) (unsigned char)182);
    }
    for (int i_4 = 2; i_4 < 15; i_4 += 3) 
    {
        arr_16 [i_4] = ((/* implicit */unsigned int) max((((((((/* implicit */int) (signed char)-8)) * (((/* implicit */int) arr_14 [i_4 + 3] [i_4])))) / (((/* implicit */int) (unsigned char)119)))), (((((/* implicit */int) (signed char)64)) * (((/* implicit */int) (unsigned char)73))))));
        arr_17 [i_4 + 3] = ((/* implicit */short) ((((/* implicit */_Bool) min((var_2), (max((arr_2 [(signed char)14]), (arr_14 [i_4] [i_4])))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4] [i_4 + 3]))) / (min((((/* implicit */unsigned long long int) (unsigned char)182)), (var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_4 + 3]) && (((/* implicit */_Bool) arr_2 [i_4 - 1]))))))));
    }
    var_24 = ((/* implicit */long long int) min((max((var_4), (min(((signed char)-123), ((signed char)-50))))), (var_16)));
    /* LoopNest 3 */
    for (unsigned char i_5 = 2; i_5 < 17; i_5 += 2) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            for (long long int i_7 = 1; i_7 < 18; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        for (short i_9 = 0; i_9 < 21; i_9 += 3) 
                        {
                            {
                                var_25 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_6] [i_6] [i_6]))));
                                var_26 ^= ((/* implicit */signed char) max((((/* implicit */int) ((unsigned char) ((arr_25 [(short)8] [i_6] [i_7 + 3]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_8] [i_9]))))))), (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)-32759)) : (((/* implicit */int) (unsigned char)40))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */int) max((((((((/* implicit */_Bool) var_15)) ? (arr_8 [i_7] [i_6] [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) + (((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_6]))))))), (((/* implicit */unsigned int) arr_29 [i_5 + 2] [i_6] [(unsigned short)20] [i_7 - 1] [(short)5]))));
                    var_28 = ((/* implicit */long long int) (unsigned char)250);
                }
            } 
        } 
    } 
}
