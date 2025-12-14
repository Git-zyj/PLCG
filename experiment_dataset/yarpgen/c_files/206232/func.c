/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206232
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
    var_13 = ((/* implicit */signed char) (((_Bool)1) ? (8296232516883305258LL) : (4747926344261516477LL)));
    var_14 = ((/* implicit */signed char) var_10);
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) ((3008391176U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                var_15 = ((/* implicit */unsigned short) (~(((arr_3 [i_0 - 1]) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                arr_6 [i_0] [i_1] = ((((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */short) var_2)), ((short)-27171))))))) / (5003256778664610162ULL));
            }
        } 
    } 
}
