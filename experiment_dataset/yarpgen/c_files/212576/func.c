/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212576
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
    for (long long int i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    for (signed char i_3 = 3; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) arr_1 [i_2]))));
                            var_18 += ((/* implicit */unsigned short) 262143U);
                        }
                    } 
                } 
                arr_11 [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((arr_5 [i_0] [i_0]), (((/* implicit */unsigned int) 203855040))));
                var_19 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((-832817440) < (((/* implicit */int) (signed char)-107)))))) | (max((((/* implicit */unsigned long long int) max((var_10), (1508445888U)))), (arr_8 [i_0] [i_0] [i_1] [i_1]))));
                var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)21130)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) ((long long int) arr_8 [i_1] [i_1] [(signed char)4] [i_1]))) ? (((/* implicit */int) min(((unsigned short)15), (arr_6 [i_0] [i_1] [i_1 - 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 1; i_4 < 13; i_4 += 2) 
    {
        for (unsigned short i_5 = 2; i_5 < 12; i_5 += 4) 
        {
            {
                arr_18 [i_4 + 1] [i_4 + 1] = ((/* implicit */int) ((((/* implicit */long long int) arr_16 [i_4 + 1] [i_4] [6])) & ((~((~(arr_17 [i_4 - 1])))))));
                var_21 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_14 [i_4] [i_4 - 1]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_6 = 1; i_6 < 17; i_6 += 1) 
    {
        for (int i_7 = 4; i_7 < 17; i_7 += 2) 
        {
            {
                arr_24 [i_7] &= ((/* implicit */long long int) ((((max((((/* implicit */long long int) var_6)), (422187578534982128LL))) + (((/* implicit */long long int) -203855026)))) >= (((/* implicit */long long int) ((/* implicit */int) ((short) arr_23 [i_6 - 1] [i_6 + 1]))))));
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 4) 
                {
                    for (unsigned short i_9 = 0; i_9 < 18; i_9 += 4) 
                    {
                        {
                            arr_32 [i_8] [i_6] [i_8] [i_8] [i_6] [i_6] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (var_3))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_6] [i_6 - 1] [i_6 - 1] [i_6] [i_6 + 1] [i_6 + 1]))))))));
                            var_22 = ((/* implicit */int) min((((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_23 [16] [i_9])) ? (747813523U) : (3547153761U)))))), (1928578239114169685LL)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_10 = 0; i_10 < 18; i_10 += 1) 
                {
                    for (long long int i_11 = 0; i_11 < 18; i_11 += 3) 
                    {
                        {
                            arr_39 [i_6] [6LL] [i_6] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_6] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)34525), (((/* implicit */unsigned short) arr_23 [i_6 - 1] [i_7])))))) : (arr_25 [i_6])))) ? (((((/* implicit */int) arr_37 [i_6] [i_6] [i_6] [i_11])) * (((/* implicit */int) arr_26 [3] [i_11])))) : (((/* implicit */int) ((((/* implicit */int) arr_38 [i_7 + 1] [i_6 + 1] [i_6 - 1] [i_6 - 1])) < (((/* implicit */int) arr_38 [i_7 - 1] [i_6 + 1] [i_6 + 1] [i_6 + 1])))))));
                            arr_40 [i_6] = ((/* implicit */short) (-(((((/* implicit */int) var_14)) * (((/* implicit */int) arr_37 [i_10] [i_6] [i_10] [i_7 - 4]))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((long long int) (~((~(arr_33 [i_6 - 1] [i_7])))))))));
            }
        } 
    } 
}
