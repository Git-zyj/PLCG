/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212068
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
    var_19 = ((/* implicit */signed char) var_8);
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_20 += ((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_1]);
                    arr_8 [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) arr_1 [i_0 - 1])))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) arr_2 [5U] [i_1] [i_3]);
                                arr_15 [(signed char)4] [i_1] [i_0] = arr_5 [i_0] [19U] [i_0] [i_0];
                                var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (signed char)113))) ? ((-(((/* implicit */int) (signed char)95)))) : ((-(((/* implicit */int) var_6))))))) != (var_3)));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (((~(((/* implicit */int) arr_7 [i_1] [i_1])))) ^ ((~(((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_1] [(signed char)14] [(signed char)16] [i_2])))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 1; i_5 < 13; i_5 += 1) 
    {
        for (signed char i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            {
                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_16 [i_5 - 1] [i_5 + 2]), (arr_23 [i_5 + 1] [i_5 + 2])))) ? (((/* implicit */int) min((arr_23 [i_5 - 1] [i_5 + 1]), (arr_23 [i_5 - 1] [i_5 - 1])))) : (((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */int) arr_16 [i_5] [i_5 + 1])) : (((/* implicit */int) (signed char)125))))));
                var_25 = ((((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) (signed char)116)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((~(((/* implicit */int) arr_7 [i_5 + 2] [i_6])))) == (((/* implicit */int) ((signed char) (signed char)7))))))) : (min((arr_10 [i_5 + 1] [i_6] [i_6] [i_5]), (((/* implicit */unsigned int) arr_22 [i_5 + 2] [i_5 + 1])))));
                var_26 += arr_5 [i_5 - 1] [i_6] [i_6] [i_6];
            }
        } 
    } 
}
