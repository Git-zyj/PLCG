/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20558
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        arr_8 [(signed char)3] [i_1 + 1] [i_1] [(signed char)1] [6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((arr_1 [(_Bool)1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12))))));
                        arr_9 [i_1] [i_2] [i_1 + 1] [i_1] = (~(((/* implicit */int) arr_3 [(_Bool)1] [i_1])));
                    }
                    for (signed char i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
                    {
                        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2]))) : (arr_5 [i_4] [i_0] [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_1] [i_1] [(_Bool)1])) > (((/* implicit */int) arr_3 [i_0] [i_1])))))) : (((((/* implicit */long long int) ((/* implicit */int) var_11))) - (7182240377851745685LL)))));
                        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)46026))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_6 [i_0] [(unsigned char)19] [i_2] [i_4])))) : ((((_Bool)0) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
                    }
                    for (signed char i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21810)) ? (14607424730668609386ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_4)))));
                            arr_17 [i_0] [i_1] [i_1] [i_5] [i_0] = (_Bool)1;
                            var_16 += ((unsigned long long int) ((_Bool) var_3));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            var_17 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)19510))))) : (arr_5 [i_0] [i_1] [(_Bool)1] [20ULL])));
                            var_18 = ((/* implicit */unsigned int) var_3);
                            arr_20 [i_0] [(short)1] [(short)1] [i_0] [i_1] [(_Bool)1] = ((/* implicit */signed char) (-(((/* implicit */int) arr_1 [i_7]))));
                            arr_21 [i_0] [i_1] [i_0] = ((/* implicit */long long int) var_6);
                        }
                    }
                    arr_22 [i_1] [i_1] [i_2] [i_1] &= ((/* implicit */_Bool) ((int) var_12));
                    arr_23 [(signed char)17] [i_1] [i_1] [i_0] = ((/* implicit */short) var_2);
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (((_Bool)1) ? (8719502985231018501LL) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)125))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 22; i_9 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_15 [i_1] [i_1] [11ULL] [i_8] [i_1 + 1] [i_0] [i_0]))));
                                arr_29 [i_0] [i_1] [i_1] [i_8] [i_9] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_10 [i_1 - 3] [i_1] [i_1] [i_1 - 2]))));
                                var_21 = ((/* implicit */_Bool) var_7);
                                arr_30 [(signed char)2] [i_8] [i_1] [i_1] [i_9] [i_8] = ((/* implicit */unsigned long long int) ((_Bool) var_10));
                                arr_31 [i_1] [i_1] [i_9] = ((/* implicit */unsigned int) (signed char)-28);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_22 = ((/* implicit */unsigned short) var_10);
                    arr_34 [i_1] [i_1] [i_1] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) 1141814597U)) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) (unsigned char)90))))));
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_5)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_10] [i_10] [i_1] [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)70))) : (616680896U)))) : (((var_1) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_33 [i_10] [i_1] [(_Bool)1])))));
                }
                /* LoopSeq 1 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_24 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_1 - 2] [i_1 - 3] [i_1 - 2])) ? (((/* implicit */int) arr_2 [i_1 - 2] [i_1 + 3] [i_1 + 4])) : (((/* implicit */int) arr_2 [i_1 + 3] [i_1 - 3] [i_1 - 1])))) - (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_2 [i_1 + 2] [i_1 + 2] [i_1 + 2])) : (((/* implicit */int) arr_2 [i_1 + 2] [i_1 + 1] [i_1 - 2]))))));
                    arr_37 [i_1] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((3678286400U) >> (((((/* implicit */int) var_7)) + (31)))))))) ? ((~(((long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) ((max((3839319343040942207ULL), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1])))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)1))))))))));
                    arr_38 [16U] [i_1] [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) max((14607424730668609386ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))));
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (unsigned short)19510))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) (+(var_0)))) != (((((/* implicit */_Bool) (short)-21824)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_5 [i_0] [i_1] [i_11] [i_11])))))) : (((((/* implicit */int) min((((/* implicit */short) var_12)), (var_10)))) * (((/* implicit */int) arr_3 [i_1] [i_1]))))));
                }
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_7)) + (2147483647))) << (((((/* implicit */int) var_12)) - (1)))));
    var_27 = ((/* implicit */int) ((7182240377851745682LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)21810)))));
    var_28 = ((/* implicit */signed char) max((((min((var_12), ((_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_4))), (((/* implicit */unsigned long long int) ((long long int) (+(((/* implicit */int) var_3))))))));
}
