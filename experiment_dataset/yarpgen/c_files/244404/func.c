/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244404
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
    var_18 = var_5;
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_19 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)0))), (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1]))) : (2099123046239003447ULL)))))) ? ((~(max((16347621027470548178ULL), (2409138536101545978ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-11127))))));
                    arr_8 [i_0] [i_1] = ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) -799135422)), (16347621027470548162ULL))), (max((((/* implicit */unsigned long long int) 175080326)), (arr_2 [i_0])))))) ? (((min((((/* implicit */unsigned long long int) 1159572092U)), (4505948371174503210ULL))) ^ (((/* implicit */unsigned long long int) 212327090)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) + (((/* implicit */int) arr_1 [(_Bool)1] [i_1]))))) ? (((/* implicit */int) var_10)) : (((int) arr_3 [i_0] [i_1]))))));
                    var_20 = ((/* implicit */_Bool) (~(arr_2 [i_0])));
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) (_Bool)1);
                }
            } 
        } 
    } 
}
