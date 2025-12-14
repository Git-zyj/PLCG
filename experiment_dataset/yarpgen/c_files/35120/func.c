/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35120
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_5 [i_1] [i_2])))))));
                    var_18 = ((/* implicit */unsigned short) min((var_18), (var_8)));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 7; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_19 |= ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_3 [(unsigned short)10] [i_3 + 3]))))));
                                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)0)))))))));
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (_Bool)0))));
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) ((arr_0 [i_1]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_5))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10160)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))))))) << (((/* implicit */int) var_13))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) min((var_23), (var_5)));
    var_24 = var_10;
}
