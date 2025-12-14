/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35114
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
    for (unsigned long long int i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) >= (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_12)) > (5462024633872646159ULL))))) | (var_12))))))));
                    var_15 = (~((+(max((var_3), (((/* implicit */unsigned int) var_1)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */unsigned int) var_5)), (4283632446U))) : (((/* implicit */unsigned int) var_7))))) * (6205829553530007058ULL))))));
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
    {
        for (unsigned long long int i_4 = 2; i_4 < 13; i_4 += 3) 
        {
            for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 2; i_6 < 12; i_6 += 4) 
                    {
                        for (unsigned int i_7 = 1; i_7 < 13; i_7 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (short)-10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_18 [i_4 + 1] [i_6] [i_6 + 2] [i_6] [i_7 + 1] [i_7 + 1]))))))));
                                var_18 = ((/* implicit */int) (!((!(((/* implicit */_Bool) var_11))))));
                                arr_20 [(_Bool)0] [i_4] [i_5] [(_Bool)1] [(_Bool)1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((signed char) 0))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_8)))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */_Bool) ((signed char) var_6));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) min((var_8), (((/* implicit */unsigned int) var_1))));
}
