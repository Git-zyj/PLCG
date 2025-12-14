/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238554
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((unsigned long long int) max((10104060033696762790ULL), (((/* implicit */unsigned long long int) (unsigned char)154))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_4))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) 272928312))) ? (728383993) : (((/* implicit */int) (short)16)))))));
                var_16 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)83)) : (((/* implicit */int) var_10)))) ^ (((/* implicit */int) ((((/* implicit */int) arr_0 [11U])) != (var_9)))))) * (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) var_2))))))));
                arr_4 [7ULL] [i_1] [i_0] = (+(max((max((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_1 + 2])))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))))))));
            }
        } 
    } 
    var_17 &= ((((/* implicit */_Bool) (((-(((/* implicit */int) var_7)))) / ((-(((/* implicit */int) var_5))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 504403158265495552ULL))))) : (((/* implicit */int) var_6)));
}
