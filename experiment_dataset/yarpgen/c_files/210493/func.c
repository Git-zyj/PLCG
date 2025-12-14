/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210493
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((unsigned short) var_9)))));
                var_14 = ((/* implicit */unsigned short) max((var_14), (((unsigned short) (-(((/* implicit */int) arr_2 [i_0 + 3] [i_1])))))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (short i_4 = 2; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_14 [(unsigned short)10] [i_0] [i_2] [i_0] [i_0] = var_3;
                                arr_15 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 16; i_6 += 4) 
                        {
                            {
                                var_15 += var_6;
                                var_16 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) (unsigned short)0)))), ((!(((/* implicit */_Bool) var_0))))))), (arr_3 [(unsigned short)11] [(short)0] [i_0])));
                                arr_21 [i_0] [i_1] [i_2] [i_5] [(unsigned short)10] [i_0] [(unsigned short)8] = ((var_1) - (((/* implicit */unsigned int) ((/* implicit */int) var_7))));
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0] [i_0])) << ((((((+(var_8))) << (((((/* implicit */int) var_11)) - (52522))))) - (2684354556U)))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (short i_7 = 3; i_7 < 17; i_7 += 4) 
                {
                    arr_24 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((arr_12 [i_7 + 1] [i_0 + 2] [i_0 - 2] [i_0 + 2] [i_0 - 1] [i_0 + 2]) & (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                    arr_25 [i_0] [i_7 - 3] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_17 [i_0])) : (((/* implicit */int) arr_17 [i_0]))));
                }
            }
        } 
    } 
    var_18 += (+(((((/* implicit */unsigned int) ((/* implicit */int) ((var_1) != (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))) | (var_1))));
    var_19 = ((/* implicit */unsigned short) (-(((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_2))) - (((/* implicit */unsigned int) ((/* implicit */int) max((var_11), (var_4)))))))));
    var_20 = ((/* implicit */unsigned int) var_4);
}
