/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22447
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) (unsigned short)44027)) ? (3434944297U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-115))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 4; i_3 < 14; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_1] [i_2] [i_1] [i_0] = ((((/* implicit */_Bool) max((min((3817420635U), (((/* implicit */unsigned int) (short)-21673)))), (((/* implicit */unsigned int) (unsigned short)44056))))) ? (((/* implicit */unsigned int) max((((arr_13 [i_1] [i_3] [i_1] [i_1] [i_1]) + (((/* implicit */int) arr_5 [4] [i_3] [4])))), (-1375922084)))) : (((((/* implicit */_Bool) ((var_12) - (((/* implicit */int) arr_4 [i_1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-115)) + (((/* implicit */int) (short)-21673))))) : (((1039926978U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-114))))))));
                                var_14 = ((/* implicit */unsigned int) (~(-1720704440)));
                                var_15 += ((/* implicit */unsigned int) ((int) (~(arr_13 [i_3] [i_3] [i_3] [i_3 - 1] [i_3]))));
                            }
                        } 
                    } 
                    var_16 = (+(((((/* implicit */_Bool) var_4)) ? ((~(845139697))) : (((((/* implicit */_Bool) -1402058957)) ? (arr_12 [i_0] [i_1] [i_1] [i_2] [i_1]) : (((/* implicit */int) (short)21674)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        for (int i_6 = 1; i_6 < 11; i_6 += 3) 
                        {
                            {
                                arr_21 [i_0] [i_1 - 2] [i_2] [i_1] [4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-122)) & (arr_12 [i_0] [i_0] [i_2] [i_5] [i_1]))) % (((/* implicit */int) arr_4 [i_1]))))) ? (((((/* implicit */_Bool) (signed char)47)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21518))) : (57981498U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) 1720704439))))))));
                                var_17 = ((/* implicit */short) ((unsigned short) arr_10 [i_0] [i_0] [6U] [i_5] [i_1] [i_6]));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (~(3574671208U))))));
}
