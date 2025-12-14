/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1990
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
    var_10 = var_9;
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */long long int) max(((short)13844), (var_1)));
                    arr_7 [i_1] = ((/* implicit */short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1]))))), (arr_1 [i_0 - 2])));
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((880599666) % (var_2))) : (((((/* implicit */_Bool) (short)13825)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9)))))));
    }
    var_11 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_9)) * (((/* implicit */int) (short)20116))))) ? ((-(((/* implicit */int) var_9)))) : (((/* implicit */int) max(((short)-13004), ((short)-13845))))))));
}
