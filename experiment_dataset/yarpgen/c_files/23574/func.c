/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23574
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) 1924733648U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1))))) : (((/* implicit */int) var_3))))) & (min((((/* implicit */long long int) ((((/* implicit */int) var_6)) / (((/* implicit */int) (_Bool)1))))), ((~(var_4)))))));
    var_19 = (~(1505544523U));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) (((~(((/* implicit */int) (_Bool)1)))) & (((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)127)), (arr_4 [i_0] [i_0])))) << (min((1352845617), (((/* implicit */int) var_0))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (signed char i_4 = 4; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) 4294967290U))));
                                arr_13 [(signed char)14] [i_3] [i_3] [i_0] [i_1] [i_1] [(signed char)14] &= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (4294967284U)))));
                                arr_14 [i_2] [i_2] [12U] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(min((var_14), (((/* implicit */int) (_Bool)1))))))) ? ((+(min((5U), (3607045180U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_4 - 1] [i_4 - 3])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_1 [i_4 - 4] [i_4 - 3])))))));
                                arr_15 [i_0] [i_3] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */int) 5U);
                                arr_16 [i_0] [i_3] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) -1001397805);
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (arr_6 [i_0]))), (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))));
            }
        } 
    } 
}
