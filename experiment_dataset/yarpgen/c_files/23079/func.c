/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23079
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
    var_15 = ((/* implicit */unsigned long long int) var_3);
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_14)), (var_9)))) ? (((/* implicit */long long int) (~((+(((/* implicit */int) var_5))))))) : ((-((((_Bool)1) ? (var_7) : (((/* implicit */long long int) 1866668087))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (short i_2 = 4; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_4 [i_2 + 1]))) ? (((long long int) max((((/* implicit */short) (_Bool)0)), ((short)25002)))) : (((/* implicit */long long int) max(((~(((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) min(((short)16422), (((/* implicit */short) (_Bool)1))))))))));
                    arr_8 [i_2] [i_2 + 1] = ((/* implicit */long long int) arr_2 [i_1]);
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_2])) && (((/* implicit */_Bool) arr_3 [i_1] [i_1])))))));
                    arr_9 [i_0] [i_0] [2ULL] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (short)-29643))));
                }
            } 
        } 
    } 
}
