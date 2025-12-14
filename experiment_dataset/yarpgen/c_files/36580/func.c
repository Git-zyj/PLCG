/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36580
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
    for (long long int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_13 [i_4] [i_1] [i_1] [i_4] = ((((/* implicit */_Bool) var_12)) ? (arr_2 [i_0 - 3]) : (((/* implicit */long long int) ((/* implicit */int) ((var_4) < (-1888647688))))));
                                var_17 -= ((/* implicit */unsigned short) ((arr_0 [i_0 - 1] [i_0 + 1]) > (arr_0 [i_0 + 1] [i_0 + 2])));
                                arr_14 [i_0] [i_4] [i_2] [i_4] [i_3] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned int) var_4)) < (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18364))) % (3545917033U)))));
                                arr_15 [i_2] [i_3] |= ((/* implicit */long long int) var_14);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned long long int) (~(749050263U)));
                }
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */long long int) arr_9 [i_0 - 1] [i_0 + 1] [i_0 + 2] [i_0 - 2])) : (max((6245004929327558681LL), (((/* implicit */long long int) 2651487943U))))));
            }
        } 
    } 
    var_20 += ((/* implicit */int) ((((((3545917033U) << (((var_6) - (3249776919U))))) >> (((((long long int) var_2)) + (972662872LL))))) / (((/* implicit */unsigned int) var_4))));
}
