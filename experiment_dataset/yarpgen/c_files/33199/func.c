/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33199
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
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 8; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_5 [i_2 - 1] [(signed char)0] [9LL]))))))) ? (((/* implicit */unsigned long long int) (~(var_8)))) : ((+(var_12)))));
                                arr_13 [i_0] [(unsigned short)9] [i_2 - 1] [(short)7] [i_0] = ((/* implicit */short) ((unsigned char) ((signed char) (~(arr_1 [i_0] [i_1 - 2])))));
                                var_15 += ((/* implicit */_Bool) arr_1 [(unsigned char)2] [i_1 - 2]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        for (signed char i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            {
                                arr_21 [(signed char)3] [(_Bool)1] [i_5] [i_0] [i_1 + 1] [(unsigned short)7] [(short)5] = ((/* implicit */unsigned short) ((((arr_16 [i_0] [i_6] [i_6] [i_2 - 1] [i_0]) < (arr_16 [i_0] [7] [(_Bool)0] [i_2 + 1] [i_0]))) ? (min((arr_18 [i_1 + 1] [(signed char)5] [i_6] [i_6] [i_6] [9U]), (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_1 - 1] [i_6] [(short)7] [i_6] [9U] [i_6])) ? (((/* implicit */int) arr_4 [i_1 - 1])) : (((/* implicit */int) var_11)))))));
                                var_16 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(min((18446744073709551609ULL), (((/* implicit */unsigned long long int) (signed char)-106))))))) ? (min((((/* implicit */int) var_1)), (((arr_2 [i_0] [i_5]) ? (((/* implicit */int) arr_15 [(unsigned short)1] [i_5] [(_Bool)1] [i_2 + 1] [i_1 - 2] [i_0])) : (arr_6 [7LL] [i_2 + 1] [(_Bool)1]))))) : (((/* implicit */int) var_3))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        var_17 = ((/* implicit */short) (-(((((/* implicit */_Bool) (short)-30207)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) var_2)))))))));
                        var_18 = ((/* implicit */unsigned int) var_0);
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_7))) - (var_6))) / (((/* implicit */long long int) (+(var_8))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_0]))))) : ((-(((unsigned long long int) arr_9 [(signed char)5] [(_Bool)1] [i_2 - 1]))))));
                    }
                    for (short i_8 = 1; i_8 < 8; i_8 += 2) 
                    {
                        var_20 = ((/* implicit */short) ((_Bool) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_11))))))));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) < (((/* implicit */int) ((_Bool) (signed char)15)))));
                        arr_27 [0] [(signed char)8] [i_2 + 1] [i_0] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_13)))))));
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_1 - 1] [i_1 + 1] [(unsigned char)8] [i_8 + 2])) ? (max((arr_24 [i_1 + 1]), (((/* implicit */unsigned long long int) arr_25 [i_8 + 1] [(signed char)4] [4LL] [i_8 + 3])))) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_12)))) ? (var_10) : ((~(((/* implicit */int) (signed char)122)))))))));
                    }
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(var_10)))))))));
                    var_24 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0] [i_1 - 2] [i_2 + 1] [(unsigned char)0] [(short)4] [6U]))))) ? (((((/* implicit */_Bool) 381818937)) ? (var_0) : (var_0))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)52539)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_9 = 4; i_9 < 19; i_9 += 2) 
    {
        for (unsigned short i_10 = 0; i_10 < 21; i_10 += 1) 
        {
            for (signed char i_11 = 0; i_11 < 21; i_11 += 1) 
            {
                {
                    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) 921804787604390289LL)) ? (((/* implicit */int) arr_29 [i_9 + 1] [i_9 - 3])) : (-1451817866))), (-2147483631))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_12 = 0; i_12 < 21; i_12 += 3) 
                    {
                        arr_38 [(signed char)18] [i_10] [i_10] [9] [i_10] = ((/* implicit */signed char) ((short) (-(((/* implicit */int) (_Bool)1)))));
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1))))))))));
                        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) arr_36 [3LL] [i_11] [i_10] [i_9 - 2]))));
                        var_28 = ((/* implicit */short) (+((+(((/* implicit */int) ((_Bool) (_Bool)1)))))));
                    }
                    for (int i_13 = 0; i_13 < 21; i_13 += 4) 
                    {
                        var_29 = ((/* implicit */long long int) ((signed char) var_11));
                        var_30 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (-(((/* implicit */int) arr_36 [i_9 - 4] [i_9 - 1] [i_9 + 2] [i_9 - 3]))))), (arr_34 [i_9 + 2] [7LL] [i_10] [i_13])));
                        arr_41 [i_9] &= (-(((/* implicit */int) ((short) 4294967288U))));
                    }
                    var_31 |= ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */int) (short)74)), (((((/* implicit */_Bool) arr_31 [i_9 - 2])) ? (((/* implicit */int) arr_29 [i_10] [i_9 - 1])) : (((/* implicit */int) (unsigned char)140)))))))));
                }
            } 
        } 
    } 
}
