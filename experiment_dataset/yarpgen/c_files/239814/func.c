/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239814
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
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_10 [i_3] [i_3] = ((/* implicit */unsigned char) (+(max((((/* implicit */int) (signed char)127)), (-1469283570)))));
                                var_13 = ((/* implicit */int) (signed char)124);
                            }
                        } 
                    } 
                    arr_11 [i_0] = ((/* implicit */int) ((max((((/* implicit */unsigned int) max((((/* implicit */int) (signed char)-122)), (-1179006520)))), (max((((/* implicit */unsigned int) var_1)), (85389302U))))) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) max((var_1), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)1)))))));
    var_15 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) 1469283570)), (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) / ((+(var_0)))))));
    /* LoopSeq 2 */
    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        arr_16 [i_5] = ((/* implicit */signed char) (unsigned char)41);
        arr_17 [i_5] = ((/* implicit */signed char) var_6);
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) ((var_12) & (((/* implicit */int) var_10))));
        arr_20 [i_6] [i_6] = ((/* implicit */int) (signed char)-6);
    }
    var_17 += ((/* implicit */unsigned int) var_3);
}
