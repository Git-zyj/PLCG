/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241835
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
    var_12 = ((/* implicit */short) ((((/* implicit */int) var_9)) + (((/* implicit */int) (unsigned char)154))));
    var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */unsigned long long int) var_8))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)97)), (var_2))))))) ? (((/* implicit */int) arr_6 [i_0] [i_2])) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 4] [i_0 - 3])) ? (((/* implicit */int) arr_1 [i_2])) : ((+(((/* implicit */int) (unsigned short)5521))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] &= ((/* implicit */unsigned short) 1656239095);
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((((min((((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4])), (arr_2 [i_3] [i_4]))) != (((unsigned long long int) 1656239095)))) ? ((~(((/* implicit */int) ((unsigned short) arr_8 [i_0] [i_2] [i_4]))))) : (((/* implicit */int) (unsigned short)42073))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            {
                                arr_21 [i_0] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */unsigned char) (unsigned short)28358);
                                arr_22 [i_0] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */unsigned long long int) var_8);
                                arr_23 [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_6]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) ((short) var_0))))));
}
