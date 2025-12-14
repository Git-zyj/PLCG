/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52410
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
    var_18 &= ((/* implicit */_Bool) (~((+(((/* implicit */int) var_15))))));
    var_19 = var_0;
    var_20 = ((/* implicit */short) (~(((/* implicit */int) (short)(-32767 - 1)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 + 1] [i_1 - 1])))) && (((((/* implicit */_Bool) (short)20)) && (((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 + 1] [i_1 + 1])))))))));
                arr_4 [i_1] = ((/* implicit */unsigned int) arr_0 [i_1 - 1]);
                arr_5 [i_0] [i_1] = ((/* implicit */short) max((((arr_1 [i_1 + 1]) + (3845751549U))), (((/* implicit */unsigned int) max((((/* implicit */int) ((arr_1 [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_15)))))))));
                arr_6 [i_0] [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1 + 1])) ^ (((/* implicit */int) arr_0 [i_1 - 1]))))) ? (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 3845751530U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_15))))))) : ((-(3845751556U)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            {
                arr_14 [(unsigned char)0] [i_2] [i_3] = ((/* implicit */short) (~(max((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3]))) != (arr_13 [i_2])))), (449215742U)))));
                var_22 = ((/* implicit */unsigned int) max((var_22), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_2]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) + (((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3] [i_2] [i_2]))) : (arr_1 [i_3]))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_2] [i_2] [i_3])))))))));
            }
        } 
    } 
}
