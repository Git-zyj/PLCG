/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44709
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
    var_16 = ((/* implicit */signed char) var_3);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 4; i_2 < 8; i_2 += 4) 
                {
                    arr_7 [i_1] = ((/* implicit */int) (-((~(arr_4 [i_2 - 3])))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_2 - 2] [i_2] [i_2 - 4] [i_2 + 1])) ? (((/* implicit */int) arr_5 [i_2] [i_2 - 4] [i_2 - 1] [i_2 - 3])) : (((/* implicit */int) arr_5 [i_2] [i_2] [i_2] [i_2 + 2]))));
                }
                /* LoopNest 3 */
                for (short i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    for (int i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        for (long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_5] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) max((arr_11 [i_4] [i_4] [i_4] [i_4]), (((/* implicit */short) (signed char)31))))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)32763)) : (((/* implicit */int) arr_14 [i_1] [i_5] [i_1] [i_1] [i_1])))) : ((+(((/* implicit */int) arr_1 [i_0])))))));
                                arr_17 [i_0] [i_1] [i_3] [i_4] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_13 [i_5] [i_4] [i_3] [i_1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_0] [i_1] [i_3] [i_4] [i_5])) - (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) arr_3 [i_5] [i_4])) ? (((/* implicit */unsigned int) var_2)) : (arr_4 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
