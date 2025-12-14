/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219018
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_15 = arr_0 [i_0];
                arr_4 [i_0] [i_0] [i_1] = ((((/* implicit */_Bool) ((int) arr_1 [i_0]))) ? (((int) arr_1 [i_1])) : (arr_0 [i_0]));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        for (int i_3 = 2; i_3 < 16; i_3 += 1) 
        {
            for (int i_4 = 1; i_4 < 16; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            {
                                var_16 = min((((int) ((1031831388) / (1031831388)))), (((((/* implicit */_Bool) -1796196925)) ? (arr_15 [i_3 + 2]) : (arr_15 [i_3 + 1]))));
                                arr_20 [5] [0] [5] [i_6] [5] |= (~(((arr_13 [i_4 - 1] [i_3] [i_3] [i_3]) & (arr_12 [17] [i_3 - 2] [i_3]))));
                                arr_21 [8] [i_3] [i_4] [i_3] [i_6] = max(((~(max((2103985092), (199217328))))), (max((arr_14 [i_2] [i_3 - 1] [i_4 + 2] [i_6]), ((~(var_7))))));
                                arr_22 [i_2] [i_2] [i_4] [i_6] = max((((((/* implicit */_Bool) (+(arr_18 [i_2] [i_4] [i_5] [9])))) ? (0) : (((int) var_13)))), (19));
                                var_17 = ((((1031831387) != (arr_14 [5] [i_3] [i_3 + 1] [i_4 + 1]))) ? (((((((/* implicit */_Bool) -1791000127)) ? (1031831385) : (var_8))) + ((+(var_6))))) : (((((/* implicit */_Bool) (+(arr_6 [i_6])))) ? (((((/* implicit */_Bool) var_14)) ? (-1419172478) : (-413801632))) : (arr_7 [5] [i_2]))));
                            }
                        } 
                    } 
                    var_18 = ((int) arr_11 [i_2]);
                    var_19 = max(((+(((505224412) / (var_3))))), (var_2));
                    arr_23 [9] = ((((/* implicit */_Bool) 24)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2])) ? (1821336503) : (var_4)))) ? (-1479791120) : ((~(var_3))))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (-1) : (-845602000))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) min((var_20), (min(((-(((((/* implicit */_Bool) var_9)) ? (830109789) : (var_10))))), (((((int) 845602000)) + (((var_12) - (var_7)))))))));
}
