/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229730
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
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */signed char) (short)-31457);
                var_19 = ((/* implicit */unsigned int) (((~(((/* implicit */int) var_7)))) / (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))));
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((-1940259407729818538LL) + (9223372036854775807LL))) << (((((/* implicit */int) var_10)) - (127)))))) ? (((/* implicit */int) arr_2 [i_0] [i_0] [(signed char)15])) : (((((/* implicit */int) arr_1 [i_1])) ^ (((/* implicit */int) arr_1 [i_1]))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 13; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) var_5);
                            var_22 *= ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) ^ ((~(((/* implicit */int) (signed char)118))))));
                            var_23 &= ((/* implicit */signed char) min((((/* implicit */short) (signed char)4)), (arr_3 [i_2] [i_3])));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 2; i_5 < 15; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) arr_14 [i_0] [i_4] [i_6]))));
                            var_25 *= (-((+(var_0))));
                        }
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)31447)) ? (arr_15 [i_0] [i_5 - 2] [9ULL] [9ULL] [9ULL] [i_5] [i_4]) : (((/* implicit */int) (short)31456))));
                        var_27 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) + (((/* implicit */int) arr_11 [i_5]))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_5])) / (((/* implicit */int) arr_0 [i_1])))))));
                    }
                    for (long long int i_7 = 3; i_7 < 15; i_7 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) arr_12 [i_7 + 1] [i_7] [i_7 + 1] [i_7] [i_7 - 2] [i_7 - 2])) : (((/* implicit */int) arr_12 [i_7] [i_7] [i_7 - 2] [i_7] [i_7 - 2] [i_7 - 2]))));
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 0; i_8 < 16; i_8 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned int) ((short) ((((/* implicit */int) (short)31457)) << (((((/* implicit */int) (unsigned short)65535)) - (65526))))));
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_6 [i_0] [i_0] [i_7] [i_8]))) ? (((/* implicit */int) arr_19 [i_1])) : (((/* implicit */int) (short)-12834))));
                            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) 7LL)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)171)))));
                        }
                    }
                    var_32 = ((/* implicit */unsigned short) 1940259407729818548LL);
                    /* LoopSeq 3 */
                    for (short i_9 = 2; i_9 < 14; i_9 += 2) 
                    {
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) var_17)) >> (((((((/* implicit */int) arr_18 [i_0] [i_0] [i_1] [i_1] [i_4] [i_9] [i_9 - 2])) + (((/* implicit */int) var_17)))) + (63)))));
                        var_34 = ((/* implicit */long long int) (~(arr_5 [i_0] [i_0] [i_4] [i_9])));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_35 = ((/* implicit */signed char) arr_0 [(signed char)1]);
                        var_36 = ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_10]))) == (arr_13 [i_0] [i_1] [i_1] [i_1] [i_10]));
                    }
                    for (signed char i_11 = 0; i_11 < 16; i_11 += 2) 
                    {
                        var_37 &= var_9;
                        var_38 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_24 [i_1] [(unsigned char)13] [i_1] [i_1] [i_1] [i_1])) << (((((/* implicit */int) var_9)) - (72)))));
                        var_39 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        var_40 = ((/* implicit */unsigned int) min((var_40), (var_12)));
                    }
                }
            }
        } 
    } 
    var_41 = ((/* implicit */_Bool) (~(((/* implicit */int) var_8))));
}
