/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208758
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
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */long long int) ((((((/* implicit */int) arr_0 [(_Bool)1])) / (((/* implicit */int) arr_1 [i_0] [i_1])))) << (((((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-17181)))) - (10472)))));
                var_20 = ((/* implicit */_Bool) max((((/* implicit */int) ((signed char) arr_2 [i_0] [i_1] [i_1]))), ((+(((/* implicit */int) arr_3 [i_1]))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 16; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            arr_8 [(unsigned char)8] [i_2] [i_2] [i_3] [i_2] = ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-7551))))) ? (((/* implicit */int) min((arr_2 [i_2 - 2] [i_2 - 1] [i_2 - 2]), (arr_2 [i_2 + 1] [i_2 - 2] [i_2 + 1])))) : (((/* implicit */int) var_13)));
                            var_21 *= ((/* implicit */_Bool) arr_2 [i_1] [i_2 - 1] [(signed char)11]);
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) arr_6 [(signed char)14] [(signed char)14]))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) arr_7 [10] [i_1] [(_Bool)1] [i_1]))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_4 = 0; i_4 < 24; i_4 += 2) 
    {
        for (long long int i_5 = 2; i_5 < 21; i_5 += 2) 
        {
            for (int i_6 = 0; i_6 < 24; i_6 += 3) 
            {
                {
                    arr_17 [(unsigned char)3] [i_5 + 1] [(unsigned char)3] = 9007199254740991ULL;
                    arr_18 [(signed char)6] [(signed char)6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned char)237)))));
                }
            } 
        } 
    } 
}
