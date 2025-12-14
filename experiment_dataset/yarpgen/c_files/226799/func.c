/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226799
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
    var_20 ^= ((/* implicit */unsigned char) var_1);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (min((((/* implicit */unsigned long long int) arr_3 [i_2])), (arr_4 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [6ULL]))))))) : (arr_0 [i_0]));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_21 += ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_13 [i_4 - 1] [i_0] [i_2] [i_1] [12])))) ? (((/* implicit */int) ((1348307127162578382ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) max((arr_12 [i_4 - 1] [i_4 - 1] [i_2] [i_4 - 1] [i_4] [i_4]), (arr_13 [i_4 - 1] [i_1] [13ULL] [i_3] [i_2]))))));
                                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_12)) / (arr_14 [i_0] [i_1] [i_2] [i_2] [i_2]))))));
                                arr_16 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_11 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4]) ? (((/* implicit */int) arr_11 [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4])) : (((/* implicit */int) arr_11 [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4] [11ULL]))))) ? (((arr_11 [i_4 + 1] [i_4 + 1] [i_4] [i_4] [i_4]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4 + 1] [i_4 + 1] [i_4] [i_4] [i_4 + 1]))) : (var_18))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_4 - 1] [i_4 + 1] [2ULL] [i_4 - 1] [i_4])))))));
                                var_23 |= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))));
                            }
                        } 
                    } 
                    var_24 ^= ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) var_17)), (var_14))) & (((arr_14 [i_0] [i_1] [i_2] [i_0] [i_1]) & (((/* implicit */unsigned long long int) var_0))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 17; i_5 += 2) 
    {
        for (unsigned long long int i_6 = 1; i_6 < 15; i_6 += 4) 
        {
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_24 [i_5] [i_5] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_23 [i_5] [i_6] [i_7]))))) ? (((((/* implicit */_Bool) arr_20 [i_5] [i_6 + 2] [i_5])) ? (((/* implicit */int) arr_23 [i_5] [i_6] [i_7])) : (((/* implicit */int) arr_17 [i_5] [i_6])))) : (arr_18 [i_5] [i_5])))) ? (((((/* implicit */_Bool) max((arr_17 [i_5] [i_6]), (((/* implicit */unsigned short) (unsigned char)73))))) ? (max((((/* implicit */unsigned long long int) var_3)), (arr_21 [i_5] [i_6 - 1] [i_7]))) : ((~(arr_19 [i_7 - 1] [i_7 - 1]))))) : (((/* implicit */unsigned long long int) (-((+(var_10)))))));
                    var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */_Bool) 9681977108102299115ULL)) ? (8U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53268))))))));
                    var_26 = ((/* implicit */long long int) (+(((/* implicit */int) arr_22 [i_5] [i_5] [i_5] [i_5]))));
                    var_27 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_21 [i_7 - 1] [i_7 - 1] [i_7 - 1])) ? (arr_21 [i_7 - 1] [i_7 - 1] [i_7 - 1]) : (arr_21 [i_7 - 1] [i_7] [i_7 - 1]))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) | (arr_21 [i_7 - 1] [i_7 - 1] [i_7])))));
                    arr_25 [i_5] [i_7] [i_7] [i_6 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_5] [i_5])) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)178))))) ? (((((/* implicit */_Bool) arr_23 [i_5] [i_6] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_5] [i_6 + 2] [i_6] [i_7]))) : (var_0))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)175)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_5] [i_5] [i_5]))))))))));
                }
            } 
        } 
    } 
}
