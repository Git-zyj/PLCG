/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33113
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) >= ((+(((/* implicit */int) (unsigned short)2686))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_13 = ((unsigned short) (!(((/* implicit */_Bool) arr_0 [i_1]))));
                var_14 = arr_0 [i_0];
                var_15 = ((((/* implicit */_Bool) var_6)) ? (((arr_1 [i_1] [i_1]) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    arr_10 [i_1] = ((/* implicit */unsigned short) min((var_4), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(3486603060U)))) ? (((/* implicit */int) (unsigned short)23847)) : (((/* implicit */int) (unsigned short)16)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_17 [i_1] [i_1] [i_1] [i_3] [i_4] [i_1] = var_0;
                                arr_18 [i_0] [i_0] [i_2] [i_1] [i_4] = ((((/* implicit */_Bool) max((arr_5 [i_0] [i_4] [i_0]), (var_2)))) ? (var_2) : (min((((/* implicit */unsigned int) max((var_5), (var_7)))), (((3608384549U) & (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                                var_16 -= var_2;
                                arr_19 [i_0] [i_1] [i_1] [i_3] [i_4] = ((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)54940))))) ? (((unsigned int) (unsigned short)63390)) : (min((arr_5 [i_0] [i_0] [i_0]), (69230289U))))) + (((((/* implicit */_Bool) arr_16 [i_4] [i_3] [i_2] [i_1] [i_1] [i_0])) ? (arr_16 [i_0] [12U] [i_2] [i_2] [i_3] [i_4]) : (arr_16 [(unsigned short)10] [(unsigned short)10] [i_2] [9U] [i_0] [i_4]))));
                                var_17 = var_3;
                            }
                        } 
                    } 
                    arr_20 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_5 [i_0] [i_1] [i_2]);
                    var_18 = (-(arr_9 [i_1] [i_1]));
                    var_19 = ((/* implicit */unsigned short) ((((arr_13 [i_0] [i_1]) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_1] [i_1] [i_2])) : (((/* implicit */int) (unsigned short)19586))))))) ^ (max((((unsigned int) 1073741824U)), (((/* implicit */unsigned int) arr_8 [i_0] [1U] [i_1] [i_2]))))));
                }
            }
        } 
    } 
}
