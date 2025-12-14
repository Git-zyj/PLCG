/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25065
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
    var_10 = ((/* implicit */unsigned int) var_6);
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (max((var_7), (((/* implicit */long long int) var_5)))) : (var_7)));
    var_12 = ((/* implicit */unsigned short) ((long long int) ((unsigned long long int) ((((/* implicit */int) var_6)) < (((/* implicit */int) (unsigned short)252))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) ((arr_1 [i_0]) == (arr_0 [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned char) max((((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_1 [i_0])))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)31744)))))));
        arr_4 [4LL] = ((/* implicit */unsigned char) 4153256676U);
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((-8102118886623939209LL), (((/* implicit */long long int) ((signed char) var_0)))));
        arr_6 [4U] [4U] = ((/* implicit */_Bool) arr_0 [i_0]);
    }
    var_13 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) ((signed char) var_3))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (13694396672951129982ULL))))), (((/* implicit */unsigned long long int) ((unsigned char) ((short) var_8))))));
}
