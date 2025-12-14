/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242102
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
    var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) var_0)) * (((/* implicit */int) var_0)))) : (((/* implicit */int) max(((short)10505), (((/* implicit */short) var_7)))))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            var_11 += ((/* implicit */short) (+((+(((/* implicit */int) ((unsigned char) 18222603005295819826ULL)))))));
            var_12 = ((/* implicit */unsigned long long int) min((var_12), (4383991431586369498ULL)));
            /* LoopSeq 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                arr_7 [i_1] [i_1] [i_1] [i_1] = max(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_4))))))), ((!((!(((/* implicit */_Bool) arr_1 [i_0])))))));
                var_13 = ((short) ((unsigned char) ((((/* implicit */int) var_1)) / (((/* implicit */int) (unsigned char)47)))));
                arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_3)))) - (((((/* implicit */int) var_0)) / (((/* implicit */int) (_Bool)1)))))));
            }
            /* vectorizable */
            for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                var_14 ^= var_6;
                /* LoopSeq 4 */
                for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
                {
                    var_15 = (short)10505;
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) (unsigned char)209)))))));
                    /* LoopSeq 3 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_16 [i_0] [i_1] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_2)) + (2147483647))) << (((((/* implicit */int) arr_9 [i_0] [i_0])) - (1)))));
                        arr_17 [i_0] [i_1] [i_0] [i_3] [i_4] [i_5] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_14 [i_3] [i_3] [i_3] [i_3] [(_Bool)1] [i_3])) : (((/* implicit */int) var_1))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 4) 
                    {
                        var_17 = ((/* implicit */_Bool) arr_0 [i_6] [i_6]);
                        arr_21 [i_0] [i_0] [i_1] [i_3] [i_1] [i_4] [i_6] = ((/* implicit */unsigned char) var_0);
                        var_18 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)75))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) ((unsigned char) var_3)))));
                        arr_22 [i_0] [i_1] [i_3] [i_1] [i_4] [i_6] = ((/* implicit */signed char) var_1);
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_26 [i_1] [i_1] [i_3] [i_4] [i_7] [(short)4] [i_0] = ((/* implicit */unsigned long long int) var_8);
                        var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-4291))));
                    }
                }
                for (unsigned char i_8 = 0; i_8 < 13; i_8 += 3) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned char) arr_24 [i_1] [i_3] [i_1] [i_1]);
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_1] [i_3] [6ULL])) ? (((/* implicit */int) ((short) (short)-8878))) : (((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) (unsigned char)30)))))));
                    arr_29 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (_Bool)1))));
                    var_22 = ((/* implicit */unsigned char) var_2);
                }
                for (unsigned char i_9 = 0; i_9 < 13; i_9 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_35 [(signed char)0] [11ULL] [i_1] [i_9] [i_9] = arr_18 [i_10] [i_1] [i_3] [i_1] [i_3];
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_23 [i_0] [i_1])) : (((/* implicit */int) arr_23 [i_0] [i_9]))));
                        var_24 = ((/* implicit */_Bool) ((unsigned char) var_7));
                        arr_36 [i_0] [i_1] [i_3] [i_1] [i_10] = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)32767))));
                    }
                    var_25 -= var_9;
                    arr_37 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) var_9)) | (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_27 [i_0] [i_1])) : (((/* implicit */int) (short)-143))))));
                }
                for (unsigned char i_11 = 0; i_11 < 13; i_11 += 3) /* same iter space */
                {
                    var_26 = ((_Bool) var_3);
                    /* LoopSeq 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        arr_43 [i_3] [i_11] [i_1] [(_Bool)1] [i_12] [(unsigned char)12] [i_11] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) arr_18 [(unsigned char)1] [i_11] [(unsigned char)2] [(unsigned char)1] [(unsigned char)1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)190)))));
                        var_27 = ((/* implicit */signed char) ((short) arr_24 [i_1] [i_3] [i_11] [i_12]));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        arr_47 [i_1] [i_1] [i_3] [(signed char)1] [i_13] = ((/* implicit */_Bool) ((((/* implicit */int) arr_32 [i_0] [i_1] [i_3] [i_11] [i_13])) << (((((((((/* implicit */int) (short)-10486)) + (2147483647))) << (((((/* implicit */int) arr_18 [(unsigned char)8] [i_1] [i_1] [i_1] [i_1])) - (237))))) - (2147473146)))));
                        var_28 = ((/* implicit */unsigned long long int) (signed char)127);
                    }
                }
                var_29 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_3] [i_3])) ? (((/* implicit */int) arr_30 [i_1] [i_0])) : (((/* implicit */int) var_3))));
                arr_48 [(short)0] [i_1] [i_3] [i_0] = ((/* implicit */unsigned char) ((4383991431586369497ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)30)))));
                /* LoopNest 2 */
                for (short i_14 = 0; i_14 < 13; i_14 += 3) 
                {
                    for (short i_15 = 0; i_15 < 13; i_15 += 2) 
                    {
                        {
                            var_30 = (!((!(((/* implicit */_Bool) var_8)))));
                            var_31 ^= ((/* implicit */_Bool) 4383991431586369491ULL);
                        }
                    } 
                } 
            }
        }
        /* LoopNest 2 */
        for (short i_16 = 3; i_16 < 12; i_16 += 2) 
        {
            for (unsigned char i_17 = 0; i_17 < 13; i_17 += 2) 
            {
                {
                    var_32 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_5)), (max((9928174839856770931ULL), (((/* implicit */unsigned long long int) arr_15 [i_16 - 2] [i_0] [i_16 - 3] [i_0] [i_16 - 3]))))));
                    var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (arr_25 [i_17] [i_17] [i_16 - 3] [i_0] [i_0])))) - (((/* implicit */int) min(((short)-17093), (((/* implicit */short) arr_5 [i_17] [(_Bool)1] [i_16] [(short)4])))))))))));
                }
            } 
        } 
        arr_61 [i_0] = arr_51 [i_0] [i_0] [i_0];
        var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */int) arr_42 [i_0] [i_0] [i_0] [4ULL] [i_0] [(signed char)8] [4ULL])) / (((/* implicit */int) arr_0 [i_0] [i_0])))), (((/* implicit */int) min((var_5), (var_4))))))) ? (max((((/* implicit */int) arr_50 [i_0] [i_0] [(unsigned char)3] [i_0] [i_0])), ((-(((/* implicit */int) var_9)))))) : (min((((/* implicit */int) arr_50 [i_0] [i_0] [7ULL] [i_0] [i_0])), (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_5)))))))))));
        var_35 *= min(((!(((/* implicit */_Bool) arr_41 [i_0] [i_0] [i_0] [i_0] [i_0])))), ((!(((((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) <= (((/* implicit */int) (unsigned char)15)))))));
    }
}
