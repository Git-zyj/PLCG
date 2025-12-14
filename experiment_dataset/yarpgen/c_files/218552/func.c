/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218552
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
    var_15 = ((/* implicit */unsigned int) 0ULL);
    var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) ((_Bool) (~(1179593665))))), (var_10)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 9; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 8; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_17 [i_1] [i_1] [i_2] [i_3] [i_1] = ((unsigned int) ((((/* implicit */_Bool) arr_15 [i_0] [i_2 + 1] [i_2 - 2] [i_2] [i_3 - 2] [i_3 - 2])) && (((/* implicit */_Bool) arr_15 [i_1] [i_2 + 1] [i_2 - 2] [i_2 + 1] [i_3 - 2] [i_3 - 2]))));
                                arr_18 [5U] [i_1] [i_1] [5U] [i_2] [i_3] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((long long int) ((int) var_2))))));
                                var_17 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)0))));
                                var_18 = ((/* implicit */signed char) (((((~(var_0))) + (2147483647))) >> ((((+(((unsigned int) 1914608059627211778ULL)))) - (3727559660U)))));
                                arr_19 [i_0] [i_0] [i_2 + 1] [i_0] [i_4] [i_1] [i_2] = ((/* implicit */unsigned long long int) (+(((((var_11) + (2147483647))) >> (((((/* implicit */int) arr_3 [i_3 + 3])) + (32)))))));
                            }
                        } 
                    } 
                    arr_20 [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_4 [i_0] [i_2 + 2])))) * ((+(((((/* implicit */long long int) var_3)) / (var_6)))))));
                }
            } 
        } 
    } 
}
