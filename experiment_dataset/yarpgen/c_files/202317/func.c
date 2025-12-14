/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202317
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) var_5);
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) ((signed char) ((arr_3 [i_0] [i_1 - 1]) >= (arr_3 [i_0] [i_1 - 1]))));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1] [i_1 - 1] [i_1])) ? ((-((((_Bool)1) ? (arr_4 [i_1]) : (((/* implicit */unsigned long long int) var_15)))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) arr_13 [i_4] [i_3] [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_7 [4ULL] [i_1] [i_2] [i_3])) : (((/* implicit */int) arr_8 [i_4])))))))));
                                var_20 = ((/* implicit */unsigned long long int) (-(((arr_10 [i_1 - 1] [i_1] [i_1 + 1] [i_1 - 1]) + (((long long int) var_17))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_16);
    var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) == (((/* implicit */int) ((signed char) (_Bool)1)))))), (var_3)));
    var_23 &= ((/* implicit */unsigned int) var_9);
}
