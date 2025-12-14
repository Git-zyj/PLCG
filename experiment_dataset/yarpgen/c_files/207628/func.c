/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207628
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
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_16 = (((+((+(((/* implicit */int) var_9)))))) + (((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_1])) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_1])) : (((/* implicit */int) arr_1 [i_0 + 1] [i_1])))));
                    var_17 = (+(((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_1)))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_15), (((/* implicit */unsigned char) max(((signed char)-61), ((signed char)-61))))))) ? (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) var_0)))) / ((~(((/* implicit */int) var_10)))))) : (max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (var_3))), ((~(((/* implicit */int) var_11))))))));
    var_19 = ((/* implicit */short) ((int) var_6));
}
