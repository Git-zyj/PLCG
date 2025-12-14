/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35239
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
    var_20 = ((/* implicit */short) (+(((min((((/* implicit */unsigned long long int) var_13)), (9186501149975233579ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_3] = ((((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_2))))))) ? (max((((/* implicit */unsigned long long int) ((496801391U) < (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))), (((var_11) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) : (max((max((((/* implicit */unsigned long long int) (signed char)-24)), (3717293639147323431ULL))), (var_18))));
                        arr_12 [i_3] [i_1] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned char) ((var_11) > (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_17)))))))), (var_2)));
                    }
                } 
            } 
        } 
        arr_13 [11U] = ((/* implicit */unsigned short) ((((min((((((/* implicit */_Bool) (unsigned short)51270)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) var_9)))), (((/* implicit */int) (short)-3254)))) + (2147483647))) << (((((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)246))) : (2442092200326875137LL))) - (246LL)))));
    }
    var_21 ^= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_14)), (-2442092200326875161LL)));
    var_22 = min((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */unsigned long long int) var_4)) + (max((var_12), (12152452460673059073ULL))))));
}
