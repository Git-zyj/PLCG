/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219589
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        arr_9 [i_0] [(signed char)4] [i_0] = ((/* implicit */_Bool) arr_2 [7] [i_1] [8U]);
                        arr_10 [i_3] [i_3] [i_3 - 1] [i_3 - 1] [i_3] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_2))));
                        arr_11 [i_0] [i_1] [i_1] [i_2] [i_1] = ((/* implicit */long long int) arr_6 [i_0] [i_1] [i_1] [(unsigned short)13]);
                        arr_12 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */long long int) var_2);
                        arr_13 [i_2] [i_1] [i_2 - 1] = ((/* implicit */short) var_9);
                    }
                    arr_14 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))), ((+(arr_6 [i_2 - 1] [i_2 - 1] [i_1] [i_2 - 1])))));
                }
            } 
        } 
    } 
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 996256094U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))) : (min((var_8), (((/* implicit */unsigned int) var_2))))))) ? (((/* implicit */unsigned int) max(((~(-1107148392))), (((/* implicit */int) (!(((/* implicit */_Bool) -1488260813)))))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : ((-(var_8)))))));
    var_11 = ((/* implicit */long long int) (-((~(var_3)))));
}
