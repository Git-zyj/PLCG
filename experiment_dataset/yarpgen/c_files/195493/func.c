/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195493
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
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned short i_2 = 4; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [23U] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2 + 1] [i_2 - 1] [i_2 - 4])) ? (((/* implicit */int) ((signed char) var_0))) : (((/* implicit */int) arr_7 [i_2 + 1] [i_2 + 1] [i_2 - 1]))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)31922)) * (((/* implicit */int) (unsigned char)0))))))))));
                    arr_10 [1] [i_2 - 2] [5LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_9)) ? (arr_5 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2 - 3])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)2)))))) : (max((max((1433595007407310927ULL), (((/* implicit */unsigned long long int) arr_6 [i_2])))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_2 [i_0])), (var_4))))))));
                    arr_11 [i_0] [i_0] [i_1] [6LL] = ((/* implicit */signed char) (+(max((((((/* implicit */_Bool) (unsigned char)4)) ? (16473559720708636249ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13719))))), (((/* implicit */unsigned long long int) var_9))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) (+((-(((/* implicit */int) (signed char)-1)))))))));
}
