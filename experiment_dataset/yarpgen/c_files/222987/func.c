/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222987
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
    var_12 = var_10;
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_9 [i_0] = arr_3 [i_0] [i_0];
                    var_13 &= (unsigned short)51969;
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            {
                arr_15 [(unsigned short)10] [i_3] &= (unsigned short)58183;
                /* LoopNest 3 */
                for (unsigned short i_5 = 2; i_5 < 24; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 25; i_7 += 3) 
                        {
                            {
                                arr_26 [i_7] [i_5] [i_5 - 1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)19341)) >= (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) (unsigned short)19350))))))));
                                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)63142)) ? (((/* implicit */int) arr_21 [i_5] [i_5])) : (((/* implicit */int) arr_21 [i_5] [i_5]))))) ? (((/* implicit */int) (unsigned short)5879)) : (((/* implicit */int) ((((/* implicit */int) var_2)) > (((((/* implicit */int) arr_19 [i_3] [i_5] [i_7])) - (((/* implicit */int) (unsigned short)57661)))))))));
                                arr_27 [i_3] [(unsigned short)23] [i_3] [i_3] [i_5] = (unsigned short)2381;
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
