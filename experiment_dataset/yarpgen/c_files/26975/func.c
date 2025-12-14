/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26975
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_1 [i_0]))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [17ULL] [i_0]) : (arr_0 [i_0] [i_0])));
        arr_6 [i_0] = ((/* implicit */unsigned char) (~(var_3)));
        arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) var_5)) ? (var_3) : (8ULL))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 1) 
    {
        arr_12 [6LL] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_2)) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) ((unsigned char) var_1)))))));
        arr_13 [i_1] [(unsigned char)2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (arr_8 [i_1])))))) + (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_10)) / (((/* implicit */int) arr_11 [i_1] [i_1 - 2]))))) == ((+(var_1))))))));
        arr_14 [(signed char)8] = ((/* implicit */long long int) max((((int) min((arr_8 [(short)11]), (((/* implicit */unsigned short) var_9))))), (arr_0 [i_1 - 2] [(unsigned short)3])));
        arr_15 [i_1] [i_1] = ((/* implicit */short) var_8);
    }
    /* LoopNest 2 */
    for (long long int i_2 = 3; i_2 < 21; i_2 += 4) 
    {
        for (int i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_4 = 2; i_4 < 24; i_4 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 24; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            {
                                arr_28 [i_2] [i_3] [i_4 + 1] [i_4 - 2] [i_5] [i_3] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) var_6))))) > (var_2)));
                                arr_29 [i_3] [i_3] [i_3] [i_5] = ((/* implicit */unsigned long long int) var_1);
                                arr_30 [i_2] [i_5] = ((/* implicit */long long int) var_0);
                                arr_31 [i_2] [i_2] [i_2] [i_2 + 1] [i_2] [i_3] [i_2] = ((/* implicit */_Bool) ((((arr_16 [i_4 - 1]) ? (var_3) : (arr_27 [i_2] [i_3] [19LL] [i_2] [i_3]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16383)))));
                                arr_32 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) (+(var_1)));
                            }
                        } 
                    } 
                    arr_33 [i_3] [i_3] [i_4] = ((/* implicit */long long int) (short)16383);
                    arr_34 [i_4] [i_3] [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) var_5)) % (((/* implicit */int) var_4))));
                }
                arr_35 [i_3] [i_2] [i_3] = ((/* implicit */unsigned short) max((max((arr_22 [i_3] [i_3] [i_3]), (((/* implicit */unsigned long long int) (-(var_1)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) % (((/* implicit */int) var_5)))))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_8)))))))) - (var_1)));
    var_12 = ((/* implicit */unsigned short) (+(((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) != (var_1))))) - (var_1)))));
}
