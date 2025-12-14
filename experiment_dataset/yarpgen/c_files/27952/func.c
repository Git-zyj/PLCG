/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27952
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
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((long long int) var_11)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) max(((unsigned short)35306), (max((((/* implicit */unsigned short) var_19)), ((unsigned short)35317)))))) * (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)9427))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)30230))) < (4240403202442871788LL)))) : (((/* implicit */int) arr_4 [i_1] [i_1 + 1] [i_4]))))));
                                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)34006)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)35315))))))) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) (unsigned char)13)))))));
                                arr_15 [i_4] [(short)10] [i_4] [i_4] [i_4] [i_0] = ((/* implicit */unsigned char) max((((arr_11 [i_0] [i_1] [i_2] [i_4] [i_4]) - (arr_11 [i_0] [i_0] [i_2] [i_3 + 1] [i_4]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_5 [i_0] [i_0]), (((/* implicit */long long int) arr_3 [i_0]))))))))));
                                arr_16 [i_0] [i_1] [(unsigned char)1] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_1)), (max((var_6), (((/* implicit */unsigned int) min(((unsigned short)29892), ((unsigned short)36274))))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */int) var_10)) << (((((/* implicit */int) (unsigned char)82)) - (69))))))));
                    arr_17 [(signed char)12] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)115))) ^ (16767899174474396334ULL)));
                    arr_18 [(unsigned short)16] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_1))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0])) ^ (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)88)), ((unsigned short)30522))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1])) << (((arr_11 [i_0] [i_0] [i_0] [i_1] [i_2]) - (1811378542U)))))) ? (arr_11 [i_0] [i_1 + 1] [i_2] [i_2] [(unsigned char)18]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
                    arr_19 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_13 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1]);
                }
                for (unsigned char i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) max((((unsigned int) arr_12 [i_1 - 1] [i_1 - 1] [i_1 + 1])), (((/* implicit */unsigned int) ((signed char) arr_13 [i_1] [(unsigned char)9] [i_1] [i_1]))))))));
                    arr_23 [2U] [i_1 + 2] [i_1] [(unsigned short)4] = var_12;
                    var_25 = ((/* implicit */_Bool) arr_20 [i_0] [i_0]);
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 4; i_6 < 23; i_6 += 2) 
                    {
                        arr_26 [i_0] [i_1] [i_1 + 2] [i_6 - 3] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_12 [i_1 - 1] [i_1 + 1] [i_1 + 2])))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_19)), (arr_12 [i_1 - 1] [i_1 + 1] [i_1 + 2]))))));
                        arr_27 [i_0] [i_1] [i_5] [i_6 - 1] = ((/* implicit */unsigned int) max((((unsigned long long int) (short)-9295)), (((unsigned long long int) var_7))));
                        arr_28 [i_0] [(unsigned short)12] [i_1 - 1] [(unsigned char)11] [i_6] = ((/* implicit */_Bool) max(((unsigned char)82), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max(((unsigned char)120), ((unsigned char)78)))))))));
                        var_26 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)76)), (((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) - (var_6))))));
                        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((var_6) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)229))))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 3; i_7 < 22; i_7 += 3) 
                    {
                        arr_31 [i_0] [15LL] [i_1 + 1] [i_5] [i_7] = ((/* implicit */unsigned char) max((((unsigned int) var_7)), (((/* implicit */unsigned int) (unsigned char)6))));
                        arr_32 [i_0] [i_0] [i_1] [23U] [(signed char)2] [i_7 - 2] = ((/* implicit */signed char) max((min((((((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_0])) ? (((/* implicit */int) (unsigned short)25549)) : (((/* implicit */int) (signed char)-70)))), (((/* implicit */int) (signed char)127)))), (((/* implicit */int) ((signed char) ((unsigned int) (unsigned char)16))))));
                    }
                }
                var_28 += ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) | (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_1)))), (((/* implicit */int) var_11))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_8 = 1; i_8 < 15; i_8 += 1) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned char i_10 = 0; i_10 < 17; i_10 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 2; i_11 < 16; i_11 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((arr_41 [i_11 - 2] [i_11 + 1]), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_39 [i_9] [i_10] [i_9])))))))), (arr_12 [i_8 + 1] [i_10] [i_11]))))));
                        var_30 += ((/* implicit */short) max((((unsigned long long int) max((var_4), (((/* implicit */short) (_Bool)1))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) -3899125866811417527LL)))))));
                    }
                    var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((2233104568811135196ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (unsigned char)157))))))))))));
                    var_32 = ((/* implicit */unsigned short) max((max((var_6), (((/* implicit */unsigned int) arr_37 [i_8 - 1] [i_9] [i_10])))), (((/* implicit */unsigned int) arr_25 [(unsigned char)1] [i_9] [i_9] [i_8 + 2] [i_8]))));
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 0; i_12 < 17; i_12 += 2) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 17; i_13 += 2) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) 3411933745U)) : (arr_13 [i_8] [11U] [i_12] [i_13]))) > (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_12] [i_12] [i_12] [i_8 - 1] [i_9] [i_8 - 1])))))) | (((((/* implicit */_Bool) ((unsigned int) var_9))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_1 [i_8])))) : (((/* implicit */int) min((arr_36 [(short)6]), (((/* implicit */unsigned char) var_13))))))))))));
                                arr_50 [i_8] [i_9] [i_8] [i_12] [i_12] [i_13] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)115)) + (((/* implicit */int) var_15)))) | (((/* implicit */int) (signed char)47))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) max((max((((var_7) & (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned int) var_1)))), (((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned short) var_5))))))))));
}
