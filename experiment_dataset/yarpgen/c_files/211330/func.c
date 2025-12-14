/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211330
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
    for (unsigned int i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)63)) >> (((((/* implicit */int) arr_5 [i_0 + 2] [20U] [i_1] [i_0 + 2])) - (29743)))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_14 [3U] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) ^ (3137432153U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1] [i_1 - 1])))))) : (arr_0 [i_0 - 4] [i_1 + 1]));
                                var_21 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_6)) ? (arr_8 [i_0 - 3] [i_0 - 2] [i_0 - 4] [i_2] [i_0 - 4]) : (((8448957021118792517ULL) + (6835244481860417090ULL))))) ^ (311578516663484889ULL)));
                                var_22 = ((/* implicit */unsigned char) max((max(((-(((/* implicit */int) (unsigned char)220)))), (((/* implicit */int) arr_12 [i_3] [i_3] [i_4] [i_1 - 1] [i_0 + 1])))), (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [6] [i_2]))));
                                arr_15 [i_2] [i_3] [i_2] [i_1 + 1] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_13 [i_3] [i_4] [i_2] [i_1] [i_2])), (130124543297282911ULL))))));
                                var_23 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) 7168LL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((unsigned long long int) (unsigned short)24833)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) + (var_4)))));
}
