/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39721
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
    var_18 = ((/* implicit */unsigned int) var_9);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) arr_5 [i_0])), (((((1832970656) != (((/* implicit */int) (short)8065)))) ? (min((var_11), (((/* implicit */unsigned int) (unsigned char)15)))) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_6 [i_2] [i_1] [i_0] [i_0])), (var_15))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (int i_4 = 2; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_19 *= ((/* implicit */unsigned char) ((max((arr_0 [i_2]), (arr_0 [i_4 - 2]))) < (((/* implicit */unsigned int) ((arr_6 [i_0] [i_1 - 1] [i_2] [i_4 - 2]) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_3] [i_4])) : (((/* implicit */int) arr_8 [i_4 - 2] [i_4 - 2])))))));
                                var_20 = ((/* implicit */short) ((((/* implicit */int) (!(arr_6 [i_4] [i_4 - 2] [i_1 + 1] [i_1 + 1])))) << (((((/* implicit */int) var_0)) + (31334)))));
                                arr_14 [i_0] [i_0] [i_3] = ((/* implicit */long long int) max((arr_3 [i_2]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_13 [i_1] [i_2] [i_2] [i_4])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
