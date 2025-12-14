/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198406
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
    var_20 &= max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (-1936558959472422971LL) : (((/* implicit */long long int) ((/* implicit */int) var_15))))))))), (((((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned short) (short)992))))) ? (((/* implicit */int) min((((/* implicit */short) var_11)), (var_14)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))));
    var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                            {
                                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)239)) ? (1787659135) : (((/* implicit */int) (signed char)15)))))));
                                arr_12 [i_4] [i_3] [i_2] = arr_4 [i_1] [i_2] [i_3] [3LL];
                            }
                            arr_13 [i_3] [i_2] [i_1] [(unsigned char)8] [i_0] |= ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_2 [i_1 - 4] [i_1 + 1])))) ? (max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) > (var_10)))), (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_2] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-996))) : (var_12))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)5)))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((var_12) >> (((max((arr_3 [i_1 - 3] [i_1] [i_0]), (((/* implicit */unsigned int) var_3)))) - (1077816230U))))))));
            }
        } 
    } 
}
