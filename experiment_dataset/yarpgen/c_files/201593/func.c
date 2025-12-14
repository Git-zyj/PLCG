/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201593
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
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned short i_2 = 4; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_6 [(signed char)4] [i_1] [(_Bool)1] [i_2 + 1])))) ^ (((max((arr_6 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) var_9)))) % (((/* implicit */long long int) ((/* implicit */int) max((var_5), (arr_2 [i_2])))))))));
                    arr_9 [i_0] [(signed char)16] &= ((/* implicit */unsigned short) arr_2 [i_1]);
                }
            } 
        } 
    } 
    var_10 = ((/* implicit */int) ((((/* implicit */unsigned int) -380888495)) != (var_8)));
    var_11 += ((/* implicit */unsigned int) ((max((((/* implicit */int) var_9)), (((((/* implicit */int) (unsigned short)31050)) ^ (((/* implicit */int) var_6)))))) >> ((((+((-(var_2))))) - (2038483013U)))));
}
