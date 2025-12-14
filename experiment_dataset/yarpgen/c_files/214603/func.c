/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214603
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
    for (signed char i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */long long int) var_4);
                arr_6 [i_1 - 1] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(arr_0 [i_1 - 1]))))));
                var_13 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_1 - 1]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_14 = ((/* implicit */long long int) arr_12 [i_3] [i_2]);
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_4 = 1; i_4 < 13; i_4 += 1) /* same iter space */
                {
                    arr_17 [i_2] [i_2] [i_2] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)224)) > (((((/* implicit */_Bool) (unsigned char)108)) ? (((/* implicit */int) (unsigned char)195)) : (((/* implicit */int) (signed char)-84))))));
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (+(var_11))))));
                    arr_18 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)98)) ? (((((/* implicit */_Bool) arr_16 [i_4] [11U] [i_2] [i_2])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_8 [i_2] [i_2])))) : (((((var_11) + (2147483647))) >> (((((/* implicit */int) arr_12 [i_2] [i_3])) - (5418)))))));
                    arr_19 [(unsigned short)2] [i_3] [12U] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_3] [i_3] [i_4 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2] [i_3] [i_4]))) : (((unsigned int) var_10))));
                }
                /* vectorizable */
                for (long long int i_5 = 1; i_5 < 13; i_5 += 1) /* same iter space */
                {
                    arr_24 [i_2] [i_2] [i_5] [i_3] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_10 [i_3]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 2; i_6 < 15; i_6 += 4) 
                    {
                        for (unsigned char i_7 = 2; i_7 < 15; i_7 += 2) 
                        {
                            {
                                arr_29 [(signed char)4] [i_7] [i_7] [i_7] [i_7 - 1] = ((long long int) ((arr_2 [i_2]) % (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [i_3])))));
                                arr_30 [i_7] [i_6] [i_5 + 2] [i_3] [i_2] = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)9))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned short) (+(((unsigned int) arr_5 [i_2] [i_3] [i_5]))));
                    var_17 = ((/* implicit */signed char) (-(arr_1 [i_3])));
                }
                /* vectorizable */
                for (long long int i_8 = 1; i_8 < 13; i_8 += 1) /* same iter space */
                {
                    arr_34 [i_2] [i_3] [i_8] = ((/* implicit */signed char) arr_26 [i_8 + 2] [i_8 + 1] [i_8 + 2] [i_8 + 2]);
                    var_18 = ((/* implicit */long long int) min((var_18), (((((/* implicit */_Bool) arr_33 [i_8 - 1])) ? (((/* implicit */long long int) arr_33 [i_8 - 1])) : (arr_23 [i_2] [i_8 + 1] [i_8] [i_2])))));
                }
                var_19 += ((/* implicit */long long int) max((arr_11 [i_2] [i_2] [i_3]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_2])))))));
            }
        } 
    } 
}
