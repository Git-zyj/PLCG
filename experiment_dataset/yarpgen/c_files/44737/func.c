/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44737
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
    var_14 = ((/* implicit */int) var_3);
    var_15 -= ((/* implicit */short) var_2);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 10; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_16 = ((min((((/* implicit */int) var_12)), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_15 [i_0] [i_3] [i_2] [i_1] [i_1] [i_0])) : (((/* implicit */int) (unsigned short)65529)))))) >> (((((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_0] [i_3] [i_4] [i_4])), (var_1)))) ? (((((/* implicit */_Bool) (unsigned short)2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-121))) : (4294967295U))) : (((((/* implicit */_Bool) (unsigned short)40612)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-121))) : (13U))))) - (4294967173U))));
                                arr_16 [i_2] [i_1] [1LL] = ((/* implicit */unsigned short) var_12);
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        var_17 = ((/* implicit */_Bool) 1752080607);
                        var_18 = var_0;
                    }
                    /* vectorizable */
                    for (short i_6 = 2; i_6 < 11; i_6 += 2) /* same iter space */
                    {
                        var_19 += ((/* implicit */short) var_1);
                        arr_23 [i_2] [i_1] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_21 [i_6 + 1] [i_6] [i_6] [i_6 + 1] [i_6 + 1] [i_6 + 2]))));
                        /* LoopSeq 1 */
                        for (short i_7 = 0; i_7 < 13; i_7 += 2) 
                        {
                            var_20 *= ((/* implicit */signed char) (+(var_8)));
                            arr_26 [i_7] [i_2] [(signed char)10] [i_1] [i_2] [i_0] = ((/* implicit */long long int) var_1);
                            arr_27 [i_2] [i_1] [i_2] [i_6] [i_7] = var_9;
                            var_21 ^= ((/* implicit */short) arr_15 [i_7] [i_7] [i_2] [i_7] [i_6 - 2] [i_0]);
                            arr_28 [i_1] [i_1] [i_1] [i_1] [i_7] [i_6] [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_1]))));
                        }
                        var_22 ^= ((/* implicit */unsigned int) ((((((/* implicit */int) var_5)) < (((/* implicit */int) arr_1 [i_6])))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_8 [i_6] [i_6 + 1] [i_1] [i_1]))));
                    }
                    for (short i_8 = 2; i_8 < 11; i_8 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */long long int) var_3);
                        var_24 = var_0;
                        arr_32 [i_0] [12] [12] [i_2] [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_7 [i_8 + 1] [i_8 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [i_2] [i_8]))) : (arr_25 [i_0] [i_1] [i_2] [i_1] [i_0]))))), (((/* implicit */unsigned int) arr_1 [i_0]))));
                        arr_33 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */short) (+(((((((/* implicit */_Bool) arr_8 [12] [i_1] [i_2] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0]))) : (1478530471U))) >> (((max((arr_11 [i_0] [i_2] [i_2]), (((/* implicit */long long int) var_3)))) - (63LL)))))));
                    }
                    for (short i_9 = 2; i_9 < 11; i_9 += 2) /* same iter space */
                    {
                        arr_36 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_1 [i_9 + 2]))))));
                        arr_37 [i_2] [i_2] [i_9 + 2] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_9 + 1] [i_9] [i_9] [i_9 + 2])) ? (arr_29 [i_9 - 2] [i_9 - 2] [i_9] [i_9 + 2]) : (arr_29 [i_9 - 1] [i_9 - 1] [i_9] [i_9 - 1])))), (9223372036854775807LL)));
                        arr_38 [i_2] [i_2] = ((/* implicit */unsigned long long int) var_8);
                        var_25 = ((/* implicit */short) ((((/* implicit */int) min((arr_35 [i_2] [i_2]), (arr_35 [i_2] [i_2])))) == (((((/* implicit */_Bool) arr_18 [i_9 - 2])) ? (((/* implicit */int) arr_21 [i_9] [i_0] [(signed char)4] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_2))))));
                        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) arr_34 [i_1] [i_1] [i_9 + 1] [i_1]))));
                    }
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */short) var_8);
}
