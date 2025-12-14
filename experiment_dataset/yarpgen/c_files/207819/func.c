/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207819
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
    var_20 = ((/* implicit */unsigned short) ((int) (-(((/* implicit */int) var_13)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) -326224159)) ? (-326224149) : (((/* implicit */int) (unsigned short)18775)))), (max((((/* implicit */int) (unsigned short)18755)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_0 [i_0]))))))));
                    var_21 = ((/* implicit */unsigned short) (((+((+(326224142))))) >> ((((~(((int) -326224152)))) - (326224136)))));
                }
            } 
        } 
    } 
}
