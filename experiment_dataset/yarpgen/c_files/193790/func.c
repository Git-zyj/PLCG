/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193790
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
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */short) arr_4 [i_0]);
                    arr_11 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)60797)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_5 [i_0] [i_2])) : (min((((((/* implicit */int) arr_1 [i_0])) & (arr_8 [i_1]))), (((/* implicit */int) ((short) arr_3 [i_1 + 3] [(_Bool)1])))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)59171)) ? (((/* implicit */int) (unsigned short)16836)) : (((/* implicit */int) (short)6754))));
    var_16 = ((/* implicit */_Bool) min((min((((/* implicit */int) min((((/* implicit */unsigned char) var_7)), (var_6)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((short) (~(((/* implicit */int) var_0))))))));
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_6), (min((((/* implicit */unsigned char) var_7)), (var_6)))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) var_12)), (var_10)))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_2)), (var_5)))) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((unsigned char) ((unsigned short) var_13))))));
    var_18 = ((/* implicit */unsigned short) var_4);
}
