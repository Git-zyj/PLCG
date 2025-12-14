/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196118
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (short i_4 = 4; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_13 [i_1] [i_1] [i_1] [(_Bool)1] [i_1] [2] = ((/* implicit */short) var_8);
                                var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_2 + 1] [i_3])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_9 [i_0] [6] [6] [i_0] [i_0]))))) ? (var_0) : (((((/* implicit */_Bool) max((var_12), (var_6)))) ? (((/* implicit */int) ((_Bool) arr_2 [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_3]))))))));
                            }
                        } 
                    } 
                    var_16 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_12)) : (var_8))))) ? (((((/* implicit */int) arr_7 [i_2 + 2] [i_2 + 2] [i_2 + 2] [(unsigned char)3])) ^ (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned char) arr_2 [i_0])))));
                }
            } 
        } 
    } 
    var_17 *= ((/* implicit */_Bool) 131071);
    var_18 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_3) : (238058852)))) ? (((/* implicit */int) var_13)) : ((+(var_0)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_13) ? (((/* implicit */int) var_10)) : (var_3)))) ? (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */int) var_14)))) : (((/* implicit */int) var_7))))) : ((+(var_1))));
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
    {
        for (int i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            for (unsigned short i_7 = 1; i_7 < 7; i_7 += 3) 
            {
                {
                    arr_21 [7U] [7U] [i_5] [i_6] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 238058852)) ? (131071) : (((/* implicit */int) arr_19 [i_7] [(unsigned char)6] [i_5]))))))) ? (((((/* implicit */_Bool) arr_12 [(short)6] [i_7 + 3] [i_7 - 1] [i_7 - 1] [i_7] [i_7 + 3])) ? (-238058852) : (((/* implicit */int) var_12)))) : (((/* implicit */int) var_13))));
                    /* LoopSeq 3 */
                    for (short i_8 = 0; i_8 < 10; i_8 += 1) 
                    {
                        var_19 = var_2;
                        var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_5])) ? (131052) : (-238058852)))), (arr_15 [i_8])))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_0 [i_5]))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_9 = 0; i_9 < 10; i_9 += 3) 
                        {
                            var_21 -= ((/* implicit */unsigned char) -238058827);
                            arr_28 [(short)3] [i_8] [6] [6] [i_5] = ((/* implicit */signed char) var_1);
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (238058841)));
                            var_23 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_7 + 1])) ? (((/* implicit */int) var_12)) : (var_0)));
                        }
                        arr_29 [(signed char)0] = ((/* implicit */short) ((((/* implicit */_Bool) max((-238058848), (var_4)))) ? (((/* implicit */int) ((unsigned char) var_14))) : (((((/* implicit */_Bool) 131092)) ? (((/* implicit */int) arr_8 [i_7] [i_7] [i_7] [i_7 + 1])) : (((/* implicit */int) ((short) arr_5 [i_5] [6U] [i_8])))))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 10; i_10 += 3) /* same iter space */
                    {
                        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) var_7))));
                        var_25 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((4821170264660708933LL) + (((/* implicit */long long int) -131072))))) ? (((((/* implicit */_Bool) -1934375622)) ? (238058848) : (((/* implicit */int) (unsigned short)8790)))) : (((/* implicit */int) var_6))))));
                    }
                    for (unsigned char i_11 = 0; i_11 < 10; i_11 += 3) /* same iter space */
                    {
                        var_26 += ((/* implicit */long long int) ((((arr_14 [i_7 + 3] [i_7 + 3]) > (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) ? (((/* implicit */unsigned int) (-(var_0)))) : (((((/* implicit */_Bool) var_11)) ? (arr_14 [i_7 - 1] [i_7 + 3]) : (arr_14 [i_7 + 2] [i_7 + 2])))));
                        arr_34 [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_5] [(unsigned char)1] [(unsigned char)1] [i_5] [i_5])) ? (((/* implicit */int) arr_8 [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) var_11))))))))));
                    }
                    var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) arr_33 [(signed char)6] [(signed char)6] [i_6] [2] [i_6] [(signed char)6]))));
                    arr_35 [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((short) var_6)))))) ? (max((arr_23 [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7]), (((/* implicit */long long int) -131071)))) : (((/* implicit */long long int) var_8))));
                }
            } 
        } 
    } 
}
