/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232660
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
    var_13 = var_2;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned char i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_14 = var_12;
                                arr_13 [(unsigned char)13] [i_3] [(unsigned char)12] [(unsigned char)12] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) * (((/* implicit */int) arr_7 [i_3 + 1] [i_4 - 4] [i_4 - 4] [i_4 - 4] [i_4] [i_4 - 1]))));
                                var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)7))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    for (unsigned char i_6 = 3; i_6 < 15; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 1) 
                        {
                            {
                                var_16 = ((unsigned char) ((((/* implicit */int) var_8)) * (((/* implicit */int) (unsigned char)229))));
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_5] [i_6] [i_6])) ? (((((/* implicit */int) (unsigned char)247)) / (((/* implicit */int) (unsigned char)128)))) : (((/* implicit */int) var_9))));
                                var_18 = ((unsigned char) ((((((/* implicit */_Bool) (unsigned char)159)) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [(unsigned char)4])) : (((/* implicit */int) (unsigned char)255)))) - (((/* implicit */int) (unsigned char)139))));
                            }
                        } 
                    } 
                } 
                arr_22 [i_0] [i_1] = ((unsigned char) (-(((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) max((var_19), (var_12)));
}
