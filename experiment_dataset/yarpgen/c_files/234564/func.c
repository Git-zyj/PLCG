/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234564
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
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 4; i_2 < 18; i_2 += 4) 
            {
                {
                    var_12 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((unsigned int) var_1)) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1]))))))))) & (((/* implicit */int) arr_5 [i_0] [i_0] [i_1]))));
                    var_13 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2907688271582414890ULL))));
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_5 [i_2] [i_2 - 1] [i_0])) - (((/* implicit */int) arr_5 [(_Bool)1] [i_0 - 3] [i_0])))) << (((max((max((2907688271582414890ULL), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) ((var_11) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))))))) - (9312555003568022827ULL)))));
                    var_14 = ((/* implicit */long long int) min((min((arr_6 [9] [i_0] [i_2]), (((/* implicit */unsigned long long int) var_7)))), ((~(arr_6 [i_2] [i_0] [i_2])))));
                }
            } 
        } 
    } 
    var_15 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((15539055802127136732ULL), (((/* implicit */unsigned long long int) var_11)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2907688271582414890ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-31))) : (10251919954934248516ULL)))) ? (min((15539055802127136715ULL), (((/* implicit */unsigned long long int) 1047872179)))) : (15539055802127136723ULL)))));
}
