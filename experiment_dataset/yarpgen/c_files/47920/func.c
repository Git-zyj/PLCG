/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47920
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
    var_17 = ((/* implicit */signed char) var_5);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_2] [i_2] = ((/* implicit */int) -5585308286691205472LL);
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((unsigned long long int) var_9)))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_3) + (arr_4 [(signed char)4] [(signed char)4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 2796370122840263923ULL)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) / ((+(arr_4 [i_0] [i_0])))))));
                }
            } 
        } 
    } 
}
