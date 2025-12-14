/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234807
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [2ULL] [i_0] = ((/* implicit */signed char) (-(max((max((arr_2 [i_2 - 1] [i_0]), (((/* implicit */int) arr_3 [i_0] [i_1] [(short)17])))), (((/* implicit */int) max((arr_3 [i_0] [i_1] [(short)3]), (arr_7 [i_0] [i_0] [i_0]))))))));
                    arr_9 [i_0] = ((/* implicit */short) ((((_Bool) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [2]))))) ? (((/* implicit */int) min((((/* implicit */short) ((_Bool) arr_2 [i_0] [i_0]))), (min((arr_4 [i_0]), (((/* implicit */short) arr_1 [i_0]))))))) : ((+(((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_1] [(signed char)3])) ? (((/* implicit */int) arr_7 [1ULL] [i_1 + 2] [11])) : (((/* implicit */int) arr_6 [i_0] [i_0] [(signed char)21] [i_1 - 1]))))))));
                    arr_10 [21] [i_0] [i_0] = ((/* implicit */short) (~(max((min((((/* implicit */long long int) arr_6 [i_0] [i_1 + 1] [i_0] [i_0])), (arr_5 [i_0] [i_0] [5ULL] [i_0]))), (((/* implicit */long long int) arr_4 [i_0]))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) max(((~(((unsigned int) var_7)))), (((/* implicit */unsigned int) (-(((int) var_6)))))));
}
