/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242038
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_1] [i_0] = (+(((/* implicit */int) (!(((var_12) && (arr_10 [i_4])))))));
                                arr_13 [i_0] [i_0] [i_0] [i_1] = var_11;
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (short)-28883);
                    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? ((-((+(((/* implicit */int) var_4)))))) : (((/* implicit */int) min((((/* implicit */short) var_10)), (var_9))))));
                    arr_15 [i_1] [(short)9] [i_2] [(unsigned char)8] = ((/* implicit */unsigned short) ((var_1) * (((max((var_6), (((/* implicit */long long int) arr_5 [i_1])))) >> ((((-(((/* implicit */int) (short)28883)))) + (28940)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        for (int i_6 = 1; i_6 < 18; i_6 += 3) 
        {
            {
                arr_23 [i_6] = (short)28882;
                var_14 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned short)29623)) ? (-668155995) : (-668155995))), (((/* implicit */int) min((min((((/* implicit */short) var_0)), (var_9))), (((/* implicit */short) arr_22 [i_6] [i_6 - 1] [i_6])))))));
                arr_24 [i_6] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_6]))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)28882)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_20 [i_6]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 65535U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)28883))))) : ((-(var_1)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((var_0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)420))) : (var_7))) >= (((/* implicit */long long int) (~(((/* implicit */int) var_8)))))))), (var_1)));
}
