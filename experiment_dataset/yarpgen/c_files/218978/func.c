/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218978
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
    var_18 |= var_13;
    var_19 = (unsigned char)208;
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) max(((~(((/* implicit */int) var_17)))), (((/* implicit */int) var_5)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_6 [(unsigned char)6] = ((unsigned char) arr_1 [i_1]);
                /* LoopNest 3 */
                for (unsigned char i_2 = 4; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1] [i_1] [i_0 + 1] [i_2] = arr_10 [i_4] [(unsigned char)1] [(unsigned char)1];
                                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) max((((/* implicit */int) arr_12 [i_2] [i_1] [(unsigned char)2] [i_0 + 1] [i_0])), ((~(((/* implicit */int) var_12)))))))));
                                arr_16 [i_2 + 1] [i_3] [i_2] = ((/* implicit */unsigned char) (~((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)37)) : (((/* implicit */int) var_14))))))));
                                var_22 = var_17;
                                arr_17 [i_0] [i_1] [i_2 + 1] [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)163)) & (((/* implicit */int) (unsigned char)0))));
                            }
                        } 
                    } 
                } 
                arr_18 [i_0 + 2] [i_1] [i_1] = arr_2 [i_0];
            }
        } 
    } 
}
