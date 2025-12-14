/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220581
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
    var_13 = ((/* implicit */signed char) max((((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_12)), (var_5)))) ? (((/* implicit */int) max(((short)12760), (var_0)))) : (((/* implicit */int) var_4)))), (((/* implicit */int) ((((/* implicit */_Bool) ((var_11) ? (-627120381) : (((/* implicit */int) var_11))))) && (((/* implicit */_Bool) ((((((/* implicit */int) var_0)) + (2147483647))) >> (((var_1) - (517523387)))))))))));
    var_14 = var_12;
    var_15 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        arr_9 [i_3] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_2 - 2]))));
                        arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) min((((/* implicit */int) var_6)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_2 [i_0 - 3])) : ((+(var_3)))))));
                        arr_11 [i_0] [i_2] [i_0] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_3])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))) : (2119345300U)));
                        arr_12 [i_0] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (arr_6 [i_2] [i_2 - 2] [i_0 - 4] [i_0 - 3]) : (arr_6 [7ULL] [i_2 - 2] [i_0 + 1] [i_0 - 4]))), (max((((/* implicit */int) var_11)), (((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */int) var_2))))))));
                        arr_13 [i_0] [i_1] [i_1] [i_3] [(signed char)7] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) min((var_7), (((/* implicit */int) (short)-7372))))) ? (arr_8 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                    }
                    for (int i_4 = 4; i_4 < 11; i_4 += 4) 
                    {
                        arr_16 [i_0] [i_1] = max((((/* implicit */unsigned long long int) -4879133328660748518LL)), (max((((((/* implicit */_Bool) arr_8 [(unsigned char)0] [i_1])) ? (6591885660265285792ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-23))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */long long int) arr_7 [i_1] [i_1])) : (-4879133328660748513LL)))))));
                        arr_17 [i_0] [i_1] [i_1] [i_4] [i_4] [i_4 - 2] = ((/* implicit */long long int) max((((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0 - 2] [i_2] [(unsigned short)5] [i_2 + 1] [i_4 + 1] [i_1]))) <= (6591885660265285792ULL)))), (arr_1 [i_2 - 2])));
                    }
                    arr_18 [i_2] [i_1] = ((/* implicit */signed char) min(((((-(((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0])))) % (arr_7 [i_2] [i_2]))), (((/* implicit */int) min((var_2), (((/* implicit */unsigned short) ((short) arr_1 [(_Bool)1]))))))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            {
                                arr_24 [i_6] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_6 [i_0] [i_1] [i_2] [i_2 + 1]) - (arr_6 [i_5] [i_1] [i_2 - 2] [i_2 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (max(((-(4961685567635862383ULL))), (((/* implicit */unsigned long long int) arr_2 [i_0 + 1]))))));
                                arr_25 [i_0] [i_0 - 3] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_4 [i_0 - 2] [i_0 - 1]), (arr_4 [i_0 - 3] [i_0 - 4])))) ? (((((/* implicit */int) arr_4 [i_0 - 4] [i_0 - 4])) + (-1203642972))) : (((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0 - 4])) ? (((/* implicit */int) arr_4 [i_0 - 2] [i_0 + 1])) : (((/* implicit */int) var_9))))));
                                arr_26 [i_0] [i_2] [i_2] [(short)3] [i_1] = (-(((min((((/* implicit */long long int) arr_22 [i_1] [i_1] [i_2] [i_5] [i_2])), (4879133328660748519LL))) | (((/* implicit */long long int) min((((/* implicit */int) arr_23 [i_1])), (var_7)))))));
                            }
                        } 
                    } 
                    arr_27 [i_0] [i_0] [i_2] [i_0] |= ((/* implicit */_Bool) var_0);
                }
            } 
        } 
    } 
}
