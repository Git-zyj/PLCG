/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3135
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
    var_19 = ((/* implicit */short) (-((((~(((/* implicit */int) var_15)))) | (var_12)))));
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) -770122141))));
    var_21 ^= ((/* implicit */unsigned int) ((int) (-((-(7340032))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 19; i_2 += 4) 
            {
                {
                    var_22 = ((((/* implicit */int) var_17)) <= (((/* implicit */int) var_2)));
                    arr_6 [i_1] = ((/* implicit */short) (-(-7340033)));
                    arr_7 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 7340032))))) == ((-(-7340055))))))));
                }
            } 
        } 
    } 
}
