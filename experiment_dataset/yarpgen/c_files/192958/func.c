/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192958
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
    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_12))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_4 [i_0 + 3] [i_0]) % (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0] [i_0])) ? (arr_2 [i_1]) : (((/* implicit */int) var_11))))))) ? (((/* implicit */unsigned int) max(((-(((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_1])))), (min((arr_3 [i_0]), (arr_3 [(unsigned short)18])))))) : (2825116779U)));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_19 ^= ((/* implicit */unsigned char) var_13);
                                var_20 = arr_8 [i_2] [i_2] [i_2] [i_1] [i_0];
                                arr_12 [i_2] [i_1] [i_1] [10] [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) min((((/* implicit */int) var_0)), (-2132919278)))) ? (((/* implicit */int) min(((signed char)118), ((signed char)118)))) : (((((/* implicit */int) arr_10 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) / (var_17)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
