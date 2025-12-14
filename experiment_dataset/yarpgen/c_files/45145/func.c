/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45145
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (max((((/* implicit */long long int) var_18)), (var_10))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (var_14) : (((/* implicit */int) (!(((((/* implicit */_Bool) 1222426695196252567LL)) && (((/* implicit */_Bool) var_0)))))))));
    var_20 = (unsigned short)56465;
    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (!(((/* implicit */_Bool) 2147483627)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_6 [3LL] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483627)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38155)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)251)) / (((var_13) / (((/* implicit */int) var_15))))))) : (((((/* implicit */_Bool) (-(0ULL)))) ? (max((((/* implicit */unsigned long long int) (_Bool)0)), (8170761601503956428ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38159)))))));
                    arr_7 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) min((max((((/* implicit */int) (signed char)-4)), (var_14))), (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) 4294967281U)), (var_10)))))))));
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((8404419830302517160LL) / (((/* implicit */long long int) 2147483627)))), (((/* implicit */long long int) ((var_6) / (var_13))))))) - (((((/* implicit */unsigned long long int) 2111533359)) - (var_11)))));
                    arr_9 [10ULL] [10ULL] &= ((/* implicit */unsigned char) var_9);
                }
            } 
        } 
    } 
}
