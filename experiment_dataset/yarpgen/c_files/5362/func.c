/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5362
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_14 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (_Bool)0)))) <= (((/* implicit */int) (signed char)0))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((_Bool) -5860466143655663189LL));
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 3; i_2 < 12; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_0] [i_0] [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -20LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)-122)))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 4; i_4 < 15; i_4 += 2) 
                        {
                            var_15 = ((/* implicit */long long int) (unsigned char)133);
                            var_16 = ((/* implicit */_Bool) (-(var_3)));
                            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_4))));
                            arr_16 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (arr_8 [i_2 + 2] [i_2 - 3] [i_1]) : (arr_8 [i_2 + 3] [i_2 - 3] [i_1])));
                            var_18 &= ((/* implicit */unsigned long long int) (unsigned short)65535);
                        }
                    }
                } 
            } 
            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)71)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12))));
        }
        for (signed char i_5 = 1; i_5 < 15; i_5 += 4) 
        {
            arr_20 [i_5] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_8 [6] [7] [i_5]))));
            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_5 + 1] [i_5 - 1] [i_5] [i_5 + 1] [i_5])) ? (arr_14 [i_5 - 1] [i_5 + 1] [9U] [i_5] [i_5 - 1]) : (arr_14 [i_5] [i_5 + 1] [i_5] [(_Bool)1] [i_5 + 1])));
            /* LoopNest 3 */
            for (unsigned short i_6 = 0; i_6 < 16; i_6 += 4) 
            {
                for (signed char i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    for (unsigned char i_8 = 0; i_8 < 16; i_8 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [(unsigned char)4] [(unsigned char)10] [i_6] [(short)0] [i_5])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_22 [i_0] [i_5 + 1] [i_5]))));
                            arr_31 [(signed char)5] [3LL] [i_6] [(unsigned short)7] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-4)) ? (14578076442835895847ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_5] [i_5] [i_5])))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_8])) ? (((/* implicit */int) arr_10 [i_5 + 1] [i_5] [i_5] [(unsigned short)0] [15LL] [i_5 - 1])) : (((/* implicit */int) arr_10 [i_0] [i_5] [i_5 - 1] [i_7] [i_8] [i_7]))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((unsigned char) (~(((/* implicit */int) arr_2 [i_0] [i_0]))))))));
            arr_32 [i_5] = (i_5 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)93)) > (((/* implicit */int) var_4))))) >> (((arr_28 [i_0] [i_0] [i_0] [i_0] [i_5] [i_0]) - (1201650246U)))))) : (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)93)) > (((/* implicit */int) var_4))))) >> (((((arr_28 [i_0] [i_0] [i_0] [i_0] [i_5] [i_0]) - (1201650246U))) - (292338986U))))));
        }
        for (int i_9 = 1; i_9 < 15; i_9 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_10 = 1; i_10 < 14; i_10 += 4) 
            {
                for (long long int i_11 = 2; i_11 < 12; i_11 += 1) 
                {
                    {
                        arr_40 [i_9] = ((/* implicit */signed char) ((_Bool) arr_38 [i_10 + 2] [i_9] [i_9] [i_0]));
                        var_24 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_23 [i_9 + 1] [i_10 - 1] [i_11 + 1]))));
                        var_25 = ((/* implicit */_Bool) ((unsigned long long int) 2743665875U));
                        arr_41 [i_9] [i_9 - 1] [(unsigned char)14] [i_9] [i_9 - 1] = ((((/* implicit */_Bool) arr_13 [i_9 + 1] [i_11 + 3] [(unsigned short)10])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_13 [i_9 - 1] [i_11 + 3] [i_9 - 1])));
                        var_26 &= ((/* implicit */unsigned short) ((0LL) != (10LL)));
                    }
                } 
            } 
            var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) var_7))));
        }
        for (unsigned int i_12 = 2; i_12 < 14; i_12 += 4) 
        {
            var_28 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)158))));
            /* LoopNest 2 */
            for (unsigned long long int i_13 = 1; i_13 < 15; i_13 += 2) 
            {
                for (unsigned int i_14 = 0; i_14 < 16; i_14 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_15 = 2; i_15 < 15; i_15 += 2) 
                        {
                            var_29 = (unsigned char)52;
                            var_30 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [i_15 - 2] [i_12 + 1] [i_13] [i_15 - 2] [i_15])) ? (arr_30 [i_15 - 2] [i_12 + 1] [11] [i_14] [i_15 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                        }
                        for (signed char i_16 = 3; i_16 < 13; i_16 += 2) 
                        {
                            var_31 = (unsigned char)185;
                            arr_55 [i_13] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_29 [i_12 - 1] [(signed char)4] [12LL] [i_13 + 1] [i_16 - 3] [i_16])) > (((/* implicit */int) arr_17 [i_12] [i_13 - 1] [i_12]))));
                            var_32 = ((/* implicit */long long int) ((2953074633U) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 9011466193191400971ULL)) || (((/* implicit */_Bool) arr_35 [i_16] [i_12 + 1]))))))));
                        }
                        for (unsigned short i_17 = 0; i_17 < 16; i_17 += 1) 
                        {
                            var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_13 [i_12 + 2] [i_12 + 2] [i_17])))))));
                            var_34 = ((/* implicit */int) ((unsigned int) (signed char)86));
                        }
                        var_35 = ((/* implicit */unsigned int) (_Bool)1);
                    }
                } 
            } 
            var_36 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)47265))));
            var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_0] [i_12] [(unsigned char)14]))) * (3556789526U))))));
        }
    }
    var_38 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (var_3)))) ? (((((/* implicit */int) var_6)) / (var_0))) : (((/* implicit */int) max(((unsigned char)233), (((/* implicit */unsigned char) var_8)))))))), (((min((((/* implicit */unsigned long long int) -1209870339)), (var_3))) << (((((/* implicit */int) var_4)) + (99)))))));
}
