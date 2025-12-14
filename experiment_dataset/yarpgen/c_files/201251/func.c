/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201251
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
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1 + 2] [i_0] = ((/* implicit */long long int) (unsigned short)32256);
                    var_13 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) max((arr_7 [i_0] [i_1] [i_1] [i_1]), (((/* implicit */unsigned char) var_5))))) * (((((/* implicit */int) var_7)) % (((/* implicit */int) var_3))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_4))))))));
    var_15 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_2)) : (-1075005373373194421LL)))), (((var_6) * (var_4)))))) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) < (((/* implicit */int) var_3))))) : (((((((/* implicit */int) ((short) (signed char)-20))) + (2147483647))) >> (((((var_5) ? (((/* implicit */long long int) var_2)) : (-8707486373112589292LL))) + (8707486373112589302LL))))));
}
