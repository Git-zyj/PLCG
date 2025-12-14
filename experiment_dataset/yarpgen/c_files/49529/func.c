/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49529
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
    var_11 = ((/* implicit */long long int) var_5);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */short) (+(min((arr_4 [i_2 - 1] [i_1 - 1]), (arr_4 [i_2 - 1] [i_1 - 1])))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(arr_0 [i_0])))), (max((14347178751239065450ULL), (((/* implicit */unsigned long long int) var_9))))))) ? (((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) + (2147483647))) >> (((arr_4 [i_1] [i_1]) - (891796677U)))))) % (var_6))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 + 2] [i_1 + 2]))) & (arr_6 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2 - 2]))))));
                    var_12 = ((/* implicit */short) min((((/* implicit */long long int) ((unsigned int) var_5))), (((((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) / (arr_1 [i_0] [i_0]))) % (((/* implicit */long long int) var_0))))));
                }
            } 
        } 
    } 
    var_13 = ((((/* implicit */long long int) ((/* implicit */int) ((var_6) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) * (var_1));
    var_14 = ((/* implicit */short) (((-(var_10))) % (((/* implicit */long long int) max((((/* implicit */unsigned int) var_4)), (var_2))))));
}
