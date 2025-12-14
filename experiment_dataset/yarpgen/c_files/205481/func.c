/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205481
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) min((arr_10 [i_1 - 1]), (min((arr_10 [i_1 + 2]), (((/* implicit */unsigned int) var_8))))));
                        arr_12 [i_0] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) arr_1 [i_0]);
                        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_2 - 1] [i_1 + 4]))));
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) 12)) ? (((/* implicit */int) (short)16757)) : (((/* implicit */int) (short)-16757)))))));
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        arr_15 [i_0] [i_1 - 1] [i_0] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_0] [(_Bool)1] [i_0])) << (((((/* implicit */int) (signed char)-105)) + (109)))))) ? (((((/* implicit */int) arr_13 [i_0])) << (((((/* implicit */int) var_15)) - (42764))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))) << ((((-(-7197278020462884178LL))) - (7197278020462884174LL)))));
                        arr_16 [i_0] = ((/* implicit */signed char) ((var_5) & (((/* implicit */int) (unsigned char)14))));
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)-1047)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_7 [i_0] [i_1 + 1] [i_0] [i_0]))))))) ? (((/* implicit */int) arr_9 [i_2] [i_4] [i_2] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_2 + 1] [i_4 - 1])))))));
                    }
                    for (unsigned long long int i_5 = 3; i_5 < 9; i_5 += 4) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_6 = 2; i_6 < 8; i_6 += 4) 
                        {
                            var_22 = (-((~(arr_10 [i_6 - 1]))));
                            arr_23 [i_2] [i_2 - 2] [i_0] = ((/* implicit */signed char) arr_18 [i_0] [i_1 + 2] [i_0] [i_6 - 1]);
                        }
                        for (signed char i_7 = 4; i_7 < 8; i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_0] [i_1] [i_2 - 2] [i_5] [(short)1] [i_2 - 2] [i_0] = (((!(((/* implicit */_Bool) arr_5 [5LL] [i_1 + 4] [i_2])))) ? ((+(max((arr_4 [i_0] [i_0] [i_5 - 1]), (((/* implicit */long long int) 1422391878)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_5 - 2] [i_2])) ? (((/* implicit */int) var_12)) : (var_0)))));
                            arr_27 [i_0] [i_0] = (~(((/* implicit */int) ((((/* implicit */int) (signed char)-97)) > ((+(((/* implicit */int) (signed char)-105))))))));
                        }
                        for (signed char i_8 = 4; i_8 < 8; i_8 += 1) /* same iter space */
                        {
                            arr_31 [i_0] [i_1] [i_1] [i_1] [i_1 + 2] = ((/* implicit */long long int) (-(min((arr_14 [i_0] [i_1 + 3] [i_2] [i_8 + 1] [i_8 - 2]), (arr_14 [i_0] [i_1 + 4] [i_2] [i_5 + 2] [i_8 - 3])))));
                            arr_32 [i_0] [i_0] [i_5 - 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1422391882)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)1074))));
                        }
                        arr_33 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) 5267001859719327261ULL);
                        var_23 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_4 [i_0] [i_2 - 1] [i_5 + 1])) ? (((/* implicit */int) arr_13 [i_0])) : (((/* implicit */int) arr_7 [i_2 - 2] [1U] [i_0] [i_2 + 1])))));
                    }
                    var_24 &= ((/* implicit */signed char) ((((/* implicit */unsigned int) 1422391873)) | (arr_10 [i_0])));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */signed char) max((var_9), (((/* implicit */unsigned int) var_2))));
    var_26 = ((/* implicit */unsigned int) var_1);
}
