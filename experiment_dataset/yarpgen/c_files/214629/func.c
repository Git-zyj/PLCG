/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214629
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
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */short) ((((arr_2 [i_0] [i_0 - 1]) / (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)23)) ? (((/* implicit */int) arr_0 [i_0])) : (arr_5 [i_1])))))) / (((/* implicit */long long int) ((((((/* implicit */_Bool) 7228476112609918630ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_13))) * (((/* implicit */unsigned int) ((/* implicit */int) var_17))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned char i_3 = 3; i_3 < 18; i_3 += 1) 
                    {
                        {
                            arr_12 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) 2084514361)), (7228476112609918641ULL)));
                            arr_13 [i_3 + 1] [i_1] [(_Bool)1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_2] [i_1]))) : (max((((/* implicit */unsigned long long int) (unsigned char)18)), (11218267961099632976ULL)))));
                            arr_14 [i_0 - 1] [i_0 - 1] [i_1] [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_3 + 2])) * (((((/* implicit */_Bool) arr_0 [i_3 + 4])) ? (((/* implicit */int) arr_0 [i_3 + 2])) : (((/* implicit */int) arr_3 [i_0 + 2]))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
                            {
                                arr_18 [i_0] [i_1] [0U] [i_3 + 4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_17))))) * (7228476112609918639ULL)));
                                arr_19 [i_0] [i_0] [i_0] [i_1] [i_0] [i_3] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)4377)) ? (((/* implicit */int) arr_4 [i_1] [i_1] [i_1])) : (arr_5 [i_1])))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (short)4371))) : (arr_2 [i_1] [i_3])))));
                                arr_20 [i_0] [i_0 + 3] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((unsigned char) arr_0 [i_0 + 3]));
                            }
                        }
                    } 
                } 
                arr_21 [i_0 + 4] [i_1] [i_0] = ((/* implicit */short) max((arr_2 [i_0 - 2] [i_0 + 4]), (((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 1])) ? (arr_2 [i_0 + 4] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 3])))))));
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    for (signed char i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        {
                            arr_27 [i_0] [i_1] [i_0] [18U] [(short)6] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) (+(((/* implicit */int) arr_11 [i_0 + 4])))));
                            arr_28 [i_0] [i_1] [i_5] [i_6] = ((/* implicit */unsigned int) (((-(((unsigned long long int) var_1)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [1LL])))));
                            arr_29 [i_0] [(_Bool)1] [(unsigned short)10] [i_0] [(_Bool)1] [i_6] &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_11 [i_6])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_11 [i_6])))) * (((/* implicit */int) arr_11 [i_5]))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_7 = 2; i_7 < 9; i_7 += 3) 
    {
        arr_32 [i_7] = ((/* implicit */_Bool) ((arr_17 [i_7 + 1] [i_7 + 2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))));
        arr_33 [i_7] = (_Bool)1;
    }
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_14))) ? ((+(((((/* implicit */int) (short)-4393)) / (603697671))))) : ((~(((/* implicit */int) var_15))))));
}
