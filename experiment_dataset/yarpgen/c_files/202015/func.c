/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202015
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
    var_10 = min((((/* implicit */int) var_6)), (((var_8) & (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))))));
    var_11 = ((/* implicit */unsigned int) var_6);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(min((-541074523), (arr_2 [i_0] [i_1]))))))));
                arr_6 [i_0] [i_0] [9] = ((/* implicit */unsigned long long int) (((-(arr_3 [9] [i_0] [i_1 - 1]))) != (((((/* implicit */_Bool) arr_3 [(_Bool)1] [i_0] [i_1 - 1])) ? (arr_3 [11ULL] [i_0] [i_1 - 2]) : (arr_5 [i_0] [i_0 + 4])))));
                arr_7 [i_0 + 4] [i_0] [14] = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_1 + 1]);
            }
        } 
    } 
}
