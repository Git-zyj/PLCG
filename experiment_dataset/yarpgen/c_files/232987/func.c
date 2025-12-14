/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232987
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
    var_12 += ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 9; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) ((((unsigned int) ((unsigned short) arr_3 [i_4] [i_2] [i_1]))) < (arr_7 [i_1])));
                                var_14 = ((/* implicit */unsigned char) (+(var_0)));
                                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) arr_5 [i_0] [i_1]))));
                            }
                        } 
                    } 
                } 
                var_16 += ((/* implicit */int) max((((unsigned int) arr_1 [i_0] [i_1 + 1])), (((/* implicit */unsigned int) ((unsigned char) arr_1 [i_0] [i_0])))));
                var_17 = ((/* implicit */unsigned short) var_8);
                arr_11 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) (~(arr_10 [i_1] [i_1] [i_1] [i_0]))))) ? (((((/* implicit */_Bool) 1162302623U)) ? (1162302604U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))) : ((~(var_0)))));
            }
        } 
    } 
}
