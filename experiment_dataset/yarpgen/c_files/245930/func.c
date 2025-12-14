/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245930
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
    var_16 |= ((unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)8127)) || (((/* implicit */_Bool) (unsigned short)38381))))) % (((/* implicit */int) min(((unsigned short)57409), ((unsigned short)63417))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 19; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) max((((/* implicit */int) min((((unsigned short) arr_5 [i_2 - 1] [i_2 - 1])), (var_0)))), ((~(((/* implicit */int) arr_1 [i_2 + 1]))))));
                    arr_8 [i_0] [i_0] [i_1] [i_2 - 1] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_11)) + (((/* implicit */int) var_9)))) | ((~(((/* implicit */int) arr_5 [i_2 - 2] [i_2 - 1]))))));
                }
            } 
        } 
    } 
    var_18 &= min((((unsigned short) ((unsigned short) var_2))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)63677)) ? (((/* implicit */int) (unsigned short)6612)) : (((/* implicit */int) (unsigned short)21472)))))))));
}
