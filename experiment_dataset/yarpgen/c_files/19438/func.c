/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19438
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_11))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) (((~(((/* implicit */int) var_10)))) | (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))))));
                                arr_14 [(unsigned char)11] [i_2] [i_2] [(unsigned char)12] [i_4] [i_4 - 2] = (unsigned char)131;
                                arr_15 [(unsigned char)21] [(unsigned char)4] [i_2] [i_2] [i_4 - 2] = var_4;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)115)) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) (unsigned char)254))));
    /* LoopNest 3 */
    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 3) 
        {
            for (unsigned char i_7 = 0; i_7 < 20; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        for (unsigned char i_9 = 3; i_9 < 19; i_9 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (~((~(((/* implicit */int) (unsigned char)120)))))))));
                                var_19 *= var_13;
                                var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) var_6)) * (((/* implicit */int) (unsigned char)8)))) : ((-(((/* implicit */int) var_6)))))) + (((/* implicit */int) (unsigned char)148))));
                                var_21 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (unsigned char)15))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 20; i_11 += 1) 
                        {
                            {
                                var_22 = var_0;
                                var_23 = var_9;
                                var_24 += (unsigned char)237;
                                arr_35 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) < (((/* implicit */int) (unsigned char)128))));
                            }
                        } 
                    } 
                    arr_36 [i_6] = var_13;
                }
            } 
        } 
    } 
}
