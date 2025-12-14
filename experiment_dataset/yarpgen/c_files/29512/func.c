/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29512
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
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (+(18446744073709551610ULL))))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 2]))) : (var_1))));
                /* LoopSeq 4 */
                for (signed char i_2 = 2; i_2 < 11; i_2 += 3) 
                {
                    arr_10 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_0]))));
                    arr_11 [i_0 - 1] [(unsigned char)5] [i_2] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) + ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */int) max((arr_1 [i_1]), (arr_1 [i_1])))) : (((((/* implicit */int) (signed char)99)) << (((511LL) - (489LL))))))), (var_0)));
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 12; i_3 += 2) 
                    {
                        arr_14 [i_2] [i_1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_1 [i_0])))))))) + (((/* implicit */int) ((unsigned short) arr_13 [i_3 + 1] [i_3] [i_3 + 1] [i_2])))));
                        arr_15 [i_2] [1LL] [i_3] = ((((/* implicit */_Bool) ((((((/* implicit */long long int) var_4)) - ((-9223372036854775807LL - 1LL)))) + (((/* implicit */long long int) var_4))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_13 [i_0] [i_0] [i_0 + 1] [(signed char)5]))) ? (((((/* implicit */_Bool) (short)-29478)) ? (arr_12 [i_2] [i_3 - 1] [i_2 + 1] [i_1] [i_2 + 1]) : (((/* implicit */int) arr_9 [i_1] [i_2] [i_2])))) : (((/* implicit */int) (signed char)-42))))) : ((+(((((/* implicit */_Bool) arr_0 [i_0])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))))))));
                    }
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_18 [i_0 - 2] [(_Bool)1] [i_4] |= ((/* implicit */unsigned long long int) arr_2 [i_4]);
                    var_12 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) + (((unsigned long long int) ((((/* implicit */int) (short)29477)) << (((((((/* implicit */int) (signed char)-68)) + (86))) - (15)))))));
                }
                for (unsigned long long int i_5 = 2; i_5 < 12; i_5 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 4) 
                    {
                        arr_25 [i_5] [i_6] [(unsigned char)0] [i_6] = ((/* implicit */unsigned char) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) ((((/* implicit */_Bool) 1252902739)) ? (((/* implicit */int) var_7)) : (-1632945284))))));
                        var_13 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((unsigned int) (unsigned char)73))) ? (max((((/* implicit */int) var_10)), (-1119090400))) : (((/* implicit */int) arr_21 [i_1] [i_5 - 1] [i_6]))))));
                    }
                    var_14 = ((/* implicit */unsigned short) (signed char)-105);
                }
                for (int i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    arr_28 [i_0] [i_7] [i_7] = ((/* implicit */short) (-(max((((/* implicit */int) arr_1 [i_0])), (arr_12 [i_7] [i_7] [4LL] [i_7] [i_7])))));
                    /* LoopNest 2 */
                    for (short i_8 = 1; i_8 < 11; i_8 += 1) 
                    {
                        for (long long int i_9 = 0; i_9 < 13; i_9 += 1) 
                        {
                            {
                                arr_33 [i_7] [i_7] = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) max((arr_16 [i_0 - 2]), (arr_16 [(short)12])))))));
                                var_15 = ((((/* implicit */int) (_Bool)1)) + ((-(((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 2] [i_1])))));
                                arr_34 [i_0] [(unsigned char)2] [i_7] [i_8] [i_8 + 1] = ((((unsigned int) var_3)) + (((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_1 [11U])), (arr_5 [(short)11])))) ? (((/* implicit */unsigned int) 1512216450)) : (((unsigned int) -505LL)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 4) 
                    {
                        for (unsigned char i_11 = 2; i_11 < 9; i_11 += 4) 
                        {
                            {
                                arr_40 [i_0] [i_10] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_11 + 1] [i_11 + 1] [i_0 + 1])) ? (((unsigned long long int) arr_21 [i_0 - 1] [i_0] [i_11 + 4])) : (((/* implicit */unsigned long long int) 4294967295U))));
                                arr_41 [i_7] [i_1] [i_7] [(_Bool)1] [i_1] [(_Bool)1] = (+(((/* implicit */int) var_9)));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) ((int) ((((/* implicit */int) var_7)) + (((/* implicit */int) (_Bool)1)))));
    var_17 |= ((/* implicit */int) (-((((-(-5320887098283223764LL))) << (((((((/* implicit */int) (short)13905)) + (((/* implicit */int) var_10)))) - (14012)))))));
    var_18 = ((/* implicit */short) var_1);
    var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)-29458)), (147409680)))) : (((1961225091314165876ULL) << (((((/* implicit */int) (unsigned char)150)) - (134))))))) + (((/* implicit */unsigned long long int) ((((unsigned int) (short)29457)) + (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
}
