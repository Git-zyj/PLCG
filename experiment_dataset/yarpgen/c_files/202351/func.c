/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202351
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
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) min((((((/* implicit */int) arr_4 [i_0 - 3] [i_0])) + (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)-12145)))))), (((/* implicit */int) arr_5 [i_0 + 1] [i_1])))))));
                arr_6 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) min((arr_3 [i_0]), (arr_3 [i_0]))))));
                var_17 += ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_0 [i_0 - 2]))))));
            }
        } 
    } 
    var_18 = var_4;
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        for (short i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) arr_8 [i_2]))));
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned short) (short)-18186)), ((unsigned short)65535)))) >> (((min((((/* implicit */unsigned long long int) arr_12 [i_4] [i_4 - 2] [i_4 - 2] [i_6])), (arr_11 [i_2] [9LL] [i_5] [(short)10]))) - (8040222116556913525ULL)))));
                                arr_21 [i_2] [(unsigned short)4] [i_4] [i_5] [i_4] = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) max((arr_20 [(signed char)2] [i_3] [i_4 + 1] [i_3] [i_6] [5U]), (((/* implicit */unsigned int) (short)18201))))), (var_4))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_2] [i_6] [i_4 - 2] [i_5] [(signed char)10])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_2 [i_6]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((short) (unsigned short)37073))))))));
                                arr_22 [i_2] [i_4] &= ((/* implicit */_Bool) ((((_Bool) arr_13 [i_3] [i_4 + 1] [(unsigned char)8] [i_5] [i_6])) ? (((((/* implicit */_Bool) arr_13 [(_Bool)1] [i_4 + 1] [(_Bool)1] [(_Bool)1] [i_6])) ? (arr_13 [i_4] [i_4 + 1] [i_4 + 1] [i_4 - 2] [i_6]) : (arr_13 [i_3] [i_4 + 1] [i_5] [0U] [(unsigned char)10]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_13 [i_2] [i_4 + 1] [(unsigned char)8] [3U] [i_4]) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))))));
                            }
                        } 
                    } 
                    arr_23 [i_2] [(unsigned short)7] [i_2] [i_2] = ((/* implicit */short) (+((-(((/* implicit */int) ((((/* implicit */_Bool) (signed char)0)) && (((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_4])))))))));
                    var_21 *= ((/* implicit */unsigned char) var_14);
                    arr_24 [9ULL] [i_3] [9ULL] |= ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) arr_10 [i_2] [i_4 - 1] [i_4])) > (((/* implicit */int) arr_10 [8] [i_4 - 2] [8]))))), (((((/* implicit */int) (short)18185)) * (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
}
