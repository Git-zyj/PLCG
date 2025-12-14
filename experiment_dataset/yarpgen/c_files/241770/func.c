/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241770
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned int) min((((((/* implicit */int) var_4)) / (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))))))) < (((((/* implicit */_Bool) var_2)) ? (max((3182003904U), (((/* implicit */unsigned int) 1122433020)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_3)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_13 = (((((~(((/* implicit */int) arr_4 [i_0])))) >= (((arr_0 [i_0]) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_2 [i_0] [(signed char)12])))))) ? ((-(((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_1]) : (arr_3 [i_0]))))) : ((~(arr_3 [i_0]))));
                /* LoopNest 3 */
                for (signed char i_2 = 3; i_2 < 10; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_13 [i_2] [i_0] [12U] [i_0] [i_2] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_0] [i_2] [i_0]))))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_3])) : (((/* implicit */int) arr_4 [i_1])))) : (((((/* implicit */_Bool) arr_1 [i_4])) ? (arr_10 [(signed char)0] [i_3] [i_2] [i_2] [10U] [i_0]) : (((/* implicit */int) arr_0 [(unsigned short)9])))))), (max((((/* implicit */int) arr_7 [11] [i_0] [i_2 - 3])), ((-(((/* implicit */int) (unsigned short)63518))))))));
                                var_14 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2018)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (signed char)-76))))) ? (((((/* implicit */_Bool) arr_2 [i_1] [3])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2]))))) : (arr_9 [i_2 + 2] [i_1] [i_2 + 2] [i_1]))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(signed char)3] [i_0])) ? (((((/* implicit */int) arr_2 [i_0] [i_0])) >> (((((/* implicit */int) arr_4 [i_0])) + (51))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])) : (arr_10 [11] [i_0] [i_0] [i_1] [i_1] [i_1])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_9 [i_0] [i_0] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1] [i_1])))))) ? ((-(arr_10 [i_1] [i_1] [i_0] [(signed char)10] [i_1] [i_1]))) : ((+(((/* implicit */int) arr_4 [i_0])))))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? ((+(((/* implicit */int) arr_5 [i_1])))) : (((arr_11 [i_1] [i_1] [i_0] [(signed char)6] [i_1] [i_0]) ? (((/* implicit */int) arr_12 [(short)8] [(short)8] [i_1] [(short)8] [i_1])) : (((/* implicit */int) arr_7 [i_0] [(short)3] [i_0]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        for (short i_6 = 3; i_6 < 17; i_6 += 4) 
        {
            {
                arr_19 [i_5] [i_5] [i_5] |= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)63525)), (1122433020)))) ? (((arr_15 [i_6]) ^ (arr_15 [i_6]))) : ((~(arr_17 [i_5] [i_5] [i_5])))))));
                arr_20 [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((4294967295U), (((/* implicit */unsigned int) (signed char)106))))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) arr_17 [(short)6] [(short)6] [(short)6])) && (((/* implicit */_Bool) arr_15 [i_5]))))))) : (((((/* implicit */_Bool) arr_16 [i_6 - 2] [i_6])) ? (((/* implicit */int) arr_16 [i_6 - 1] [i_6])) : (((/* implicit */int) arr_16 [i_6 - 3] [i_6]))))));
                var_15 = max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_16 [i_5] [i_6]))))), (((((/* implicit */_Bool) (+(arr_18 [i_5])))) ? (arr_15 [i_6]) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_16 [i_5] [i_6]))))))));
            }
        } 
    } 
    var_16 = var_0;
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((var_11) * (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32755)) ? (((/* implicit */int) (signed char)-121)) : (1483063180)))) * (((var_5) + (var_11))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_9) > (((/* implicit */int) var_8)))))) != ((+(var_11)))))))));
}
