/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43523
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
    var_19 |= ((/* implicit */short) (unsigned short)14306);
    var_20 += var_12;
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                var_21 *= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_5 [i_0] [i_0 + 4] [i_0 - 1])) ? (var_17) : (((/* implicit */long long int) 4294967295U)))), (((/* implicit */long long int) min((arr_5 [i_0 + 4] [i_1 - 1] [i_0 + 2]), (arr_5 [i_1 + 1] [i_0 + 2] [i_0]))))));
                var_22 = ((long long int) min((var_6), (((/* implicit */long long int) min((arr_0 [i_0 + 1]), (arr_5 [i_0] [i_1] [i_1]))))));
                var_23 = ((/* implicit */unsigned char) ((short) var_17));
                var_24 += ((/* implicit */short) ((_Bool) max((min((var_4), (((/* implicit */short) arr_3 [(short)8] [(short)8])))), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)172)) && (arr_3 [(unsigned char)4] [(unsigned char)4])))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    var_25 *= ((/* implicit */unsigned long long int) min((max((arr_4 [i_0] [i_0 - 1] [i_1 - 1]), (arr_4 [i_0] [i_0 + 4] [i_1 - 1]))), (max((arr_4 [i_0] [i_0 + 1] [i_1 - 1]), (arr_4 [i_0] [i_0 + 4] [i_1 + 1])))));
                    var_26 = max((((short) (!(((/* implicit */_Bool) var_15))))), (min((((short) arr_6 [i_1])), (arr_5 [i_0 - 2] [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        for (short i_4 = 4; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_17 [i_0] [i_1] [i_1] = ((max((arr_14 [i_0 - 3] [i_0 - 1] [i_1] [i_1] [i_1 + 1] [i_2] [i_2]), (((((/* implicit */_Bool) arr_12 [i_4] [i_2])) ? (arr_16 [i_4 - 4] [i_1] [i_2] [i_1] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))) < (arr_14 [i_1] [i_1] [i_1] [i_1 - 1] [i_1] [i_1] [i_1 + 1]));
                                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((long long int) (short)23719)))));
                                arr_18 [i_1] [i_1 + 1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_15);
                            }
                        } 
                    } 
                    arr_19 [i_2] [(short)6] [i_1] [i_2] = ((((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1 - 1] [i_1 + 1] [i_1] [i_1]))) - (var_1))) - (((long long int) var_10)));
                    var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19086))) : (var_10))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_13 [i_0 + 2] [i_0])), (arr_4 [i_0] [i_1] [i_2])))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [(short)11] [i_0 - 3] [i_0 + 2] [i_1 - 1] [i_1 - 1] [i_1 - 1]))) == (max((((/* implicit */unsigned int) arr_11 [i_2] [i_1] [i_1 + 1] [i_0])), (1933403020U)))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_1] [i_1 + 1] [i_1] [i_0] [i_0])) ? (1747770597279092977LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 2; i_5 < 10; i_5 += 1) 
    {
        for (short i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_7 = 2; i_7 < 12; i_7 += 3) 
                {
                    for (short i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        for (long long int i_9 = 0; i_9 < 13; i_9 += 3) 
                        {
                            {
                                var_29 &= ((/* implicit */unsigned int) ((long long int) max((arr_28 [i_5 + 1] [i_5 + 2] [i_5 + 3] [i_7 + 1]), (((/* implicit */long long int) arr_30 [i_5] [i_5] [i_5])))));
                                var_30 = ((/* implicit */unsigned short) min((arr_21 [i_6]), (((/* implicit */long long int) ((short) var_2)))));
                                var_31 = ((/* implicit */_Bool) min((var_31), (((max(((+(-1LL))), (min((((/* implicit */long long int) arr_29 [i_9] [i_8] [i_5 + 1] [i_7] [i_6] [i_6] [i_5 + 1])), (3989683086680867245LL))))) < (((/* implicit */long long int) max((arr_26 [i_7] [i_6] [i_7 - 2] [i_8]), (arr_26 [i_8] [i_6] [i_7 - 2] [i_8]))))))));
                            }
                        } 
                    } 
                } 
                arr_32 [i_5] [i_6] = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) var_14)), (var_6))), (((/* implicit */long long int) max((var_15), (((/* implicit */unsigned int) arr_23 [i_5 + 3] [i_5 + 1] [i_5 - 1])))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_10 = 4; i_10 < 12; i_10 += 1) 
                {
                    var_32 = ((/* implicit */unsigned char) (short)-8328);
                    arr_35 [i_10] [i_6] [i_6] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_5 + 1] [i_6])) ? (((/* implicit */long long int) ((((/* implicit */int) (short)18425)) & (((/* implicit */int) var_3))))) : (9223372028264841216LL))))));
                }
                var_33 = ((/* implicit */unsigned int) (unsigned short)52465);
            }
        } 
    } 
}
