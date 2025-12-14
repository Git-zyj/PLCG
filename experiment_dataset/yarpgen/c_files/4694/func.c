/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4694
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
    var_10 = ((/* implicit */unsigned short) var_3);
    var_11 = ((/* implicit */unsigned short) var_7);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 17; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_4 [i_0] [i_1]))) | ((~(arr_4 [i_1 - 4] [i_0])))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_13 -= ((/* implicit */unsigned int) var_1);
                                arr_13 [i_0] [14ULL] [(_Bool)0] [i_2] [i_3] [i_3] [i_4] &= ((((((/* implicit */_Bool) ((var_9) - (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) (signed char)122)) ? (var_6) : (6513818632110407286ULL))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) >= (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) arr_6 [i_2] [i_2] [i_0]))))))))));
                                arr_14 [i_1] [i_1 - 1] [i_1] [i_1] = ((/* implicit */long long int) ((unsigned short) ((unsigned int) var_5)));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [(unsigned short)14] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(var_0)))) != (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))) | (arr_11 [i_0] [i_1] [i_1 + 2] [i_1 + 2] [(unsigned char)4])))));
                arr_16 [i_1] [i_1] = ((/* implicit */unsigned char) var_5);
            }
        } 
    } 
}
