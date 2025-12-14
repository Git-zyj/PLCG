/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22557
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
    var_18 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)8793)) >> (((((/* implicit */int) (unsigned short)56743)) - (56727)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8793)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (17848221360615290043ULL)));
                var_20 = ((/* implicit */int) min((((/* implicit */unsigned int) var_2)), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (2306665326U)))));
                var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3790786596U)) ? (((/* implicit */int) (unsigned short)62665)) : (((/* implicit */int) var_6))))) && (((/* implicit */_Bool) (((((~(((/* implicit */int) (unsigned short)56731)))) + (2147483647))) >> (((var_14) - (2551113685U))))))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */long long int) max((((/* implicit */int) var_11)), (1135372963)))) < (min((((/* implicit */long long int) var_7)), (var_12))))) ? (((((/* implicit */_Bool) ((var_15) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-99)))))) ? ((-2147483647 - 1)) : (((var_2) >> (((-1057653660) + (1057653679))))))) : (min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_0))))));
            }
        } 
    } 
}
