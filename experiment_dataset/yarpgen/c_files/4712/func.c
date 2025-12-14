/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4712
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
    var_18 = ((/* implicit */_Bool) ((short) var_4));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [(short)0] = ((/* implicit */unsigned long long int) (+((-(min((9139831889383026938LL), (((/* implicit */long long int) arr_0 [i_0]))))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_1])))))));
            arr_5 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)20635)) - (((/* implicit */int) (short)-7911))))) != (((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_1]) : (arr_4 [i_1])))));
            var_20 = ((/* implicit */short) (-(((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((((/* implicit */int) var_14)) ^ (((/* implicit */int) arr_0 [i_1])))) : (((/* implicit */int) var_3))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_2 = 3; i_2 < 19; i_2 += 2) 
        {
            var_21 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_2 - 1])) ? (((((/* implicit */_Bool) var_2)) ? (arr_4 [(unsigned char)10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4126)))));
            arr_8 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_1 [i_2 - 2])) <= (var_15)));
            /* LoopSeq 4 */
            for (int i_3 = 3; i_3 < 17; i_3 += 3) 
            {
                arr_13 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1759092855533130995ULL)) ? ((~(var_15))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)4096)) >> (((((/* implicit */int) var_9)) - (4669))))))));
                arr_14 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */int) ((unsigned short) (short)27088));
            }
            for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                arr_17 [i_0] [i_2] [i_2] [i_4] = ((/* implicit */short) ((int) arr_9 [i_4] [i_4] [i_2 - 3]));
                /* LoopSeq 4 */
                for (int i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_5] [6LL] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (8422030283310750837LL))))));
                    arr_20 [i_2] [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((arr_1 [i_0]) >> (((((/* implicit */int) arr_9 [i_2 + 1] [i_2] [i_2])) + (24920)))));
                }
                for (unsigned char i_6 = 2; i_6 < 17; i_6 += 2) /* same iter space */
                {
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (~(arr_10 [i_6]))))));
                    var_24 += ((/* implicit */int) (~(((((/* implicit */_Bool) arr_9 [i_4] [i_4] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [(unsigned short)3] [i_6] [i_6]))) : (arr_4 [i_4])))));
                }
                for (unsigned char i_7 = 2; i_7 < 17; i_7 += 2) /* same iter space */
                {
                    var_25 -= ((/* implicit */short) ((arr_11 [i_7] [16] [i_7]) + (arr_11 [i_4] [i_2 - 3] [i_2 - 2])));
                    var_26 += ((/* implicit */unsigned long long int) arr_12 [8ULL]);
                    var_27 *= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)27103))))) ? (arr_3 [i_7 - 1] [i_2 - 3]) : (((/* implicit */unsigned long long int) (-(-1460592375))))));
                    var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) 10530109249752566451ULL))));
                }
                for (unsigned short i_8 = 0; i_8 < 20; i_8 += 2) 
                {
                    var_29 -= (+(((/* implicit */int) arr_25 [i_2] [i_2] [i_2 - 2] [i_2] [i_2 - 3] [(short)15])));
                    arr_27 [i_0] [i_2 - 1] [i_2] [i_8] [i_0] [i_2] = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))) : ((~(10090839653199639228ULL))));
                    arr_28 [i_8] [i_8] [i_8] [i_0] |= ((/* implicit */unsigned long long int) ((int) arr_16 [i_2 - 2] [i_2 - 1] [i_8] [i_2]));
                    arr_29 [(unsigned short)10] [i_2] [15ULL] [i_2] [i_2] [15ULL] = ((((/* implicit */_Bool) (unsigned char)198)) ? (((/* implicit */int) (short)4126)) : (((/* implicit */int) (unsigned char)70)));
                }
                arr_30 [i_2] = ((/* implicit */int) ((unsigned long long int) (~((-2147483647 - 1)))));
                /* LoopSeq 4 */
                for (int i_9 = 0; i_9 < 20; i_9 += 3) 
                {
                    arr_33 [i_4] [19] [i_4] [i_2] = ((unsigned long long int) var_4);
                    var_30 -= ((/* implicit */int) ((arr_10 [i_2 + 1]) <= (arr_10 [i_2 - 1])));
                    var_31 = (((+(1460592376))) + (((/* implicit */int) arr_12 [i_2 + 1])));
                }
                for (short i_10 = 0; i_10 < 20; i_10 += 4) 
                {
                    arr_36 [i_2] [i_2] [i_4] [i_4] [i_10] [i_10] = ((unsigned int) arr_11 [i_2] [i_2] [i_2 - 2]);
                    var_32 += arr_7 [i_2 - 3] [i_2 - 1];
                    arr_37 [i_0] [i_2] [(short)13] = ((/* implicit */short) ((((/* implicit */int) arr_16 [i_2 - 3] [(unsigned char)8] [i_2] [i_10])) < (((/* implicit */int) (unsigned char)255))));
                }
                for (long long int i_11 = 3; i_11 < 19; i_11 += 4) 
                {
                    arr_42 [(short)17] [(signed char)10] [i_4] [i_4] [i_2] [i_2] = ((/* implicit */short) (~(((/* implicit */int) (short)-32741))));
                    arr_43 [i_11 - 3] [i_11] [i_11 - 2] [i_2] = (short)127;
                    var_33 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)19998)) || (((/* implicit */_Bool) arr_16 [i_11 - 2] [i_11] [i_2] [i_11 - 1]))));
                }
                for (int i_12 = 0; i_12 < 20; i_12 += 2) 
                {
                    /* LoopSeq 1 */
                    for (int i_13 = 0; i_13 < 20; i_13 += 3) 
                    {
                        arr_49 [i_12] [i_2] [i_12] = ((/* implicit */unsigned long long int) 2147483647);
                        var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) arr_19 [i_13] [i_4] [i_4] [i_2]))));
                        arr_50 [12] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)32767))));
                    }
                    var_35 *= ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) + (((((/* implicit */_Bool) arr_7 [i_0] [(short)2])) ? (((/* implicit */int) arr_26 [(_Bool)1] [i_2])) : (((/* implicit */int) arr_15 [i_2] [i_12]))))));
                    arr_51 [i_0] [i_2] [i_4] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 618361415)) ? (((/* implicit */unsigned int) arr_6 [i_4] [(unsigned char)8])) : (1700607491U)))) <= (arr_46 [i_2] [i_2] [i_2] [i_2])));
                    var_36 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_9 [i_2 - 1] [i_2] [2]))));
                }
            }
            for (short i_14 = 0; i_14 < 20; i_14 += 2) 
            {
                arr_55 [(short)3] [i_2] [i_14] [11ULL] = ((/* implicit */int) ((((/* implicit */int) arr_38 [i_2 - 2] [i_2 - 2] [i_2] [i_2 - 2])) <= (((/* implicit */int) var_0))));
                /* LoopSeq 1 */
                for (short i_15 = 1; i_15 < 18; i_15 += 3) 
                {
                    var_37 = ((/* implicit */short) (~(((/* implicit */int) var_10))));
                    var_38 += ((((/* implicit */_Bool) arr_19 [i_2 - 2] [i_2] [i_15 + 2] [i_15 + 2])) ? (((/* implicit */int) (short)32383)) : (((((/* implicit */_Bool) (short)32740)) ? (((/* implicit */int) (short)32383)) : (((/* implicit */int) (unsigned char)84)))));
                    arr_58 [i_2] [i_2] = ((/* implicit */_Bool) (short)(-32767 - 1));
                    arr_59 [i_0] [i_2] [i_14] [i_15] = ((/* implicit */unsigned int) arr_12 [i_0]);
                    var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) 18446744073709551604ULL))));
                }
                arr_60 [i_0] [i_2] [i_14] [i_2] = ((/* implicit */int) (~((+(arr_31 [i_0])))));
            }
            for (unsigned short i_16 = 3; i_16 < 17; i_16 += 2) 
            {
                arr_65 [16ULL] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned char)105)) : (((/* implicit */int) arr_15 [i_0] [i_2]))))) ? (arr_54 [i_2 + 1] [i_2 + 1]) : (((/* implicit */int) arr_40 [i_2 + 1] [i_16 + 2] [i_16 - 2] [i_16]))));
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 20; i_17 += 2) 
                {
                    for (signed char i_18 = 0; i_18 < 20; i_18 += 3) 
                    {
                        {
                            var_40 = ((/* implicit */unsigned char) (((-(arr_3 [i_0] [i_18]))) >> ((((+(((/* implicit */int) arr_67 [i_16])))) - (30756)))));
                            var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)4126))) <= (arr_4 [i_17])))))))));
                        }
                    } 
                } 
            }
        }
    }
    /* LoopNest 2 */
    for (short i_19 = 3; i_19 < 14; i_19 += 2) 
    {
        for (int i_20 = 0; i_20 < 15; i_20 += 4) 
        {
            {
                arr_77 [i_19] [i_19] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) (unsigned char)87)) != (((/* implicit */int) (short)3)))))));
                var_42 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_19 + 1]))))) ? (max((1136212833101929122ULL), (((/* implicit */unsigned long long int) arr_40 [i_19] [i_19] [i_19] [i_19 - 2])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_19 + 1])) ? (((/* implicit */int) arr_0 [i_19 - 2])) : (1347015415))))));
            }
        } 
    } 
}
