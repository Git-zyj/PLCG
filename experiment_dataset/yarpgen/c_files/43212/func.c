/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43212
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */int) (~(min((((/* implicit */unsigned int) arr_5 [i_1 + 1] [i_1])), (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1] [i_2] [i_2] [i_4])) ? (var_12) : (arr_4 [i_1])))))));
                                var_14 = ((/* implicit */_Bool) ((((((/* implicit */long long int) var_6)) / (arr_0 [i_1 - 1] [i_1 + 1]))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_5 [i_0] [i_1])) <= (var_12)))))));
                                var_15 = (+(444521314U));
                                var_16 |= ((/* implicit */long long int) (!(((((/* implicit */_Bool) arr_5 [i_1 - 1] [(short)4])) && (((/* implicit */_Bool) arr_5 [i_1 + 1] [(_Bool)1]))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned short) 3850445984U);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) (~((~(var_11)))));
}
