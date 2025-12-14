/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46542
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
    var_17 = ((/* implicit */short) (~(((/* implicit */int) var_15))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_3] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) (+(var_0))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_15)) == (var_0))))) : (((/* implicit */int) ((max((13U), (((/* implicit */unsigned int) (unsigned short)65535)))) == (var_8))))));
                                arr_14 [i_0] [i_3] [17ULL] = ((/* implicit */unsigned long long int) var_0);
                            }
                        } 
                    } 
                    arr_15 [i_1] = ((/* implicit */int) var_6);
                }
            } 
        } 
    } 
    var_18 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((~(((/* implicit */int) var_15)))), (((/* implicit */int) var_16))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -2881483599005145334LL)) ? (((/* implicit */int) (signed char)22)) : (((((/* implicit */_Bool) (signed char)36)) ? (var_13) : (((/* implicit */int) (signed char)-62))))))) : (max((var_10), (((/* implicit */long long int) var_13))))));
}
