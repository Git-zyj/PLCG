/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32940
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
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 14; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_8 [(unsigned char)4] [i_1 + 2] [i_1 + 1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((int) arr_0 [i_0])) >> ((((-(arr_7 [i_0]))) - (8721964566764343912ULL)))))) % (min(((~(var_12))), (((/* implicit */unsigned long long int) ((((var_14) + (9223372036854775807LL))) >> (((arr_0 [i_0]) - (6806134516029980716ULL))))))))));
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */short) (~(max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)139))) != (var_7)))), (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) : (var_14)))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-((~((~(var_5)))))));
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)123)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 + 2] [i_0 - 1]))) : (var_3)))) - ((-(arr_7 [i_4])))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 2; i_5 < 14; i_5 += 3) /* same iter space */
                        {
                            arr_20 [i_0] [i_0 - 1] = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_13) : (((/* implicit */int) (unsigned short)32351))))), (min((arr_4 [i_1 - 1]), (((/* implicit */unsigned long long int) (short)-3))))))));
                            arr_21 [i_1] [i_2] [i_1] [i_2] |= ((/* implicit */unsigned int) var_12);
                        }
                        for (unsigned short i_6 = 2; i_6 < 14; i_6 += 3) /* same iter space */
                        {
                            arr_26 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] = ((/* implicit */long long int) var_7);
                            arr_27 [i_0] [i_1] [i_2 + 2] [i_3] [i_3] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_9)))))))) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)138))) >= (arr_12 [i_6 - 2] [i_2 - 1] [i_1 + 2] [i_0 + 1]))))));
                        }
                        arr_28 [i_0] [i_1] [i_1] [i_1] [i_2 - 1] [i_3] = min((((/* implicit */long long int) (+(((/* implicit */int) arr_23 [i_2 + 2]))))), (((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_5) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [(short)4]))))))) : (min((arr_19 [i_3] [i_0] [i_0] [i_2 + 2] [i_0] [i_0]), (((/* implicit */long long int) arr_14 [i_3])))))));
                        arr_29 [2U] [i_1] [i_2 + 1] [i_3] = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_1]);
                    }
                    for (short i_7 = 0; i_7 < 15; i_7 += 3) 
                    {
                        arr_32 [12LL] [i_1] [(_Bool)1] [i_7] = ((/* implicit */short) (+(((((/* implicit */int) (unsigned char)111)) + (((/* implicit */int) arr_22 [i_0] [i_1] [i_0] [i_0 + 1] [i_2] [i_2 - 1]))))));
                        arr_33 [i_7] [i_7] [i_1] [i_7] [i_0] = ((/* implicit */int) var_6);
                    }
                }
            } 
        } 
        arr_34 [i_0] = ((/* implicit */unsigned char) min((max((arr_23 [i_0 + 1]), (arr_23 [i_0]))), (((/* implicit */short) ((((/* implicit */int) arr_23 [i_0 + 1])) >= (((/* implicit */int) arr_23 [i_0 - 1])))))));
        arr_35 [i_0] = ((/* implicit */int) ((((((arr_7 [i_0]) * (var_5))) * (((/* implicit */unsigned long long int) ((int) (short)16098))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58958)))));
        arr_36 [i_0] [i_0] = ((((/* implicit */_Bool) (+(-6603934901971647119LL)))) ? (arr_11 [i_0] [i_0] [(_Bool)1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((min((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [(unsigned short)0])))) <= (((/* implicit */unsigned long long int) min((-379147641), (((/* implicit */int) var_10))))))))));
    }
    for (int i_8 = 1; i_8 < 14; i_8 += 3) /* same iter space */
    {
        arr_41 [i_8] [i_8] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_37 [i_8] [i_8 - 1])) ? (arr_37 [i_8] [i_8]) : (arr_37 [i_8] [i_8 - 1]))) + (min((arr_37 [i_8] [i_8 - 1]), (arr_37 [i_8] [i_8 - 1])))));
        arr_42 [(short)6] = ((/* implicit */signed char) ((8380416) < (((/* implicit */int) ((signed char) arr_10 [i_8 - 1] [6] [i_8] [i_8] [i_8 + 1])))));
    }
    var_16 = ((/* implicit */int) min((((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (var_7)));
    var_17 = ((/* implicit */long long int) var_10);
}
