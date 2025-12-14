/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49954
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
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) (((-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (arr_2 [i_0]))))) != (arr_0 [i_0]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            arr_5 [i_0] [i_0] [i_0] = ((unsigned int) 1279038444);
            var_11 *= ((/* implicit */short) (~(((/* implicit */int) arr_1 [i_0]))));
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                var_12 = ((/* implicit */int) min((var_12), ((+(arr_2 [i_0])))));
                arr_9 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) 1617259360U);
                /* LoopSeq 3 */
                for (unsigned int i_3 = 1; i_3 < 9; i_3 += 2) 
                {
                    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-115)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_1] [i_1] [i_0])) : (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) arr_10 [i_0])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))))))))));
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_12 [i_3] [i_1] [i_1] [i_0])) : (var_3)))) * (arr_10 [i_3 + 1])));
                }
                for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    arr_17 [i_0] [i_1] [(signed char)2] [i_4] = ((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0]);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_5 = 2; i_5 < 9; i_5 += 2) 
                    {
                        var_15 |= arr_3 [i_0] [3] [i_0];
                        var_16 += ((/* implicit */unsigned short) ((unsigned int) arr_12 [i_0 - 2] [i_0 - 2] [i_5 + 1] [i_5 - 2]));
                        var_17 = ((/* implicit */signed char) (~((~(((/* implicit */int) (short)-1))))));
                        var_18 |= ((/* implicit */unsigned int) arr_14 [i_2] [i_1] [i_0]);
                    }
                    for (signed char i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        arr_23 [i_1] [i_1] = ((/* implicit */int) var_8);
                        arr_24 [i_0] [i_1] [i_2] [i_4] [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_2] [i_2] [i_2] [i_2] [i_2]))) < (((((/* implicit */_Bool) (signed char)-108)) ? (arr_15 [i_0] [i_1] [i_2] [i_1] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-109)))))));
                        arr_25 [i_0] [i_0 - 2] = ((/* implicit */_Bool) ((int) ((unsigned short) arr_4 [i_1])));
                    }
                    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        arr_28 [i_0] [i_1] [i_1] [i_0] [i_7] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_20 [i_0] [i_0] [i_2] [i_2] [i_7] [i_0] [(unsigned char)10])) < ((+(((/* implicit */int) var_7))))));
                        var_20 -= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) var_7)) : (var_3)))));
                    }
                    arr_29 [i_4] = ((/* implicit */_Bool) 3983317427U);
                    arr_30 [i_0] [i_0] [i_2] [i_4] [i_4] [8U] = (-(((unsigned int) var_4)));
                }
                for (unsigned short i_8 = 3; i_8 < 8; i_8 += 2) 
                {
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_2)) < (var_3)))) * (((/* implicit */int) arr_11 [i_0 + 3] [i_2] [i_0 + 3] [i_0 + 3]))));
                    var_22 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_2] [i_8] [i_1] [i_8] [i_8 + 2])) ? (arr_18 [i_8] [i_8 + 1] [i_8] [i_8 + 1] [i_8 + 1] [i_8 + 2] [i_8 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                }
                arr_35 [i_2] [i_0] [i_0] = ((((/* implicit */int) arr_12 [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_0 - 2])) >> (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2]))) : (var_9))) - (19445U))));
            }
            arr_36 [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1279038439)) ? (((/* implicit */int) (signed char)105)) : (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : (arr_31 [i_0 - 1] [i_0] [i_0 + 1])));
            arr_37 [i_0] [i_0] |= (signed char)-82;
        }
        /* vectorizable */
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            var_23 = ((/* implicit */unsigned short) arr_14 [i_9] [(unsigned char)5] [i_0]);
            /* LoopSeq 1 */
            for (unsigned short i_10 = 1; i_10 < 8; i_10 += 2) 
            {
                var_24 += ((/* implicit */_Bool) ((var_6) - (arr_18 [i_0] [i_0 + 2] [i_0 + 2] [i_0] [7U] [7U] [i_10 - 1])));
                var_25 = ((/* implicit */_Bool) ((arr_41 [i_10 + 3] [i_9 - 1]) | (((/* implicit */unsigned long long int) (-(-7))))));
                arr_43 [i_9] [i_9] [i_0] = ((/* implicit */unsigned long long int) var_2);
                /* LoopSeq 2 */
                for (signed char i_11 = 1; i_11 < 9; i_11 += 2) 
                {
                    var_26 = ((/* implicit */unsigned short) arr_19 [i_10 + 3] [i_10 + 3] [i_9 - 1] [2] [i_0] [i_0]);
                    arr_48 [i_0] [i_0 + 2] [i_0 + 1] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_34 [i_0] [i_0] [i_10] [i_0]);
                }
                for (unsigned short i_12 = 3; i_12 < 9; i_12 += 2) 
                {
                    arr_51 [i_0] [i_0] [6ULL] [i_0] |= ((/* implicit */unsigned char) ((arr_20 [i_9 - 1] [i_9] [i_10 - 1] [i_10 - 1] [i_0 - 2] [i_0] [i_12 + 1]) ? (((/* implicit */int) arr_21 [i_10 + 2] [i_10 + 2] [i_10 + 1] [i_10 + 2] [i_10 + 1])) : (((((/* implicit */_Bool) arr_8 [i_0] [6ULL] [i_0])) ? (9376252) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_9] [i_12]))))));
                    arr_52 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_10] [i_10] [i_10 + 1] [i_10])) ? (((/* implicit */int) arr_7 [9] [9] [i_10 + 3] [i_10])) : (((/* implicit */int) arr_7 [i_10] [i_10] [i_10 + 3] [i_10]))));
                    var_27 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_49 [i_0 - 1] [i_0] [i_0 + 3] [i_0 + 3])) ? (((var_3) ^ (((/* implicit */int) (signed char)-85)))) : (var_3)));
                }
            }
            var_28 |= ((/* implicit */unsigned short) ((unsigned int) arr_50 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_0 - 2]));
            arr_53 [i_0 - 2] [i_0] [i_0 - 2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_9] [i_9 - 1] [i_0 + 1])) * (((/* implicit */int) arr_16 [i_0 - 2] [i_9 - 1] [i_9 - 1] [(unsigned char)6] [i_0 - 2] [i_0 - 1]))));
            arr_54 [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */int) arr_34 [i_0] [10] [i_0 - 1] [i_0])) : (((/* implicit */int) arr_14 [i_0] [i_9] [i_0]))))));
        }
        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_49 [i_0] [i_0 + 2] [i_0] [i_0])) - (var_1)))) ? ((+(var_1))) : (((/* implicit */unsigned long long int) (-(var_6)))))))))));
        var_30 += ((/* implicit */short) ((((((/* implicit */_Bool) arr_40 [i_0 + 3] [i_0 + 1] [i_0 - 1] [i_0 - 2])) ? (((/* implicit */int) arr_12 [i_0 - 2] [i_0] [i_0 + 3] [i_0])) : (((/* implicit */int) arr_12 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 + 3])))) | (((/* implicit */int) ((var_1) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_0 + 3] [i_0 - 2] [i_0 + 1] [i_0 + 1]))))))));
    }
    var_31 += ((/* implicit */unsigned short) (short)-28370);
}
