/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231817
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
    var_15 = (-(var_12));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_9 [i_1] [i_1] = ((/* implicit */int) ((_Bool) (-(((723627918) & (-723627934))))));
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) ((((-1) + (2147483647))) >> (((var_12) - (448786401))))))) ^ ((-(((var_4) + (arr_5 [4] [4] [i_2])))))));
                    arr_11 [i_0] [i_0] [(_Bool)1] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) << (((var_6) - (1410110613)))))), (min((var_11), (((/* implicit */unsigned int) arr_0 [i_0]))))));
                }
            } 
        } 
    } 
    var_16 = ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) var_8)) / (var_1))))))) ^ (var_8));
}
