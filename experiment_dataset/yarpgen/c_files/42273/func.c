/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42273
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 8; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_2 - 2] = ((min((arr_0 [i_1] [i_1]), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)183)) - (((/* implicit */int) (unsigned char)203))))))) / (((((/* implicit */_Bool) 4294967281U)) ? (4294967279U) : (((unsigned int) 3030994177U)))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 9; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) min((var_20), (arr_0 [i_0] [i_3])));
                                var_21 = ((/* implicit */unsigned char) (+(3030994199U)));
                                arr_14 [i_4] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (!(min((((((/* implicit */_Bool) (unsigned char)35)) && (((/* implicit */_Bool) arr_6 [i_0])))), ((!(((/* implicit */_Bool) var_10))))))));
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((unsigned int) ((3030994188U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_0] [6U]))))))));
                                arr_15 [i_0] [i_0] = max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)203))) + (1263973104U))), (((/* implicit */unsigned int) min((((/* implicit */short) (unsigned char)248)), (arr_12 [i_0] [i_0] [1U] [i_3] [i_0] [i_0] [i_2 + 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((var_10) + (max((((unsigned int) var_19)), (min((2698990777U), (var_8))))));
}
