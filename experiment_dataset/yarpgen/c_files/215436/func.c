/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215436
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
    var_16 = ((/* implicit */long long int) (-(-601113619)));
    var_17 = ((/* implicit */signed char) var_2);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) var_6);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [9] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [i_4 + 1] [(signed char)11] [i_3] [i_1 - 2] [i_3] [i_3])) ? (arr_8 [i_1 - 2]) : (arr_8 [i_1 - 2])))) ? (((/* implicit */unsigned int) ((arr_13 [i_1 + 2] [i_1]) + (arr_5 [i_1 + 2] [i_4 + 1] [i_4])))) : (((((/* implicit */_Bool) (short)-22893)) ? (3716063840U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))))));
                                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (signed char)-107))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-4457))))) ? (((/* implicit */int) ((_Bool) arr_13 [i_1 + 3] [i_3]))) : (((((/* implicit */_Bool) ((var_1) ^ (((/* implicit */int) arr_1 [(_Bool)1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-25))))) : (arr_13 [i_1 - 2] [i_3]))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */_Bool) ((((((/* implicit */int) (short)-32752)) == (((/* implicit */int) arr_6 [i_1 + 4] [i_1 + 2])))) ? (((/* implicit */unsigned int) max((((/* implicit */int) max((var_11), (((/* implicit */unsigned short) (signed char)-25))))), (arr_5 [i_0] [12LL] [i_2])))) : (max((((/* implicit */unsigned int) arr_10 [i_1] [i_1 + 4] [i_2] [i_2] [i_1 + 1])), (var_13)))));
                }
            } 
        } 
    } 
}
