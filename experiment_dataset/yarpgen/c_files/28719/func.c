/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28719
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
    var_10 -= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))))) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) var_0)))), (((/* implicit */int) var_4))));
    var_11 = ((/* implicit */unsigned short) min((var_11), (min((((unsigned short) (~(((/* implicit */int) var_7))))), (var_3)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_10 [i_0] = arr_3 [(unsigned short)3] [i_1];
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_12 -= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_11 [i_3 - 1] [i_3 - 1] [i_2] [i_2])))) >= (((((((/* implicit */_Bool) arr_5 [i_0] [i_3 + 1] [i_0])) ? (((/* implicit */int) arr_13 [i_1] [(unsigned short)5] [i_2] [i_1])) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_3 - 1] [i_4])))) & (((/* implicit */int) arr_14 [i_3 + 1]))))));
                                arr_15 [i_0] [i_0] = arr_1 [i_3 - 1];
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] = arr_5 [i_0] [(unsigned short)3] [i_2];
                }
            } 
        } 
    } 
    var_13 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))));
    var_14 = var_5;
}
