/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240888
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
    var_13 = ((/* implicit */long long int) var_0);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)25562))) + (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (0ULL)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0]))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_0 [i_0])) | (18446744073709551615ULL)))) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_3)))))))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_14 = min((max((arr_4 [i_0] [i_1]), (((/* implicit */unsigned long long int) arr_1 [i_1])))), (min(((~(6ULL))), (((var_2) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))))));
            var_15 = ((/* implicit */_Bool) (-((+(max((((/* implicit */unsigned long long int) arr_0 [i_1])), (4ULL)))))));
        }
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            /* LoopSeq 3 */
            for (short i_3 = 1; i_3 < 7; i_3 += 2) 
            {
                var_16 = arr_6 [i_0] [i_3];
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_2])) << (((((/* implicit */int) arr_7 [i_0])) - (193)))));
            }
            for (short i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 3) 
                {
                    for (signed char i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((arr_10 [i_6] [i_6] [i_5] [i_5 - 1]) + (arr_10 [i_6] [i_6] [i_6] [i_5 - 1]))))));
                            var_19 ^= ((/* implicit */short) (+(((/* implicit */int) arr_17 [i_6] [(unsigned short)4] [i_5 + 1] [(unsigned short)4] [i_5 + 1]))));
                            var_20 = ((/* implicit */unsigned short) (unsigned char)94);
                            arr_22 [i_5] [i_2] [i_4] [i_4] [i_6] = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)27))));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_2] [i_5 + 2] [i_5 - 1])) ? (((((/* implicit */_Bool) -1564724510741671461LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34357))) : (18446744073709551596ULL))) : (((var_2) | (((/* implicit */unsigned long long int) arr_16 [0LL] [i_4]))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) var_1))));
                var_23 &= ((/* implicit */unsigned char) ((((arr_19 [i_4]) < (arr_13 [i_0]))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) ((18446744073709551609ULL) > (((/* implicit */unsigned long long int) arr_12 [i_0] [4ULL] [i_4]))))))));
            }
            for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                var_24 = ((/* implicit */_Bool) ((unsigned char) arr_7 [i_2]));
                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_7] [i_2])) ? (arr_16 [i_2] [i_0]) : (arr_16 [i_2] [i_7])));
                arr_25 [i_0] [i_0] [i_0] [(unsigned char)6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_0] [10LL] [6ULL] [i_2] [i_2] [i_2] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_7]))) : (arr_21 [i_0] [i_2] [i_7] [i_7] [i_7] [i_2] [i_0])));
                var_26 = ((/* implicit */_Bool) var_2);
            }
            var_27 = ((/* implicit */signed char) var_2);
            /* LoopNest 3 */
            for (long long int i_8 = 2; i_8 < 10; i_8 += 3) 
            {
                for (short i_9 = 0; i_9 < 11; i_9 += 2) 
                {
                    for (long long int i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        {
                            var_28 += ((/* implicit */_Bool) arr_33 [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_8 + 1] [i_8 - 1]);
                            var_29 = ((/* implicit */unsigned char) (+(((((/* implicit */int) var_8)) + (((/* implicit */int) arr_20 [i_10]))))));
                            var_30 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_0] [i_2] [i_8] [i_9] [i_10] [i_10] [i_2]))))) <= (((/* implicit */int) arr_31 [i_9] [i_2] [i_2] [i_9]))));
                            arr_35 [i_0] [i_2] [i_8] [i_8] [(unsigned char)3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551607ULL)) ? (arr_6 [i_9] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)122)))))) != (((((/* implicit */_Bool) arr_33 [i_0] [6LL] [(unsigned char)6] [i_9] [i_9] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7))) : (var_2)))));
                            arr_36 [i_10] [i_8] [i_8] [i_0] = ((/* implicit */unsigned short) (+(2016U)));
                        }
                    } 
                } 
            } 
            var_31 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_33 [i_0] [i_2] [i_2] [i_2] [i_0] [i_2]))));
        }
        for (signed char i_11 = 4; i_11 < 9; i_11 += 4) 
        {
            var_32 &= 67108863LL;
            var_33 = (unsigned short)31178;
            var_34 += ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)34367))) > (arr_0 [i_11 - 2]))))) % ((~(arr_0 [i_11 - 1])))));
            var_35 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) min((arr_15 [i_11 - 3] [i_11]), (((/* implicit */unsigned short) (_Bool)1)))))) / (min((arr_5 [(unsigned short)2] [i_11 + 1] [i_11 - 3]), (arr_5 [i_11 - 4] [i_11 - 2] [i_11 - 2])))));
        }
    }
    /* vectorizable */
    for (unsigned char i_12 = 1; i_12 < 11; i_12 += 2) 
    {
        var_36 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 1653512529842017313LL)) ? (((/* implicit */int) arr_41 [i_12 + 1])) : (((/* implicit */int) arr_40 [i_12])))) ^ (((((/* implicit */int) (unsigned short)7713)) - (((/* implicit */int) arr_39 [(unsigned char)2] [i_12]))))));
        var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) (+(var_9))))));
    }
}
