/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189930
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
    var_18 = ((/* implicit */long long int) var_0);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_19 |= (short)674;
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */long long int) ((((((/* implicit */int) arr_3 [i_0] [i_1 - 1] [i_0])) + (2147483647))) >> (min((((int) var_14)), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)213))) >= (var_16))))))))) : (((/* implicit */long long int) ((((((((/* implicit */int) arr_3 [i_0] [i_1 - 1] [i_0])) - (2147483647))) + (2147483647))) >> (min((((int) var_14)), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)213))) >= (var_16)))))))));
                        arr_11 [i_3] [i_3] [4LL] [4LL] [i_0] [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) arr_3 [i_1 + 2] [(short)0] [(_Bool)1])), (var_15)))) ? (((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) arr_8 [10] [i_1 - 1] [i_1 + 2])) : (((/* implicit */int) arr_8 [(signed char)12] [(signed char)12] [i_1 - 1])))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)213))))) ? (((/* implicit */int) arr_2 [i_1 - 1])) : (2147483647)))));
                    }
                    for (int i_4 = 0; i_4 < 13; i_4 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-24021)) ? (4294967295U) : (((/* implicit */unsigned int) var_15))))) ? (max((((/* implicit */long long int) (short)24021)), (8778775264277598440LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))));
                        var_21 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_1] [i_1 + 2] [i_1 - 1] [i_1])) && (((/* implicit */_Bool) arr_9 [i_1 - 1] [(signed char)1] [i_1 - 1] [3ULL] [i_4])))))));
                        arr_14 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((long long int) arr_7 [i_1 + 1] [i_1 + 1] [i_1] [i_4] [i_4]))) ? (min((((/* implicit */unsigned long long int) arr_7 [i_1 + 2] [i_4] [i_4] [i_4] [(short)10])), (16402783665542509683ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9205524654776939275ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_1 + 2] [i_1 + 2] [i_2] [i_2] [10LL]))))));
                    }
                    for (int i_5 = 0; i_5 < 13; i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((-98198106) - (((/* implicit */int) (unsigned char)62))))))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) 
                        {
                            var_22 = ((/* implicit */signed char) arr_6 [i_0] [i_1] [i_0] [i_1]);
                            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (~(((arr_18 [i_6]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))))));
                            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((unsigned long long int) var_6)))));
                            var_25 = (~((+(((/* implicit */int) var_9)))));
                            var_26 = (i_0 % 2 == zero) ? (((/* implicit */long long int) ((((min((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (short)32767)) : (1567801437))))) + (2147483647))) >> (((((/* implicit */int) (unsigned short)5534)) - (5533)))))) : (((/* implicit */long long int) ((((((min((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (short)32767)) : (1567801437))))) - (2147483647))) + (2147483647))) >> (((((/* implicit */int) (unsigned short)5534)) - (5533))))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 3) 
                        {
                            arr_24 [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) max((var_0), (((/* implicit */unsigned short) arr_13 [i_0] [i_0] [i_2] [(signed char)3] [i_7] [(signed char)3]))))), (((((/* implicit */unsigned int) ((arr_16 [(unsigned short)0] [i_1] [i_0] [i_5]) ? (((/* implicit */int) (unsigned char)213)) : (((/* implicit */int) (unsigned short)39363))))) + (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_5]))) : (0U)))))));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) min(((_Bool)1), (var_1)))), (((((/* implicit */_Bool) (unsigned char)90)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)30))) : (arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((arr_17 [i_0]) + (2147483647))) >> (((arr_21 [i_0] [i_0] [i_0] [(short)9] [i_0]) - (4185976144156851506ULL)))))) ? (((/* implicit */int) ((arr_15 [i_0] [i_2] [i_2]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) : (((/* implicit */int) (unsigned short)19085))))) : (max((((/* implicit */long long int) -812548888)), (0LL)))));
                        }
                        arr_25 [i_5] [i_0] [i_5] [i_5] [(short)6] = ((/* implicit */unsigned char) ((var_7) > (((((/* implicit */int) arr_16 [i_1] [i_1 - 1] [i_0] [i_5])) % (((/* implicit */int) (unsigned char)160))))));
                        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((signed char)62), (((/* implicit */signed char) arr_6 [i_0] [i_1] [i_1 - 1] [i_5]))))) ? (((/* implicit */int) max((arr_5 [i_0] [i_5] [i_0] [i_1 - 1]), (((/* implicit */signed char) var_3))))) : (((/* implicit */int) ((((/* implicit */int) arr_20 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1])) >= (((/* implicit */int) (short)-17323)))))));
                    }
                }
            } 
        } 
    } 
}
