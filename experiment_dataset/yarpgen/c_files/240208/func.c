/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240208
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
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */short) (unsigned char)57);
                /* LoopNest 3 */
                for (unsigned char i_2 = 3; i_2 < 12; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_15 -= ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)194)) < (((/* implicit */int) arr_13 [i_0 - 1] [i_0] [(short)2] [i_0 + 3] [i_0 + 1])))))) % (((((arr_0 [i_2 + 1]) + (9223372036854775807LL))) >> (((arr_0 [i_2 - 1]) + (7351816613693282430LL))))));
                                arr_15 [(unsigned char)8] [i_3] [i_3] [2LL] [i_3] [i_1] [i_0] &= ((/* implicit */long long int) max((((/* implicit */int) max((arr_7 [i_2 - 2] [i_0 - 1]), (arr_7 [i_2 - 3] [i_0 - 1])))), (((((/* implicit */_Bool) arr_7 [i_2 - 3] [i_0 - 1])) ? (((/* implicit */int) arr_7 [i_2 - 3] [i_0 - 1])) : (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 1) 
    {
        for (unsigned char i_6 = 2; i_6 < 8; i_6 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (int i_7 = 0; i_7 < 10; i_7 += 2) 
                {
                    arr_23 [i_6] [i_6] [i_6] = ((/* implicit */long long int) min((min((((((/* implicit */int) var_1)) * (((/* implicit */int) (short)-32755)))), (((/* implicit */int) arr_13 [i_6] [i_6 + 1] [i_6] [i_6] [i_6 - 1])))), (((/* implicit */int) ((_Bool) max((var_8), (arr_1 [0LL])))))));
                    var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */int) var_12)), ((~(((/* implicit */int) var_13)))))))));
                    arr_24 [i_5] [i_6] [i_6] [(short)7] = ((/* implicit */int) (+(((((/* implicit */_Bool) (unsigned char)199)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : ((~(arr_0 [i_5])))))));
                }
                /* vectorizable */
                for (unsigned short i_8 = 1; i_8 < 8; i_8 += 4) 
                {
                    var_17 -= ((/* implicit */unsigned char) ((unsigned long long int) (unsigned char)62));
                    arr_27 [i_5] [i_6] = ((/* implicit */int) (_Bool)1);
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [i_6 - 2] [i_8 + 2] [i_8 + 1] [i_8 + 2] [i_5])) / (((/* implicit */int) arr_13 [i_6 + 2] [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_5]))));
                }
                /* LoopSeq 2 */
                for (unsigned char i_9 = 0; i_9 < 10; i_9 += 3) 
                {
                    var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)70)), (max((var_2), (var_3))))))));
                    var_20 += ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((arr_14 [i_5] [(unsigned short)8] [i_9] [i_6 - 1] [(unsigned short)8]) >> (((arr_25 [i_6] [i_6] [i_6 - 2] [i_6 + 1]) + (1729286595)))))));
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 10; i_10 += 4) 
                    {
                        for (long long int i_11 = 0; i_11 < 10; i_11 += 4) 
                        {
                            {
                                var_21 ^= ((/* implicit */int) (-(max((((/* implicit */long long int) arr_18 [i_6 + 1] [i_10])), (-9223372036854775792LL)))));
                                var_22 = ((/* implicit */int) max((var_22), (max((((/* implicit */int) var_3)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_5 [i_5] [i_5] [i_11] [i_5])) : (((/* implicit */int) arr_5 [i_5] [(unsigned char)10] [i_11] [i_9]))))))));
                                var_23 ^= ((/* implicit */short) (-(((((/* implicit */_Bool) arr_28 [i_6 + 2] [i_6 + 2] [i_6 + 2])) ? (max((var_5), (((/* implicit */unsigned int) (short)-29274)))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)211)))))));
                            }
                        } 
                    } 
                }
                for (long long int i_12 = 0; i_12 < 10; i_12 += 4) 
                {
                    var_24 = ((/* implicit */short) ((((((/* implicit */int) min((arr_20 [i_6 - 2] [i_6 - 2] [i_6 + 1]), (arr_20 [i_6 - 2] [i_6 - 1] [i_6 - 1])))) + (2147483647))) << (((((((((/* implicit */_Bool) arr_20 [i_6 + 2] [i_6 + 2] [i_6 - 1])) ? (((/* implicit */int) arr_20 [i_6 + 1] [i_6 - 1] [i_6 + 2])) : (((/* implicit */int) arr_20 [i_6 + 1] [i_6 + 2] [i_6 - 2])))) + (130))) - (15)))));
                    var_25 = ((/* implicit */short) arr_31 [i_6]);
                }
            }
        } 
    } 
    var_26 += ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_13))) != (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)31)) % (((/* implicit */int) var_1))))) ? (var_8) : (((/* implicit */long long int) var_5))))));
    var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)73))));
}
