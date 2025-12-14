/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195922
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
    var_15 |= ((/* implicit */signed char) max((max((1334270136), (((((/* implicit */_Bool) -1334270153)) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) var_1)))))), (((((/* implicit */_Bool) (~(-1334270153)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)62165)) : (var_14))) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_1)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_14 [i_4 - 1] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */int) (((+(997946082))) > (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) var_7)))))));
                                arr_15 [i_0] [(_Bool)1] [5] [i_2] [i_0] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1028817853)) ? ((~(((/* implicit */int) (signed char)-57)))) : (((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) (unsigned short)25101)) : (((/* implicit */int) arr_0 [i_3]))))) ? (((var_14) << (((((((/* implicit */int) (signed char)-51)) + (63))) - (12))))) : (((/* implicit */int) (signed char)-57))))));
                                arr_16 [i_3] [i_2] [i_2] [i_2] [(short)4] = ((/* implicit */int) ((((int) -1334270136)) != (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [(short)4] [i_1])) ? (arr_12 [i_0] [i_1] [i_2] [i_3] [i_3]) : (((/* implicit */unsigned long long int) var_14))))))));
                                arr_17 [i_0] = ((/* implicit */_Bool) arr_5 [i_0]);
                            }
                        } 
                    } 
                    arr_18 [i_2] [i_1 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (1565000965)))) ? (max((((/* implicit */int) arr_5 [i_1])), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_0])))))) : (((((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_9)))) ? (arr_6 [i_1] [i_1 - 1] [i_1]) : (((int) (unsigned short)62172))))));
                    arr_19 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned long long int) ((var_14) >> (((((/* implicit */int) arr_11 [i_2] [i_0] [i_2])) - (24939)))))) : (((/* implicit */unsigned long long int) ((var_14) >> (((((((/* implicit */int) arr_11 [i_2] [i_0] [i_2])) - (24939))) + (17623))))));
                }
            } 
        } 
    } 
    var_16 |= ((/* implicit */short) var_7);
}
