/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49682
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
    for (short i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_16 [(short)12] [i_1] [(short)12] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_10 [i_0 - 2] [i_1 + 1])))) ? (max((((/* implicit */int) var_6)), (arr_6 [i_1] [i_1] [i_1 + 1]))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) < (1556492317U))))));
                                var_13 ^= ((((((/* implicit */_Bool) arr_10 [i_0 - 3] [i_1 + 1])) ? (arr_10 [i_0 - 1] [i_1 - 1]) : (arr_10 [i_0 + 1] [i_1 - 1]))) >> (((((arr_10 [i_0 - 1] [i_1 - 1]) << (((arr_10 [i_0 + 1] [i_1 + 1]) - (1349704250))))) - (1349704247))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (802367985U)))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_12)) : (var_7))))), (((((/* implicit */_Bool) arr_9 [i_1] [i_0 - 1] [i_1] [i_0 - 1])) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) (unsigned char)0))))));
            }
        } 
    } 
    var_15 = max((var_3), (((((/* implicit */int) max((((/* implicit */short) (unsigned char)243)), ((short)(-32767 - 1))))) & (-1778256579))));
    var_16 = (+(min((var_4), (-1778256579))));
}
