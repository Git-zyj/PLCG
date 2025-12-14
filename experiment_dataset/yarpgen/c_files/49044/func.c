/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49044
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) arr_6 [i_0] [(short)11] [19LL] [i_2])))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 351079276U)) ? (((/* implicit */int) (unsigned short)7)) : (((/* implicit */int) (unsigned char)22))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(unsigned short)16]))))) : (((((/* implicit */int) arr_5 [i_3] [11U] [i_1] [i_0])) << (((arr_3 [i_0]) - (18170734896220821341ULL)))))));
                        var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) ((int) var_13)))));
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)21)) ^ (((/* implicit */int) (short)29140)))))));
                            var_24 = ((/* implicit */unsigned int) (+((+(var_12)))));
                            arr_11 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_3] [i_2])) ? (((/* implicit */int) arr_4 [i_3] [i_1] [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))));
                            var_25 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_4])) ? (arr_9 [i_4] [i_3] [i_3] [(short)15] [i_1] [(_Bool)1] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) ((var_9) && (((/* implicit */_Bool) var_18))))))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) var_3);
                            var_27 = ((/* implicit */unsigned int) ((unsigned short) 18446744073709551599ULL));
                            var_28 = ((/* implicit */_Bool) (+(((unsigned long long int) (unsigned char)255))));
                        }
                        var_29 = 5330735936224012624LL;
                    }
                    var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [(unsigned short)5] [i_2])))))));
                    var_31 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_2]))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 1; i_6 < 23; i_6 += 1) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned long long int) min((-4683230126153991542LL), (((/* implicit */long long int) (short)-29140))));
                        var_33 = ((/* implicit */unsigned int) ((unsigned short) min((15780618282423871344ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_6])) && (var_9)))))));
                        var_34 |= ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) ((short) 14448737237090670195ULL))) ? (((2014698140) - (((/* implicit */int) arr_7 [12ULL] [i_1] [i_2] [11LL] [i_6])))) : (((/* implicit */int) var_6)))));
                        var_35 |= ((/* implicit */unsigned long long int) (short)-19295);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_7 = 1; i_7 < 23; i_7 += 1) /* same iter space */
                    {
                        arr_18 [i_0] [i_7] [i_2] [i_7 + 2] = ((/* implicit */unsigned long long int) arr_0 [i_1]);
                        var_36 = ((/* implicit */long long int) arr_8 [(unsigned char)19] [i_1] [i_2] [i_7]);
                        var_37 = ((/* implicit */unsigned short) ((-3477878204682678239LL) / (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_7 + 2] [i_7] [(unsigned short)12])))));
                    }
                }
            } 
        } 
    } 
    var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) var_8))));
    var_39 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_16) : (((/* implicit */unsigned long long int) var_15))))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_14)))));
    /* LoopNest 2 */
    for (short i_8 = 0; i_8 < 14; i_8 += 2) 
    {
        for (long long int i_9 = 0; i_9 < 14; i_9 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 1; i_10 < 13; i_10 += 2) 
                {
                    for (unsigned short i_11 = 3; i_11 < 11; i_11 += 4) 
                    {
                        {
                            var_40 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (short)-26569)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_11 + 3]))) : (2666125791285680273ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)225)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18))) : (((var_3) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                            var_41 = ((/* implicit */long long int) (~(arr_16 [i_10 - 1] [i_10 - 1] [i_10 - 1])));
                        }
                    } 
                } 
                var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_9] [(short)3] [20U] [i_9] [(short)2]))) | (arr_15 [i_9] [i_8] [i_8] [i_8])))) ? (((/* implicit */int) max((arr_20 [i_8]), (((_Bool) 1231659567U))))) : (((/* implicit */int) ((_Bool) (-(arr_17 [i_8] [(unsigned short)19] [i_8] [i_8])))))));
            }
        } 
    } 
}
