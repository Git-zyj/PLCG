/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23313
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
    var_13 = var_4;
    var_14 = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) ((signed char) var_5))), (((unsigned long long int) var_2)))) > (var_5)));
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_11))) * (((long long int) (-(((/* implicit */int) var_11))))))))));
    var_16 = ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */long long int) ((unsigned char) arr_1 [i_2] [i_0]));
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (((+(min((((/* implicit */int) (signed char)127)), (1594609487))))) / (((/* implicit */int) ((((/* implicit */_Bool) max((arr_0 [i_0] [i_1]), (var_8)))) && (((/* implicit */_Bool) arr_2 [i_1])))))));
                }
            } 
        } 
    } 
}
