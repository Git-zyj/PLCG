/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44459
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
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 1; i_2 < 17; i_2 += 3) 
                {
                    arr_7 [i_0] = (~(((((/* implicit */_Bool) ((var_6) / (((/* implicit */unsigned long long int) -2147483638))))) ? (min((((/* implicit */int) var_5)), ((-2147483647 - 1)))) : (((/* implicit */int) arr_5 [i_2] [i_1] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [(signed char)2] [i_1] [(signed char)2] = (-(((/* implicit */int) arr_2 [i_0 + 1])));
                                arr_14 [8ULL] [8ULL] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (-(arr_4 [i_0])));
                                arr_15 [i_0] [i_0] [i_1] [i_0] [i_1] [i_1] [i_4] = ((/* implicit */_Bool) var_3);
                                arr_16 [i_4] [i_1] [i_1] [i_4] [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_4] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)0)))) > (((2147483620) / (((/* implicit */int) var_3))))))) >> ((((-(((((((/* implicit */int) (short)-1)) + (2147483647))) >> (((/* implicit */int) arr_1 [i_0])))))) + (1073741830)))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_5 = 4; i_5 < 17; i_5 += 3) /* same iter space */
                    {
                        arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2 + 1])) ? (var_8) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_5] [i_2] [i_2] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))) ? (max((((/* implicit */int) var_0)), (2147483620))) : (((((/* implicit */int) var_5)) | (((/* implicit */int) var_9))))))));
                        arr_20 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) var_4);
                    }
                    for (signed char i_6 = 4; i_6 < 17; i_6 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_7 = 0; i_7 < 19; i_7 += 4) 
                        {
                            arr_25 [i_0] [i_6] [i_0] [i_6] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-25014)) | (((/* implicit */int) arr_23 [i_6] [i_2] [i_2] [i_6]))))) ? ((+(((/* implicit */int) arr_5 [i_2] [i_0 + 1] [i_2 - 1])))) : (((((/* implicit */_Bool) var_5)) ? (max((-2147483604), (((/* implicit */int) (short)25013)))) : (((/* implicit */int) (short)-25024))))));
                            arr_26 [i_7] [i_7] [i_7] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_3 [i_6 + 2])) : (arr_18 [i_0] [i_0] [i_0] [i_6 + 1])))), (arr_17 [i_1]));
                        }
                        /* LoopSeq 2 */
                        for (signed char i_8 = 0; i_8 < 19; i_8 += 4) /* same iter space */
                        {
                            arr_30 [i_0] [i_0] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (((arr_27 [i_8] [i_8]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))) ? (((/* implicit */int) (short)25023)) : (((arr_18 [i_0] [i_0] [i_0] [i_8]) & ((~(((/* implicit */int) var_7))))))));
                            arr_31 [i_0] [i_0] [i_0] [i_2] [i_2] [i_6] [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_10 [i_6 - 1] [i_2 + 1] [i_2 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1])) ? (((/* implicit */int) arr_10 [i_6 - 4] [i_2 - 1] [i_2 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_10 [i_6 + 2] [i_2 - 1] [i_2 + 2] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1]))))));
                        }
                        for (signed char i_9 = 0; i_9 < 19; i_9 += 4) /* same iter space */
                        {
                            arr_35 [i_0] [i_1] [i_2] [i_9] [i_9] = ((/* implicit */unsigned char) (+(max((arr_29 [i_9] [i_0 + 1] [i_2 - 1] [i_6 - 1] [i_6 + 1]), (((/* implicit */int) (signed char)-64))))));
                            arr_36 [i_0] [i_0] [i_0] [i_6] [i_0] [i_9] = var_5;
                        }
                    }
                    arr_37 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) min(((~(((/* implicit */int) arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_2 - 1] [i_0 - 1] [i_2])))), (((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_0] [i_0] [i_2 + 1] [i_2] [i_2])) ? (((/* implicit */int) arr_34 [12ULL])) : ((-2147483647 - 1))))));
                }
                arr_38 [i_0] [i_0] = ((/* implicit */unsigned char) var_1);
                arr_39 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_17 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))))) ? (((/* implicit */int) min((arr_34 [2]), (((/* implicit */unsigned char) arr_23 [(short)6] [(short)6] [(short)6] [(short)6]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
            }
        } 
    } 
    var_10 = ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_5), (((/* implicit */unsigned char) (signed char)-64)))))) ^ (((((((/* implicit */_Bool) var_3)) ? (18446744073709551598ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))));
    var_11 = ((((/* implicit */int) var_9)) + (var_2));
    var_12 = ((/* implicit */_Bool) var_0);
    var_13 &= ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (min((((((/* implicit */_Bool) 2147483641)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25024))))), (((/* implicit */unsigned long long int) var_8))))));
}
