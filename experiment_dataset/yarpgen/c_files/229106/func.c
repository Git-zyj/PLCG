/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229106
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
    var_13 = ((/* implicit */unsigned int) 1860110837);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (int i_4 = 2; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_0] [11LL] [i_3] [i_4 - 1] = ((/* implicit */unsigned char) ((min((((/* implicit */int) var_6)), (arr_12 [i_4] [i_0] [i_4 + 3] [i_4 - 2] [i_4 - 1]))) / (((/* implicit */int) (((+(((/* implicit */int) (unsigned short)19704)))) >= (((/* implicit */int) var_2)))))));
                                var_14 = ((/* implicit */int) min((var_14), ((~(var_11)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 2; i_5 < 22; i_5 += 1) 
                    {
                        for (signed char i_6 = 1; i_6 < 22; i_6 += 2) 
                        {
                            {
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] [i_6] |= ((/* implicit */unsigned char) max(((-(((/* implicit */int) ((1641101063U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4095)))))))), ((-(((/* implicit */int) arr_21 [i_5 + 2] [i_5] [i_5 + 1] [i_5] [i_5 + 2] [i_5] [i_5 + 2]))))));
                                arr_23 [i_6 + 1] [i_6] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) (-(119518992U)));
                                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_0] [i_2]))));
                            }
                        } 
                    } 
                    arr_24 [i_0] [i_1] [i_0] = ((/* implicit */int) var_8);
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 25; i_8 += 1) 
                        {
                            {
                                arr_31 [i_0] [i_0] = ((/* implicit */unsigned int) arr_2 [i_1] [i_0]);
                                var_16 &= ((/* implicit */unsigned char) min((arr_21 [i_0] [i_1] [i_2] [i_7] [i_7] [i_8] [i_8]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_2] [i_1])) || (((/* implicit */_Bool) var_10)))))));
                                arr_32 [i_0] [i_0] [i_0] [16U] [i_7] [i_8] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_1] [i_0])) : (((/* implicit */int) (unsigned short)4327)))) | (((/* implicit */int) min(((unsigned short)65527), (var_3))))));
                                arr_33 [i_0] [i_0] = ((/* implicit */int) (unsigned char)171);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 636125301U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)15360)))))))) ? (((/* implicit */long long int) var_5)) : (var_12)));
}
