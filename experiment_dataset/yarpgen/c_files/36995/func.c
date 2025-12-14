/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36995
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
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)45838)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
                    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) max((14678694447936497486ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))));
                }
            } 
        } 
    } 
    var_15 = ((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */int) ((unsigned char) var_12))) : (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_1)) - (26840)))))))));
    var_16 ^= ((/* implicit */unsigned char) ((short) max((((/* implicit */unsigned long long int) ((unsigned short) var_13))), (var_12))));
}
