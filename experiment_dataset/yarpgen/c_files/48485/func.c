/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48485
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) * (var_0)));
    var_20 = ((/* implicit */unsigned char) var_18);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (short i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) != (var_9)));
                                arr_11 [i_0] [i_0] [i_2] [i_3 - 1] [i_4] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_18)) | (((/* implicit */int) var_18))))) ? ((~(arr_7 [i_0] [i_0]))) : (arr_2 [i_0])));
                                var_22 = ((/* implicit */short) ((((/* implicit */int) var_11)) - (((((/* implicit */int) var_2)) - (var_1)))));
                            }
                        } 
                    } 
                } 
                arr_12 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_10 [i_0] [i_1] [i_1] [i_1 - 1] [i_0] [i_1] [i_1 - 1]) | (arr_9 [i_0] [i_1] [i_1 - 2] [i_1 - 2] [i_1 + 1] [i_1])))) ? (max((arr_10 [i_0] [i_1 + 1] [i_1 - 1] [i_1] [i_0] [i_0] [i_1]), (arr_10 [i_0 + 1] [i_0] [i_0] [(unsigned char)6] [i_0] [i_0] [i_0 + 1]))) : (arr_9 [i_0] [i_1 + 1] [i_0] [i_1 - 1] [(unsigned short)12] [i_1 - 2])));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((var_9) | (((/* implicit */int) var_7)))) <= (((((/* implicit */int) var_13)) | (((/* implicit */int) var_2))))))) << (((((/* implicit */int) var_13)) - (21)))));
}
