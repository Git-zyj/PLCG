/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228722
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) >> ((((-(((/* implicit */int) var_4)))) + (29020)))));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_8)) + (((/* implicit */int) var_10)))) + (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8))))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            arr_13 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */short) arr_11 [i_0] [i_0] [i_2]);
                            arr_14 [i_0] [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) max((min((arr_11 [i_3] [i_2] [i_0]), (arr_11 [i_2] [i_1] [i_0]))), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_2]))));
                            arr_15 [i_0] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) var_9);
                        }
                    } 
                } 
                arr_16 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)254))))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)32747))))) : (((arr_0 [i_1]) | (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))) : (arr_1 [i_1])));
            }
        } 
    } 
}
