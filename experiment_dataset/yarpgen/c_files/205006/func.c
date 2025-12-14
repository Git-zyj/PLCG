/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205006
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
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    var_10 &= var_4;
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_0]))) ? (((((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_0 + 1])) ? (1747104561U) : (min((arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1]), (4178462222U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0 + 1] [i_2] [i_3] [i_1 - 3] [i_3] [i_0])) ? ((~(((/* implicit */int) arr_2 [i_0] [8U])))) : (((/* implicit */int) (short)-18028)))))));
                                arr_15 [i_0 + 2] [i_3] [i_0 + 2] [i_2] [i_3] [i_3] [i_3] = max((((unsigned char) max(((short)-3790), ((short)3788)))), (((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_0 - 2] [i_0 + 1] [i_0])) > (((/* implicit */int) (short)25516))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (unsigned char i_5 = 1; i_5 < 11; i_5 += 2) 
                {
                    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned int) arr_17 [i_1 + 1] [i_1 - 3] [i_1]);
                            arr_22 [i_6] [i_1] [i_6] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_1 - 2] [i_6])) && (((/* implicit */_Bool) (unsigned char)220)))))) > (arr_11 [i_5 - 1] [i_5] [i_5] [i_5 + 1] [i_5] [i_5 + 1])));
                        }
                    } 
                } 
                var_12 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_1 - 2] [i_1 + 2] [i_0] [i_0 + 1])) ? (arr_16 [7U] [i_1 - 2] [i_0 + 1] [i_0 + 2]) : (arr_16 [i_1 + 1] [i_0 - 1] [(unsigned char)5] [i_0 + 1])))) ? ((-(arr_16 [(unsigned char)10] [(unsigned char)10] [i_0 + 2] [i_0 + 1]))) : (((((/* implicit */_Bool) arr_16 [i_1 + 1] [i_1 + 2] [i_0 + 2] [i_0 + 2])) ? (arr_16 [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_1]) : (arr_16 [i_0 + 2] [i_0 + 2] [i_0 - 2] [i_0 + 1])))));
            }
        } 
    } 
    var_13 += ((/* implicit */unsigned int) var_3);
}
