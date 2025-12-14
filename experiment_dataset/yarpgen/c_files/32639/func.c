/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32639
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
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */int) ((_Bool) max((arr_4 [i_0]), (((/* implicit */long long int) arr_2 [i_0] [(_Bool)1])))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) min((-8354019154363081823LL), (((/* implicit */long long int) (short)1521))))) && (((/* implicit */_Bool) min((arr_6 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_4 [i_1]))))))))));
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) ((_Bool) arr_4 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) max((arr_4 [i_2]), (((/* implicit */long long int) arr_3 [i_2]))))))) : (arr_5 [i_1] [i_1])));
                }
            } 
        } 
    } 
    var_19 = ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) + (((/* implicit */int) ((short) var_15)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) ((((var_13) + (2147483647))) >> (((var_14) - (4988304923126222279LL))))))))) : (((/* implicit */int) ((((/* implicit */int) (short)-1531)) < (((/* implicit */int) ((signed char) 13LL)))))));
    var_20 = ((var_17) > (((/* implicit */int) ((min((var_4), (var_13))) < (var_13)))));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */short) var_11)), (max((var_1), (((/* implicit */short) var_12))))))) % (max((((/* implicit */int) ((_Bool) var_9))), (((int) var_2))))));
}
