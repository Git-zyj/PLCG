/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202794
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
    var_20 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) - (var_0))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned int) (unsigned char)63))))) ? (((/* implicit */long long int) ((var_11) ? (var_6) : (((/* implicit */int) (unsigned char)200))))) : (((var_15) ? (((/* implicit */long long int) var_10)) : (16776704LL)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            var_21 = var_3;
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_3 = 3; i_3 < 13; i_3 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 3; i_4 < 10; i_4 += 3) 
                    {
                        arr_13 [i_3] [i_1] [i_1 - 2] [i_3] [i_3] [(short)13] = ((/* implicit */unsigned int) arr_3 [i_0]);
                        arr_14 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) (unsigned char)66)) - (arr_11 [i_3] [7ULL] [i_2] [i_1] [i_3]))));
                        var_22 = ((/* implicit */long long int) arr_9 [i_0] [i_1] [i_2] [i_0] [i_4]);
                        var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)49))));
                        var_24 = ((/* implicit */unsigned long long int) ((min((2U), (((/* implicit */unsigned int) (unsigned char)63)))) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1 - 1])) / (arr_11 [i_3] [i_1] [i_1 + 3] [i_1] [i_3]))))));
                    }
                    var_25 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((int) var_14))) ? (((((/* implicit */int) var_11)) * (((/* implicit */int) arr_1 [i_0] [i_2])))) : (((var_11) ? (((/* implicit */int) (unsigned char)189)) : (((/* implicit */int) arr_2 [i_1 + 1] [i_0])))))), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) -2128055118)) < (arr_9 [i_1] [i_1 - 1] [i_3] [i_3] [i_1])))) < (((/* implicit */int) arr_0 [i_1 + 2])))))));
                    arr_15 [i_0] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */long long int) min(((-(((/* implicit */int) arr_12 [i_3 + 1] [i_3] [i_2] [i_2] [i_0] [i_3] [i_0])))), (((/* implicit */int) ((unsigned short) arr_11 [i_3] [i_0] [i_0] [i_0] [i_3])))))), (((((/* implicit */_Bool) min((arr_11 [(unsigned char)7] [i_1] [i_1] [i_2] [i_3]), (((/* implicit */int) var_11))))) ? (min((var_5), (((/* implicit */long long int) arr_7 [i_0] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))));
                }
                /* vectorizable */
                for (unsigned short i_5 = 3; i_5 < 13; i_5 += 4) /* same iter space */
                {
                    arr_19 [i_0] [i_5] &= ((/* implicit */long long int) ((var_12) == (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_1 + 3] [i_1 + 3] [i_5 - 3])))));
                    var_26 -= ((/* implicit */int) arr_1 [i_1 - 2] [i_1 + 2]);
                }
                /* vectorizable */
                for (unsigned int i_6 = 0; i_6 < 14; i_6 += 4) 
                {
                    var_27 = ((/* implicit */int) ((arr_10 [i_1 + 2] [i_1] [i_1 - 2] [i_1 + 2]) == (arr_10 [i_1 + 2] [i_1] [i_1 - 1] [i_1 + 1])));
                    var_28 = ((/* implicit */signed char) ((arr_11 [i_1] [i_1] [i_1] [i_1] [i_6]) ^ (((/* implicit */int) arr_18 [i_0] [i_1] [i_0] [i_0]))));
                    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_6] [i_2] [i_0] [i_0]))) <= (var_8)))) <= (arr_6 [i_0] [i_1 - 2] [i_2] [i_2])));
                    var_30 = ((/* implicit */signed char) 5507496149606202028ULL);
                }
                arr_23 [i_0] [i_1] [(signed char)6] = ((/* implicit */long long int) min((((arr_8 [i_1 + 1] [i_1 + 2] [i_1 + 2] [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2))) : (var_17))), (((/* implicit */unsigned int) ((min((((/* implicit */unsigned int) var_10)), (var_12))) <= ((+(arr_10 [i_0] [i_1 - 1] [8ULL] [i_2]))))))));
            }
            arr_24 [i_1] [i_1] [i_1 - 2] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */int) arr_0 [i_1 - 2])) : (((/* implicit */int) arr_0 [i_1 + 3])))) | (((((/* implicit */int) arr_8 [i_1 + 2] [i_1] [i_1 + 3] [(unsigned char)8])) << (((/* implicit */int) arr_8 [i_1 + 3] [i_1] [i_0] [i_1]))))));
        }
        for (unsigned char i_7 = 3; i_7 < 12; i_7 += 3) 
        {
            arr_29 [i_7] [i_7] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (arr_17 [i_7]) : (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_27 [i_7] [i_7] [i_7 - 1])), (((((/* implicit */int) var_9)) + (-1))))))));
            arr_30 [i_0] [i_7] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_7 - 1] [i_7 + 1])) ? (((/* implicit */int) arr_28 [i_7 - 1] [i_7 + 1])) : (((/* implicit */int) arr_28 [i_7 - 1] [i_7 + 1]))))) ? ((+(5507496149606202018ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_11 [i_0] [i_7 - 2] [i_7] [i_7 - 2] [i_0]) == (arr_11 [i_7] [i_7 + 1] [4U] [i_7] [i_0])))))));
        }
        var_31 &= ((/* implicit */signed char) min((((((arr_2 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) var_5)) : (var_4))) * (arr_5 [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (unsigned char)232)) ? (235426962) : (((/* implicit */int) (signed char)69)))) : (((/* implicit */int) arr_3 [i_0])))))));
        arr_31 [i_0] = ((/* implicit */unsigned long long int) (-(-2144204566)));
    }
    for (int i_8 = 2; i_8 < 19; i_8 += 4) 
    {
        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_32 [i_8 - 2] [i_8 - 1]))))), (((((/* implicit */_Bool) 18446744073709551605ULL)) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)165))))))))));
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 20; i_9 += 3) 
        {
            for (int i_10 = 0; i_10 < 20; i_10 += 1) 
            {
                {
                    var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((4294967288U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967285U)) ? (16777184) : (((/* implicit */int) (_Bool)1)))))))) ? (min((arr_38 [i_10] [i_8 + 1] [i_10]), (arr_38 [i_8] [i_8 + 1] [i_10]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */int) arr_32 [i_8] [(unsigned char)16]))))) ? ((-(-1267155397))) : ((-(arr_35 [i_8 - 2] [i_8 - 2])))))));
                    var_34 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_10])) || (((((/* implicit */int) arr_37 [i_8 - 2] [i_8 - 2])) != (((/* implicit */int) arr_37 [i_8 - 2] [i_8 - 2]))))));
                }
            } 
        } 
        var_35 &= ((/* implicit */int) ((((arr_39 [i_8 - 1] [i_8 - 1] [i_8]) + (9223372036854775807LL))) >> (((min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_33 [i_8])) - (((/* implicit */int) arr_32 [i_8] [i_8]))))), (((arr_33 [i_8]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [(signed char)15]))) : (var_7))))) - (15619168799490541337ULL)))));
    }
    var_36 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (var_6)))), (min((11U), (((/* implicit */unsigned int) var_14))))))), (min((min((var_8), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) var_2))))));
    var_37 &= ((/* implicit */signed char) min((var_4), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 34359734272LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (358344340U)))))));
}
