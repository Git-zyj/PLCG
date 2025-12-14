/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35621
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
    var_10 *= max((((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))) <= (min((3997979371U), (296987925U)))))), (((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 296987925U))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    arr_8 [i_1] [i_1] [(_Bool)1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) != (4294967295U)))), (((((/* implicit */_Bool) ((arr_2 [i_0]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) ((var_0) > (2059659977)))) : (((int) (_Bool)0))))));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) ((unsigned int) 9U));
                    arr_10 [i_2] = min(((-((~(((/* implicit */int) var_8)))))), ((~(((/* implicit */int) arr_5 [7] [i_1])))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_11 = max((((/* implicit */unsigned int) (+((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))), ((-(((arr_4 [4U] [i_0]) ? (arr_3 [10U] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                    var_12 = (-(((/* implicit */int) (_Bool)1)));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_19 [i_0] [i_1] [i_1] [i_4] [i_0] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_4] [i_4 - 1] [i_4 - 1] [i_4]))))) ? (((/* implicit */int) min(((_Bool)1), (arr_6 [i_4] [10U] [i_4] [i_4])))) : ((+(-1214016249))));
                                var_13 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    arr_20 [i_1] [i_1] [i_0] = ((((/* implicit */int) arr_0 [i_1])) / ((-(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1)))))));
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_14 = ((2034021632) >= (min((-2034021633), ((-(((/* implicit */int) (_Bool)1)))))));
                            var_15 = ((((/* implicit */int) ((3997979389U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [9] [9])))))) ^ (((/* implicit */int) arr_11 [i_0] [i_0])));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 &= ((/* implicit */int) var_1);
    var_17 = ((/* implicit */_Bool) ((max((((var_3) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))), (((/* implicit */int) var_7)))) + (((/* implicit */int) var_3))));
    var_18 = ((/* implicit */_Bool) max((min((min((((/* implicit */unsigned int) (_Bool)1)), (1144351155U))), (((/* implicit */unsigned int) ((2986056305U) <= (((/* implicit */unsigned int) 1220915565))))))), (((/* implicit */unsigned int) var_7))));
}
