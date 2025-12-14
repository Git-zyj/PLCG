/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199961
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
    var_19 = var_9;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned int) ((short) var_2))), (min((var_6), (((/* implicit */unsigned int) var_7)))))), (arr_5 [i_2] [i_3 - 1] [i_2])));
                            arr_11 [i_2] [i_1] [i_1] [i_2] [i_3] [i_2] = max((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12))))), (arr_5 [i_2] [i_3] [i_3 + 1]))), (min((((/* implicit */unsigned int) arr_10 [i_2] [i_3 + 1] [i_3 - 1] [i_3 + 1])), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [12U] [i_2] [i_3 + 1]))) : (var_6))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 1; i_4 < 9; i_4 += 1) 
                {
                    for (unsigned char i_5 = 2; i_5 < 12; i_5 += 3) 
                    {
                        {
                            arr_17 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((+(((/* implicit */int) var_3)))) & ((~(((/* implicit */int) var_17))))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_18)), (arr_0 [i_4])))) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [(unsigned char)0])) : ((~(arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : ((~(((/* implicit */int) min((arr_1 [i_1]), (var_4))))))));
                            arr_18 [i_5 + 1] [i_0] [i_4] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((max((arr_8 [i_4 + 3] [i_4] [i_4 + 4] [i_0]), (((/* implicit */unsigned int) var_1)))) - (max((arr_8 [i_4 + 1] [i_0] [i_0] [7]), (((/* implicit */unsigned int) arr_16 [i_4] [i_1] [i_1]))))));
                            arr_19 [i_0] [i_4 + 2] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_15), (((/* implicit */int) var_14))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [2U] [i_5])) ? (arr_10 [i_0] [i_1] [i_4 + 4] [i_5]) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0]))))) : (var_6))))));
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_5 - 1] [i_5 - 2])) ? (((/* implicit */int) arr_4 [i_5 + 1] [i_5 - 1])) : (((/* implicit */int) arr_4 [i_5 + 1] [i_5 - 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_17))))) : (((/* implicit */int) ((((/* implicit */int) (short)11118)) >= (((/* implicit */int) (short)11118))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (int i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        {
                            arr_26 [i_0] [i_0] [i_6] [8] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) arr_22 [i_0] [i_1] [i_6] [i_7])) != (((/* implicit */int) arr_22 [i_6] [i_6] [i_6] [i_6])))))));
                            arr_27 [i_6] [i_7] = ((/* implicit */unsigned int) arr_13 [i_0] [i_1] [i_6] [i_7]);
                            arr_28 [i_6] [i_7] = ((/* implicit */_Bool) var_14);
                        }
                    } 
                } 
            }
        } 
    } 
}
