/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191315
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [14LL] [i_1])) ? (((/* implicit */int) (short)21468)) : (arr_3 [i_1] [i_0]))) * (((/* implicit */int) ((var_5) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)52168)) <= (0))))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 1; i_2 < 22; i_2 += 4) 
                {
                    arr_7 [i_2] [i_1] = ((/* implicit */short) (~(arr_5 [i_2] [i_2] [i_2] [i_2 - 1])));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned long long int) arr_8 [i_2] [i_2] [i_2]);
                                arr_16 [i_0] [i_1] [i_4] [(unsigned char)13] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) arr_9 [i_0] [i_0] [i_2] [i_3] [i_4 + 1]));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        for (signed char i_6 = 1; i_6 < 21; i_6 += 4) 
                        {
                            {
                                arr_24 [i_2] [i_2] [i_5] = (signed char)-18;
                                arr_25 [i_2] = ((/* implicit */signed char) ((arr_11 [i_1] [i_2 + 1] [i_2] [i_6 - 1]) != (((/* implicit */unsigned long long int) 1768578311))));
                                arr_26 [i_6 + 2] [i_2] [i_2 + 1] [i_2] [17LL] = ((unsigned short) arr_8 [i_0] [i_2] [i_6 + 1]);
                                arr_27 [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) ? (1768578301) : (arr_8 [i_0] [i_2] [0LL]))) << (((((/* implicit */int) arr_14 [i_6] [i_0] [i_2] [i_0] [i_0])) - (131)))));
                                var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (-(((/* implicit */int) arr_15 [i_0] [(unsigned char)20] [i_0] [i_0] [i_0])))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (unsigned short)11718))))));
    /* LoopSeq 2 */
    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) 
    {
        arr_30 [i_7] = ((/* implicit */int) (-(((((var_1) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)118))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)17))) : (4005849965372748624LL)))));
        var_14 = min((((/* implicit */unsigned long long int) (unsigned char)118)), (((((/* implicit */_Bool) arr_3 [i_7] [i_7])) ? (arr_18 [i_7] [(signed char)2] [i_7] [i_7] [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_7] [i_7] [i_7] [i_7] [(signed char)10] [i_7])) ? (((/* implicit */int) arr_15 [i_7] [i_7] [i_7] [i_7] [i_7])) : (((/* implicit */int) arr_15 [i_7] [i_7] [i_7] [i_7] [i_7]))))))));
    }
    for (unsigned short i_8 = 3; i_8 < 23; i_8 += 4) 
    {
        arr_33 [9] = ((/* implicit */short) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (arr_31 [(unsigned short)13] [i_8])))) ? (arr_31 [i_8] [i_8]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))))), (((arr_31 [i_8 - 1] [i_8 - 3]) - (arr_31 [i_8 - 1] [i_8 - 3])))));
        arr_34 [i_8] = ((/* implicit */unsigned char) ((unsigned long long int) min(((~(67108608ULL))), (((unsigned long long int) arr_31 [i_8] [i_8])))));
        arr_35 [i_8 - 2] [i_8 - 2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) (unsigned char)52)))));
    }
}
