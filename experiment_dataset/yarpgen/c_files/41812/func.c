/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41812
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
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((unsigned short) var_8)))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [(signed char)1] [i_1] [i_1] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (802030966U))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_5 [i_2] [i_0] [i_0])) : (((/* implicit */int) arr_4 [(_Bool)1] [i_1] [i_0 + 1]))))) ? (((unsigned int) 2093056U)) : (((/* implicit */unsigned int) ((/* implicit */int) (((-2147483647 - 1)) < (((/* implicit */int) (unsigned char)199))))))))) ? (((((/* implicit */_Bool) ((signed char) (short)-28837))) ? (((var_0) ^ (var_12))) : (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_3 [(signed char)3])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (3492936330U))))))));
                    arr_9 [i_0] [3ULL] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_5 [i_0 + 1] [i_1 - 1] [i_0 + 1])) + (2147483647))) << ((((((-(arr_2 [i_0 - 1]))) + (6942469964110793211LL))) - (20LL)))));
                }
            } 
        } 
    } 
}
