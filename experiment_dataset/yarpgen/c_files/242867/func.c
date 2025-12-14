/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242867
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
    var_15 = ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) (_Bool)1)) : (-1314808853));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 22; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_16 += ((/* implicit */unsigned int) ((long long int) (((!(((/* implicit */_Bool) arr_9 [i_4] [i_1] [i_3] [(signed char)22] [i_2] [i_1] [i_0])))) || ((!(((/* implicit */_Bool) arr_7 [i_0] [22] [i_2 + 1] [(short)10])))))));
                                var_17 = ((/* implicit */_Bool) ((((min(((-(((/* implicit */int) arr_0 [i_2 + 1])))), ((+(arr_9 [i_0] [i_0] [i_1] [i_0] [i_3] [i_4] [i_4]))))) + (2147483647))) >> (((min((min((arr_7 [i_2] [23ULL] [i_1] [i_0]), (((/* implicit */unsigned int) arr_0 [i_3])))), (((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_1] [i_0] [i_0] [i_3] [i_4])))) - (27152U)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 3; i_6 < 22; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_5] [i_0] [i_7] = ((((/* implicit */long long int) ((3611501796U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)229)))))) | (min((arr_5 [i_0] [i_0] [i_6] [(_Bool)1]), (((long long int) arr_3 [(short)1] [i_6])))));
                                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((arr_15 [i_1] [i_1] [i_5] [i_6 + 1] [i_6 - 2]) % (arr_15 [i_1] [i_5] [i_5] [i_6 + 1] [i_7]))) >> (((((unsigned long long int) arr_15 [i_6 + 2] [i_6 - 1] [i_6] [i_6 - 1] [i_6])) - (14734548917449383339ULL))))))));
                                arr_17 [i_0] [i_1] [i_0] [i_1] [(signed char)12] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((arr_5 [i_0] [i_1] [i_6 - 2] [12]) >> (((arr_5 [(_Bool)1] [i_1] [i_6 - 2] [(_Bool)1]) - (6148303235534342868LL))))) == (((/* implicit */long long int) ((arr_9 [i_0] [i_1] [i_5] [i_0] [i_7] [i_0] [3ULL]) % (((((arr_9 [i_0] [i_1] [i_1] [i_0] [15] [i_6] [i_6]) + (2147483647))) >> (((((/* implicit */int) arr_8 [i_0] [i_0] [i_5] [i_6 - 1] [i_7])) - (161))))))))))) : (((/* implicit */unsigned long long int) ((((arr_5 [i_0] [i_1] [i_6 - 2] [12]) >> (((arr_5 [(_Bool)1] [i_1] [i_6 - 2] [(_Bool)1]) - (6148303235534342868LL))))) == (((/* implicit */long long int) ((arr_9 [i_0] [i_1] [i_5] [i_0] [i_7] [i_0] [3ULL]) % (((((((arr_9 [i_0] [i_1] [i_1] [i_0] [15] [i_6] [i_6]) - (2147483647))) + (2147483647))) >> (((((((/* implicit */int) arr_8 [i_0] [i_0] [i_5] [i_6 - 1] [i_7])) - (161))) + (15)))))))))));
                                var_19 *= ((/* implicit */unsigned short) arr_12 [i_0] [i_0]);
                            }
                        } 
                    } 
                } 
                arr_18 [i_0] [i_0] = ((/* implicit */unsigned int) (+(arr_9 [(signed char)9] [i_0] [i_0] [i_0] [i_0] [i_0] [i_1])));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_8 = 0; i_8 < 14; i_8 += 1) 
    {
        for (int i_9 = 0; i_9 < 14; i_9 += 4) 
        {
            for (signed char i_10 = 1; i_10 < 10; i_10 += 4) 
            {
                {
                    var_20 += ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned char)144)), (-1314808853)));
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 14; i_11 += 4) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                arr_34 [i_8] [i_9] [i_10] [i_12] [i_12] = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_32 [i_10 + 2] [i_9] [(unsigned short)2] [5U] [i_12] [i_9])))), (((((/* implicit */_Bool) arr_30 [i_10 + 2] [i_9] [i_9] [i_11] [i_12] [(unsigned short)7])) ? (((/* implicit */int) arr_30 [i_10 + 2] [i_9] [i_10] [i_11] [i_12] [i_10])) : (((/* implicit */int) arr_32 [i_10 + 2] [i_9] [i_10] [i_9] [i_12] [i_8]))))));
                                arr_35 [i_8] [i_8] [i_12] [i_8] [i_8] = ((/* implicit */unsigned short) min((((((_Bool) arr_14 [i_11] [i_9] [(unsigned char)11])) ? (((/* implicit */int) arr_6 [i_8])) : ((~(((/* implicit */int) arr_32 [i_8] [i_9] [i_10] [i_8] [i_12] [i_8])))))), (arr_10 [i_8] [i_9] [i_10] [i_11])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 0; i_13 < 14; i_13 += 2) 
                    {
                        for (unsigned char i_14 = 0; i_14 < 14; i_14 += 3) 
                        {
                            {
                                var_21 &= ((/* implicit */long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_8] [i_9])) ? (((/* implicit */int) arr_3 [i_13] [i_13])) : (((/* implicit */int) arr_21 [i_10 + 2] [i_13])))))))));
                                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) min((2064558442618309764ULL), (1256492752157466181ULL)))) ? (min((((/* implicit */int) arr_4 [i_9] [i_14])), (((arr_6 [i_8]) ? (((/* implicit */int) arr_2 [4U] [i_9] [(short)8])) : (((/* implicit */int) arr_2 [i_14] [i_13] [i_9])))))) : ((+(((((/* implicit */int) arr_27 [(unsigned char)8])) >> (((arr_14 [i_9] [i_9] [i_13]) - (12067690552390607573ULL))))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_15 = 2; i_15 < 13; i_15 += 4) 
                    {
                        for (unsigned int i_16 = 0; i_16 < 14; i_16 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) arr_37 [i_9] [i_8] [i_10 + 1]);
                                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (~(arr_45 [i_8] [i_9] [i_10 - 1] [i_15] [i_16]))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_41 [i_10] [i_10 + 4]))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_17 = 2; i_17 < 9; i_17 += 1) 
    {
        for (signed char i_18 = 0; i_18 < 11; i_18 += 4) 
        {
            {
                arr_52 [i_17] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_17] [i_18]))) - (arr_43 [i_17 + 2]))) - (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_27 [i_18])))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_19 = 0; i_19 < 11; i_19 += 4) 
                {
                    for (unsigned char i_20 = 0; i_20 < 11; i_20 += 3) 
                    {
                        for (long long int i_21 = 0; i_21 < 11; i_21 += 4) 
                        {
                            {
                                arr_61 [i_17] = (~(arr_45 [i_17 - 2] [i_18] [i_19] [5LL] [1LL]));
                                arr_62 [i_21] [i_18] [i_17] [10] [i_21] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_24 [i_17 - 2]), (arr_24 [i_17 + 2])))) ? (((((/* implicit */int) arr_24 [i_17 - 1])) % (((/* implicit */int) arr_24 [i_17 + 2])))) : (((((/* implicit */_Bool) arr_24 [i_17 - 1])) ? (((/* implicit */int) arr_24 [i_17 - 1])) : (((/* implicit */int) arr_24 [i_17 - 2]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
