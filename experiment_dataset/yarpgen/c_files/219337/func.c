/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219337
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (((~(arr_2 [i_0] [i_1] [i_2]))) / (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) (short)-1999)) : (((/* implicit */int) var_6))))))) ? (min((arr_3 [i_0]), (((/* implicit */long long int) arr_5 [i_2 - 1] [i_2 + 1] [i_1 - 1])))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (short)-1996))))));
                    var_16 ^= ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-9158)) ? (((/* implicit */int) (_Bool)0)) : ((-2147483647 - 1))))), (var_3)));
                    var_17 = ((/* implicit */unsigned short) (-(max((((/* implicit */unsigned long long int) ((var_3) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16069)))))), ((~(var_10)))))));
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_2 [i_2] [i_2 - 1] [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_1] [(_Bool)1]) >= (arr_4 [i_0]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49466))) - (11778509182723890675ULL)))));
                    var_19 -= ((/* implicit */signed char) (~(((/* implicit */int) var_0))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) max((min((var_3), (((/* implicit */long long int) (~(-695224275)))))), (((/* implicit */long long int) ((signed char) var_10)))));
}
