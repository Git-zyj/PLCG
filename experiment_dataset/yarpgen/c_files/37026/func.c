/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37026
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
    var_19 = var_6;
    var_20 = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (-1511032184))))))), (var_8)));
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) & (var_7))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((int) ((((/* implicit */_Bool) ((var_17) ? (((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1])) : (-1511032184)))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) -1511032184)) & (2048989342U))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned int i_4 = 1; i_4 < 18; i_4 += 1) 
                            {
                                arr_15 [i_0] [i_4] [i_2 - 1] [i_3] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2245977931U)) ? (((/* implicit */unsigned int) 1088738578)) : (1064128438U)))) ? (max((2048989342U), (((/* implicit */unsigned int) -1511032172)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) * (((/* implicit */unsigned int) max((arr_11 [i_0] [i_3] [i_4 - 1]), (((var_1) ? (((/* implicit */int) arr_10 [i_0])) : (((/* implicit */int) arr_9 [(_Bool)1] [i_1] [(_Bool)1] [i_3] [i_4] [i_3])))))))));
                                arr_16 [i_4] [i_1 - 1] [8U] [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((min((1088738578), (938930386))) & (-1820115272)))) ? (min((max((((/* implicit */unsigned int) -1511032151)), (arr_14 [i_0] [i_0] [i_3] [i_4]))), (arr_4 [(_Bool)1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_12 [i_3] [i_1 + 1])) > (-1088738578)))))));
                                var_22 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1511032144))));
                            }
                            var_23 = ((/* implicit */unsigned int) min((var_23), (max((((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) 1088738580)))), (((1511032184) == (((/* implicit */int) var_5))))))), (max((((/* implicit */unsigned int) ((int) (_Bool)1))), (4035440693U)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
