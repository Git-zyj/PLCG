/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212240
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
    var_13 += ((((/* implicit */_Bool) (~(-1473773105)))) ? (max((((var_1) % (65024))), (var_2))) : (var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_14 ^= (+(arr_2 [i_0]));
                arr_4 [i_0] = (~(((arr_0 [i_0] [i_0]) ^ (((int) 1436900572)))));
                arr_5 [i_0] [15] = (+((~(arr_2 [i_0]))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_15 = max((((((/* implicit */_Bool) var_9)) ? (((((var_4) + (2147483647))) >> (((var_1) + (799478315))))) : (arr_8 [i_0] [i_0] [i_2] [i_2] [0] [i_4]))), (-1436900580));
                                var_16 = (-((((+(-221889866))) & (((int) arr_3 [i_0])))));
                                var_17 = ((/* implicit */int) min((var_17), (arr_3 [i_0])));
                                var_18 &= ((((/* implicit */_Bool) ((arr_8 [i_4 + 3] [i_4 + 1] [i_4] [i_4 + 3] [i_4] [i_4]) | (arr_9 [i_4 + 2] [i_4 - 1] [i_4] [i_4] [i_4] [i_4])))) ? (min((var_5), (arr_8 [i_4 + 3] [i_4 - 1] [i_4] [i_4 - 1] [i_4] [i_4]))) : ((~(-2113762920))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = max(((((-(var_3))) / (var_4))), ((-(((((/* implicit */_Bool) var_9)) ? (var_2) : (var_2))))));
    var_20 = var_4;
}
