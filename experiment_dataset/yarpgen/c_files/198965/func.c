/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198965
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
    var_18 = ((/* implicit */unsigned short) min((var_6), (((/* implicit */short) min((((((/* implicit */int) var_16)) == (((/* implicit */int) var_13)))), ((_Bool)1))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((_Bool) (~(((/* implicit */int) arr_2 [i_0]))));
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)61440)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)12170))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_11 [i_2] [(_Bool)1] &= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_7 [i_2] [i_3])) : (((/* implicit */int) (short)-8318)))), (((((/* implicit */_Bool) arr_7 [(short)15] [(short)15])) ? (((/* implicit */int) arr_7 [i_3] [i_2])) : (((/* implicit */int) arr_7 [i_2] [i_3]))))));
                var_21 = ((/* implicit */short) max((var_21), (min((((/* implicit */short) ((_Bool) (-(((/* implicit */int) (short)-8323)))))), (arr_0 [i_2])))));
            }
        } 
    } 
}
