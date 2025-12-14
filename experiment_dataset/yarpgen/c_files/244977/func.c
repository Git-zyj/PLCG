/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244977
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) 1048439271U)) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) (unsigned char)252))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 12; i_1 += 4) 
        {
            {
                var_13 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_3 [i_1 - 4] [i_1 - 1] [i_1 + 2])) ? (((/* implicit */int) (unsigned char)151)) : (((/* implicit */int) arr_3 [i_1 - 3] [i_1 - 4] [i_1 - 4])))) << (((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_1 - 4]) : (((/* implicit */unsigned long long int) arr_2 [i_1 - 1] [i_1 - 2])))) - (12046969656718914431ULL)))));
                arr_5 [i_0] [i_1] &= ((/* implicit */unsigned int) ((arr_1 [i_0]) < (((/* implicit */long long int) ((/* implicit */int) var_11)))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) var_5);
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((3096943232U), (3096943232U)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((unsigned short) (unsigned short)1920))) : (((/* implicit */int) (signed char)35)))) : (((/* implicit */int) var_4))));
}
