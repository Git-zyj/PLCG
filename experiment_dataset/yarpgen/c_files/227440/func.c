/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227440
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
    var_15 = ((/* implicit */unsigned long long int) ((min((3703761801U), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)24609)) + (((/* implicit */int) var_11))))))) << (((((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */unsigned int) ((var_1) ? (var_7) : (((/* implicit */int) var_10))))))) - (1912541233U)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 22; i_1 += 1) 
        {
            {
                arr_5 [(unsigned char)6] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 591205494U)), (4497342948680682155ULL)))) ? (((/* implicit */int) ((591205494U) == (((/* implicit */unsigned int) -916385520))))) : (((((/* implicit */int) var_2)) >> (((((/* implicit */int) var_0)) - (18370))))))) * (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)1))))) ? (((arr_4 [i_1]) - (((/* implicit */int) (unsigned char)153)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)1196))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */int) (unsigned short)26197)) : (((/* implicit */int) arr_2 [i_1]))))), (min((arr_0 [i_1]), (((/* implicit */unsigned long long int) (signed char)34))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) max((arr_0 [(unsigned char)21]), (((/* implicit */unsigned long long int) arr_2 [i_0]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64339))) & (2501458782U))) : (((1824874353U) >> (((/* implicit */int) var_5))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) (unsigned short)40931);
}
