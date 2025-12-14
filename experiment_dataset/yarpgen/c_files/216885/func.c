/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216885
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
    var_12 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned char) var_2)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */short) var_8);
                arr_5 [i_1] = ((/* implicit */long long int) (-(((int) ((577125740) >> (((((/* implicit */int) (short)4942)) - (4918))))))));
                arr_6 [i_0] [i_1] [i_0] |= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_3 [i_1 + 2] [i_1 + 3])))) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1 + 2] [i_1])) ? (-8267558579531729003LL) : (((/* implicit */long long int) arr_3 [i_1 + 2] [i_1 + 2])))))));
                arr_7 [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -577125741)) ? (((((/* implicit */_Bool) (short)-4942)) ? (((/* implicit */int) (unsigned char)219)) : (((/* implicit */int) (short)0)))) : (((/* implicit */int) ((short) arr_2 [i_0] [i_0])))))) ? ((((-(((/* implicit */int) (unsigned char)219)))) / (((/* implicit */int) (unsigned short)28782)))) : (((/* implicit */int) var_6))));
            }
        } 
    } 
}
