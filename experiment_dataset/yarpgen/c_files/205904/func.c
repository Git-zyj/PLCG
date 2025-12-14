/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205904
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
    var_17 ^= var_6;
    var_18 ^= var_12;
    var_19 = var_10;
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 7; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 7; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 6; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 7; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_3 + 1] [i_4])) & (min((((/* implicit */int) (unsigned short)47163)), (((((/* implicit */_Bool) arr_11 [i_0] [i_2] [i_3])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)18381))))))));
                                arr_12 [(unsigned short)8] [(unsigned short)7] [(unsigned short)8] [(unsigned short)7] [i_1] [i_0] = arr_11 [(unsigned short)7] [i_1] [(unsigned short)4];
                                var_21 = arr_2 [i_0] [i_1];
                                arr_13 [i_1] [i_2] [i_4] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_11 [i_1] [i_0 - 2] [i_0 - 2]), (arr_11 [i_0 + 3] [i_0 + 3] [i_0 + 3])))) ? ((-(((/* implicit */int) (unsigned short)47163)))) : (((((/* implicit */_Bool) arr_11 [i_3 + 1] [i_2 - 3] [i_0 + 2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_11 [i_3] [i_3] [i_0 + 1]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)26727)) != (((/* implicit */int) arr_11 [i_0] [i_1] [i_2 + 2]))))) ^ (((((/* implicit */_Bool) arr_15 [i_0 + 2])) ? (((/* implicit */int) arr_15 [i_0 + 2])) : (((/* implicit */int) var_12))))));
                                arr_19 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_18 [i_6] [i_6]), (arr_7 [i_0] [(unsigned short)7] [i_0 + 3] [i_0] [i_2 - 2])))) ? (((/* implicit */int) (unsigned short)47163)) : ((-(((/* implicit */int) ((unsigned short) arr_3 [i_5] [i_6])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_3))));
}
