/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233367
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_2])) * (((/* implicit */int) var_4))))), ((~(1869855972506876298ULL)))));
                    var_12 = ((/* implicit */long long int) var_5);
                    arr_9 [i_0] [i_1] [i_2] [i_1] = (~(((/* implicit */int) ((unsigned char) ((arr_7 [i_0] [(_Bool)1] [i_2] [i_0]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8)))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)1)) > (((/* implicit */int) var_10))))) & (((/* implicit */int) var_6))));
    var_14 = ((/* implicit */unsigned long long int) ((min((((_Bool) var_1)), (var_5))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)18204)) < (-627391748))))));
    var_15 ^= ((/* implicit */unsigned char) ((max((((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) var_1)))), (((/* implicit */int) ((unsigned short) var_10))))) + (((/* implicit */int) var_7))));
}
