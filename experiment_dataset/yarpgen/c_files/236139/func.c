/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236139
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
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_1] [i_0 + 2] [i_0 + 2] = ((/* implicit */short) ((((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65512))) >= (arr_1 [i_0 + 2]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_8 [i_1] [i_1]), (((/* implicit */unsigned short) arr_7 [i_0] [i_1 + 1] [i_3] [8])))))) : (arr_9 [i_0] [i_0] [i_0] [i_0]))) | (((/* implicit */unsigned long long int) (~(((var_3) | (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))));
                                var_13 += ((/* implicit */short) (+(((/* implicit */int) (unsigned short)32))));
                                arr_13 [i_1] [i_1] [(_Bool)1] [(_Bool)1] [i_4] = arr_4 [i_4];
                                arr_14 [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9936))) | (min((arr_3 [i_0 + 1] [i_0 + 1] [i_3]), (max((((/* implicit */unsigned long long int) arr_11 [i_0 - 1] [(short)3] [i_2] [i_3] [i_4] [i_1] [(signed char)5])), (arr_9 [i_0] [i_0] [i_0] [i_0])))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */int) max((var_14), ((+(max((((/* implicit */int) (unsigned short)32885)), (((((/* implicit */int) (short)10784)) - (((/* implicit */int) (signed char)49))))))))));
                    var_15 ^= ((/* implicit */unsigned short) max(((-(((arr_9 [i_0] [i_1 - 3] [i_2] [i_1]) / (((/* implicit */unsigned long long int) arr_1 [i_2])))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_4 [i_2])), (((arr_11 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_2] [i_0 - 1]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) (-(((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 14; i_5 += 4) 
    {
        for (signed char i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 14; i_8 += 2) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 14; i_9 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) arr_20 [i_6] [i_6]);
                                arr_30 [i_9] [i_8] [i_5] [i_6] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) var_4)) + (((/* implicit */int) var_6))))), (min((arr_26 [i_5] [i_5] [i_5] [(short)6]), (((/* implicit */long long int) arr_7 [i_6] [i_7] [i_8] [(_Bool)1]))))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)253))) | (-6179758400624801863LL))) : (((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */long long int) (unsigned short)9930)), (arr_20 [i_6] [(unsigned short)4]))) <= (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_9] [i_8])))))))));
                                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)32954))))), (arr_9 [i_6] [i_6] [i_6] [i_6])))) || (((/* implicit */_Bool) arr_1 [i_6])))))));
                                var_19 = ((/* implicit */short) max((arr_20 [i_5] [i_6]), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (18446744073709551611ULL)))) ? (((/* implicit */int) (unsigned short)9918)) : (((/* implicit */int) arr_24 [i_8] [i_8] [i_8])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_10 = 1; i_10 < 12; i_10 += 1) 
                    {
                        for (long long int i_11 = 0; i_11 < 14; i_11 += 4) 
                        {
                            {
                                var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((arr_1 [i_6]) << (((((/* implicit */int) arr_25 [i_5] [i_6] [i_5] [i_10 + 2])) - (14937)))))), (arr_9 [(unsigned short)10] [i_10 + 1] [i_10 + 1] [i_10 - 1])))) ? (((arr_26 [i_5] [i_10 - 1] [i_7] [i_10]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)98))))) : (arr_18 [(unsigned short)12])));
                                var_21 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_35 [i_11] [i_10] [i_7] [i_6] [i_5] [i_5])) ? (((/* implicit */long long int) ((unsigned int) var_4))) : (min((arr_18 [i_7]), (((/* implicit */long long int) arr_19 [i_5] [8U])))))), (((/* implicit */long long int) min((min((((/* implicit */int) arr_6 [i_10] [i_10])), (-1608268086))), (((((/* implicit */int) arr_27 [i_5])) << (((arr_3 [i_5] [i_6] [i_6]) - (8069095112921332385ULL))))))))));
                                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_10 + 2] [i_10 - 1] [i_10 - 1] [i_10 + 2] [i_10 + 2] [i_10 + 1])) ? (((/* implicit */int) arr_33 [i_10] [i_10 + 2] [i_10 + 1] [i_10 + 2] [i_10 - 1] [i_10])) : (((/* implicit */int) arr_33 [i_10] [i_10 + 2] [i_10 + 2] [i_10 - 1] [i_10 + 2] [i_10]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_33 [i_10] [i_10 + 2] [i_10 + 1] [i_10 + 2] [i_10 + 1] [i_10])) >= (((/* implicit */int) (signed char)6)))))) : (max((((/* implicit */unsigned long long int) arr_33 [i_10] [i_10 + 2] [i_10 - 1] [i_10 + 1] [i_10 + 2] [i_10])), (arr_35 [i_10 + 1] [i_10 - 1] [i_10 - 1] [i_10 + 2] [i_10 + 1] [i_10 + 1])))));
                                var_23 = ((/* implicit */signed char) min((min((-1488769612156541909LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_23 [i_5] [8U]))))))), (((/* implicit */long long int) (unsigned short)32635))));
                            }
                        } 
                    } 
                }
                var_24 |= ((/* implicit */unsigned short) min((arr_18 [i_5]), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-14)) || (((/* implicit */_Bool) -1809920709))))), (((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)189))))))))));
            }
        } 
    } 
}
