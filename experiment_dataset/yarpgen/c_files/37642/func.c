/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37642
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)1)), (min((((/* implicit */unsigned int) var_10)), (var_11))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (-(((arr_1 [i_1]) ? (min((arr_0 [i_1]), (((/* implicit */unsigned long long int) arr_1 [(signed char)6])))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))))))))));
                var_14 |= ((/* implicit */unsigned short) arr_3 [i_0] [i_0] [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned short i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) ((arr_11 [i_3 + 1] [i_1 - 1] [i_2] [i_3 + 1] [i_1 - 1] [i_2]) & ((~(arr_11 [i_3 + 1] [i_1 - 1] [i_2] [i_3] [i_4 - 1] [i_1])))));
                                var_16 = ((/* implicit */long long int) min((min(((-(((/* implicit */int) (_Bool)1)))), (((arr_1 [i_2]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-2)))))), (((int) arr_4 [i_3 + 1] [i_4]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
