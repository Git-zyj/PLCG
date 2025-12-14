/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224375
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
    var_13 = ((/* implicit */int) var_12);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 24; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_15 [i_2] [i_1] [i_1] [i_2] [i_4] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 250360085U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))) : (arr_5 [i_1] [(signed char)16])))) ? (arr_5 [i_3] [i_1 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                                arr_16 [i_4] [i_2] [(short)20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_1 [i_1 - 2] [i_1 - 1]), ((short)-27628)))) ? (min((((/* implicit */long long int) arr_1 [i_0] [i_1 - 1])), (var_4))) : (((/* implicit */long long int) ((/* implicit */int) min((var_6), (((/* implicit */unsigned short) arr_1 [i_1] [i_1 + 1]))))))));
                                arr_17 [i_4] [(unsigned char)3] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) min(((short)27600), (((/* implicit */short) (_Bool)0))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 2; i_5 < 21; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            {
                                arr_23 [i_2] [i_1] [(short)23] [i_2] [i_2] [i_1] [i_1] = (short)27627;
                                arr_24 [i_0] [i_2] [i_2] [i_2] [i_5] [i_6] = ((/* implicit */short) arr_4 [i_2] [i_0]);
                                arr_25 [i_2] [i_0] [i_2] [i_2] = ((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_5])) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_0])) ? (arr_7 [i_2] [i_2] [i_2]) : (((/* implicit */long long int) 1550957572)))) : (((/* implicit */long long int) var_8)));
                                arr_26 [i_0] [(unsigned short)21] [i_0] [(unsigned char)23] [i_2] [i_0] = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)21))) : (((long long int) (_Bool)1)));
                            }
                        } 
                    } 
                    arr_27 [i_0] [i_2] [(unsigned char)10] [i_2] = min((arr_12 [(unsigned short)0] [(unsigned short)0] [i_1] [i_1 - 2]), (min((((/* implicit */int) (_Bool)1)), (var_8))));
                    var_14 = (unsigned short)52662;
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
}
