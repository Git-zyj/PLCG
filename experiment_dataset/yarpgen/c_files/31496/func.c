/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31496
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 19; i_2 += 2) 
            {
                {
                    var_15 ^= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (max((17350058749856212947ULL), (17350058749856212972ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (-3174561376905790258LL) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))), (((17350058749856212972ULL) / (1096685323853338670ULL)))));
                    arr_9 [i_0] [i_1 + 1] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_2 - 1] [i_2])))))));
                    var_16 = ((/* implicit */unsigned short) var_9);
                    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) 11486895335415961017ULL))));
                    arr_10 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 12777983995140382552ULL))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */long long int) 31U)) : (((long long int) 4294967261U))))));
    var_19 = ((/* implicit */unsigned short) var_5);
}
