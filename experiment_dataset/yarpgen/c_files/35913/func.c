/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35913
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
    var_20 = ((/* implicit */short) var_6);
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) var_8))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (arr_6 [i_0]))))))) < (((/* implicit */int) var_7))));
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_2 + 1] [i_0] [(short)20])) + (((/* implicit */int) arr_5 [i_2 + 1] [i_0] [i_2]))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_2 [i_0]))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 15; i_5 += 3) 
            {
                {
                    arr_17 [i_5] [i_5] [i_3] [i_4] = (unsigned short)2;
                    arr_18 [i_5] [i_4] = (!(((/* implicit */_Bool) max(((-(((/* implicit */int) var_5)))), (((((/* implicit */int) arr_0 [(unsigned short)12])) * (((/* implicit */int) arr_2 [i_5]))))))));
                    var_23 ^= ((/* implicit */unsigned short) (short)32767);
                }
            } 
        } 
    } 
}
