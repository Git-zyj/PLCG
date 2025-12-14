/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232844
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
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)26816)) : (var_0)))) ? (((/* implicit */long long int) var_0)) : (var_1)));
    var_12 = ((/* implicit */unsigned char) var_4);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [i_1 - 2] [i_1 + 1]) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) (short)26801))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41126))) * (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)52)))));
                            var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */int) arr_2 [i_3] [i_1])) : (((/* implicit */int) var_10)))) - (((/* implicit */int) ((arr_6 [i_2]) == (arr_6 [i_2]))))))) ? ((-(((/* implicit */int) (short)20374)))) : (max((((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_3])), (((((/* implicit */_Bool) (unsigned char)52)) ? (((/* implicit */int) (unsigned char)52)) : (((/* implicit */int) var_6))))))));
                            arr_9 [i_2] [i_1] [i_2] [i_0] [i_3] = ((/* implicit */unsigned int) ((unsigned char) arr_7 [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1 - 1]));
                        }
                    } 
                } 
                var_15 = ((/* implicit */short) max((arr_0 [i_1 + 1]), (((/* implicit */unsigned char) ((_Bool) arr_8 [i_0] [i_1] [i_0] [i_1])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            for (unsigned char i_6 = 1; i_6 < 19; i_6 += 4) 
            {
                {
                    var_16 = ((/* implicit */short) 5U);
                    var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)238))));
                }
            } 
        } 
    } 
}
