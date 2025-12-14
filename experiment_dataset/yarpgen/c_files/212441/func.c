/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212441
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
    var_12 = ((/* implicit */int) (-(((((/* implicit */long long int) ((((/* implicit */int) var_8)) - (((/* implicit */int) (signed char)-98))))) ^ (((((/* implicit */long long int) ((/* implicit */int) var_4))) + (8490066703034175756LL)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) 2965448706U))));
                                var_14 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_4] [(unsigned char)4] [(unsigned char)4] [i_0])) + ((~(((((/* implicit */_Bool) (signed char)-114)) ? (((/* implicit */int) arr_10 [i_0] [i_1 - 1] [10U] [i_2])) : (((/* implicit */int) (signed char)35))))))));
                                arr_15 [i_0] [i_0] [(unsigned char)2] [i_1 - 1] [i_1 - 1] [i_3] [i_4 - 3] |= ((arr_3 [i_2]) * (((/* implicit */int) (!((_Bool)1)))));
                                arr_16 [i_1] = ((/* implicit */unsigned short) (((+(arr_12 [i_0] [i_1] [i_4 - 4] [i_4 - 4]))) ^ (((/* implicit */int) arr_6 [i_1] [i_3] [i_1]))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned char) arr_3 [i_2 + 1]);
                }
            } 
        } 
    } 
}
