/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237376
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 4; i_1 < 21; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */int) var_0);
                var_20 |= ((/* implicit */unsigned short) var_2);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 2; i_2 < 20; i_2 += 2) 
    {
        for (short i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((0) & (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) arr_2 [i_2 - 2])) ? (((/* implicit */int) arr_11 [i_2 - 1] [i_2 - 2] [i_3])) : (((/* implicit */int) arr_2 [i_2 - 1])))))))));
                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) var_3))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((-1) / (((/* implicit */int) (unsigned short)35357)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_7))))) ? (var_11) : (((/* implicit */int) ((((/* implicit */int) (signed char)95)) <= (((/* implicit */int) (unsigned short)52078)))))))));
}
