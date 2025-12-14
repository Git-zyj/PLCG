/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244981
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
    var_16 *= ((/* implicit */unsigned int) (-(max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))))), (max((var_13), (((/* implicit */long long int) -197211042))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_17 &= ((/* implicit */long long int) ((((/* implicit */_Bool) 7021744262468950820ULL)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (_Bool)1))));
                                arr_13 [i_0] [i_1] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1 + 3] [i_1 + 3] [i_3 - 1] [(unsigned short)13] [i_3 + 1] [i_1])) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_1])) : (((int) arr_2 [0U])))))));
                                arr_14 [i_0] [i_0] [i_0] [(short)7] [i_1] [(unsigned short)5] = ((((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_4])) ? (((((/* implicit */_Bool) 67108863U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)59700))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)15021)))))) : (((/* implicit */int) ((signed char) arr_8 [i_0] [i_0] [i_1] [i_2] [i_3 - 1] [i_4]))));
                                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) var_5))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_6 [i_1] [i_1] [i_0] [i_1 - 1]))) ? (max((-2147483634), (-589605468))) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [i_1 + 3]))));
                arr_15 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 + 4])) ? (1803919146105205976ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 + 4] [i_1 + 2])))))) ? (((((/* implicit */_Bool) arr_0 [i_1 + 2])) ? (arr_0 [i_1 + 4]) : (arr_0 [i_1 - 1]))) : (max((var_13), (((/* implicit */long long int) 1807660947))))));
                arr_16 [i_1] = ((/* implicit */int) ((((((/* implicit */long long int) var_1)) >= ((+(var_13))))) ? (976946258U) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_1 - 1] [9U])) | (((/* implicit */int) arr_1 [i_1 + 3] [i_1 + 3])))))));
                var_20 = ((/* implicit */signed char) ((short) ((long long int) var_6)));
            }
        } 
    } 
}
