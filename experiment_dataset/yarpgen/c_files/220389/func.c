/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220389
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-72)) : (((/* implicit */int) (signed char)-114))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((unsigned char) var_11)))))) * (min((((/* implicit */unsigned int) (((_Bool)0) && (((/* implicit */_Bool) var_4))))), (((unsigned int) 2765535209382692587ULL))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) /* same iter space */
                    {
                        arr_11 [i_1] [i_1] [i_1] [i_1] [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (((15686072183121797423ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2 + 2] [i_2 + 2] [i_2 + 1] [i_2 + 1])))));
                        /* LoopSeq 3 */
                        for (int i_4 = 4; i_4 < 22; i_4 += 2) 
                        {
                            var_17 = arr_2 [i_1] [i_3];
                            arr_16 [i_2] [i_2] [i_2] [i_3] [i_2] [i_4] = ((/* implicit */unsigned long long int) ((short) arr_12 [i_2] [i_2 + 1] [i_2 + 1] [i_2] [i_2 - 1]));
                            arr_17 [i_1] [i_3] [i_2] [i_2] [i_1] [6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_8 [i_2] [i_2 + 1] [16LL] [i_2]))));
                            arr_18 [i_0] [7U] [i_0] [i_2] [i_4] [i_0] [i_0] = ((/* implicit */short) (!(((arr_13 [i_3] [i_3] [i_2] [i_1] [i_0] [i_0]) > (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                        }
                        for (int i_5 = 4; i_5 < 21; i_5 += 4) 
                        {
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)47)) : (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (short)29911))) : (-6851891178179788323LL)))));
                            arr_21 [i_0] [i_1] [i_2 + 1] [i_2] [(unsigned short)0] = (-((+(3366522068U))));
                            arr_22 [i_0] [i_0] [i_2] [9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_5 + 1] [i_5 + 1] [i_3] [i_2 - 1])) ? (((/* implicit */int) arr_14 [i_5 - 4] [i_2] [i_2] [i_2 + 1] [i_2 - 1])) : (((/* implicit */int) arr_9 [i_5 - 3] [i_5 - 3] [i_2 - 1] [i_2 - 1]))));
                            arr_23 [i_0] [i_1] [i_0] [i_2] [i_5 + 2] = ((/* implicit */unsigned short) var_9);
                            arr_24 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)204)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((-150017042158769715LL) + (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                        }
                        for (int i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            var_19 = ((/* implicit */signed char) arr_10 [(short)3] [i_3] [i_0] [i_0]);
                            arr_28 [i_6] [i_1] [i_1] [i_2] [12LL] [i_2 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_6))) ? (arr_19 [i_2] [(signed char)18] [i_2] [i_3] [(signed char)18]) : (((/* implicit */long long int) ((/* implicit */int) var_15)))));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43341))) <= (((((/* implicit */_Bool) (signed char)-22)) ? (arr_10 [(signed char)19] [(unsigned short)12] [(signed char)19] [(unsigned short)12]) : (2778624638083455055ULL)))));
                            arr_29 [i_0] [i_1] [i_0] [i_3] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_2 + 1])) ? (((((/* implicit */int) var_7)) << (((/* implicit */int) var_13)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [i_0] [i_3] [i_6])))))));
                        }
                    }
                    for (unsigned short i_7 = 0; i_7 < 23; i_7 += 3) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)8311))));
                        arr_34 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) arr_10 [i_0] [i_0] [7LL] [i_0]);
                    }
                    for (unsigned short i_8 = 0; i_8 < 23; i_8 += 3) /* same iter space */
                    {
                        arr_37 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2] [i_2 + 1] [i_2] [i_2 + 1] [i_8])) ? (((/* implicit */int) arr_20 [8] [i_2 + 1] [8] [i_2 + 1] [i_8])) : (((/* implicit */int) arr_20 [i_0] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 1]))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((_Bool) arr_20 [i_2 + 2] [i_2 + 1] [(short)11] [i_2] [i_2 + 1])))));
                        arr_38 [i_2] [i_2] [(_Bool)1] [i_2] [i_8] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_5 [i_2 + 1])) ? (17409140702949423333ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2 + 1])))))));
                        arr_39 [i_0] [i_2] [i_2] [i_8] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) (unsigned short)13386)))) ? (((/* implicit */int) ((short) arr_19 [i_2] [i_1] [i_2 + 2] [i_2 + 2] [17]))) : (((/* implicit */int) ((short) arr_19 [i_2] [i_1] [i_2 - 1] [i_1] [(unsigned short)15])))));
                    }
                    arr_40 [i_2] [(unsigned short)5] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4547272066573502990LL)) && (((/* implicit */_Bool) 5545777967567122837LL))));
                    arr_41 [(unsigned char)11] [i_2] = ((/* implicit */long long int) var_9);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) ((unsigned long long int) var_8));
    var_23 = ((/* implicit */short) 12102561660714834402ULL);
}
