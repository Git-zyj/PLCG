/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231799
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
    var_16 = ((/* implicit */int) var_13);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 20; i_2 += 1) 
            {
                {
                    var_17 &= ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)5055)) : (var_0))), (((/* implicit */int) arr_7 [i_1] [i_2 - 2])))) ^ (((/* implicit */int) max((arr_2 [i_2 - 2]), (arr_2 [i_2 + 2]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)-32765)) ? (arr_9 [i_2 + 1] [(unsigned char)12] [i_2] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)1))))) << (((((((/* implicit */_Bool) 144115188075855872ULL)) ? (arr_9 [i_2 + 1] [1U] [7ULL] [i_2]) : (((/* implicit */unsigned int) -439945925)))) - (2580846606U)))));
                                arr_14 [i_4] [i_3] [i_2] [i_1] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [(short)15] [(unsigned char)15] [i_2] [i_3])) - (((/* implicit */int) arr_13 [i_0] [i_3] [(unsigned char)16] [i_3] [i_2 - 3] [(short)21] [i_0]))))) * (max((arr_9 [i_1] [i_4] [i_2] [(short)5]), (((/* implicit */unsigned int) arr_8 [(_Bool)1] [i_1] [i_1] [i_2] [i_2 - 2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) - (144115188075855872ULL))))) : (((/* implicit */unsigned long long int) var_11))));
    var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_3)) & (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 144115188075855887ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (2132547687U)))) | (max((144115188075855869ULL), (((/* implicit */unsigned long long int) (unsigned short)58946))))))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 10; i_5 += 4) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_23 [i_5] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_5 [i_5] [i_6] [i_7 - 1])) ? (arr_21 [i_7]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_5 [i_5] [i_6] [7U]))))))));
                    var_21 = ((/* implicit */signed char) (short)26202);
                }
            } 
        } 
    } 
}
