/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216336
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
    var_16 = (+(((/* implicit */int) (short)4025)));
    var_17 ^= ((/* implicit */int) ((((/* implicit */int) min((var_6), (((/* implicit */unsigned short) var_5))))) > (((/* implicit */int) min((((((/* implicit */int) var_10)) > (((/* implicit */int) var_2)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) > (var_3))))))));
    var_18 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_19 += ((/* implicit */unsigned short) (+(((/* implicit */int) ((7115158201910132104ULL) > (((/* implicit */unsigned long long int) arr_5 [i_1 - 1] [i_1 - 3] [i_1 - 2])))))));
                    var_20 = ((/* implicit */unsigned char) var_14);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) var_10))));
}
