/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21444
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
    var_11 = ((/* implicit */unsigned char) (_Bool)1);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_0] [(short)7] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (short)-27977)) ? (5063853508197209857LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)117))));
                    arr_8 [i_0] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-124)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-37)) : (((/* implicit */int) (unsigned char)11)))) : (((/* implicit */int) (short)31294))))) ? (((/* implicit */int) (signed char)-67)) : (var_3)));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */long long int) (unsigned char)104);
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 777334975338953274LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))));
}
