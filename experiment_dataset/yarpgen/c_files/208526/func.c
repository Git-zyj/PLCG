/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208526
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 11; i_2 += 3) 
            {
                {
                    var_10 |= ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_2])) == (((/* implicit */int) ((302628417U) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */int) (signed char)-49)) : (((/* implicit */int) (unsigned char)12))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        arr_11 [2U] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2 - 3] [i_2 - 1]))) >= ((~(3ULL)))));
                        arr_12 [i_0] [(unsigned short)4] [(unsigned short)4] [4LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1271063829U)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_3 [i_0] [i_1] [i_0])))) : (arr_5 [i_2 - 3])));
                        arr_13 [i_1] [i_2] [i_3] = ((var_7) / (((/* implicit */long long int) arr_10 [i_2 - 1] [i_2] [i_3] [i_3])));
                        arr_14 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) var_4))));
                    }
                    arr_15 [i_0] [(unsigned short)4] [(unsigned short)4] [(unsigned short)4] = ((/* implicit */unsigned int) (unsigned short)38663);
                    arr_16 [i_0] [i_1] [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) ((short) arr_9 [i_2 - 3] [i_2])))));
                    arr_17 [i_0] [i_0] [i_2] = min((var_1), (((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) var_5)) + (((/* implicit */int) var_3)))))));
                }
            } 
        } 
    } 
    var_11 = var_7;
}
