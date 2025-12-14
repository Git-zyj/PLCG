/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191716
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
    var_10 &= (~((~(((/* implicit */int) ((_Bool) var_2))))));
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) >> (((((long long int) 9066776510989959497LL)) - (9066776510989959469LL)))))) ? (max((((var_4) ? (((/* implicit */int) (unsigned short)56116)) : (((/* implicit */int) var_7)))), (((/* implicit */int) var_4)))) : (max((((var_8) ? (var_2) : (((/* implicit */int) var_3)))), (max((1206901546), (2079785242)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(unsigned short)3])) ? (((/* implicit */long long int) 0)) : (-9223372036854775797LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_9))))) : (max((443755242237424524ULL), (((/* implicit */unsigned long long int) arr_7 [i_1])))))), (((/* implicit */unsigned long long int) arr_1 [i_2 + 1])))))));
                    var_13 ^= ((/* implicit */unsigned short) arr_4 [i_2 + 1]);
                    var_14 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_2), (((/* implicit */int) var_3))))) ? (max((arr_2 [6U]), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) var_0))))) ? (17171699972726613241ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_2 + 1] [2ULL])))));
                    arr_8 [i_0] [i_1] [(signed char)12] [(signed char)12] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_2 - 1]))))) ? (((/* implicit */int) max((arr_7 [(signed char)10]), (((/* implicit */unsigned short) arr_1 [i_0 - 2]))))) : (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) arr_7 [i_0 - 2])) : (arr_5 [i_2 + 1] [i_1] [i_0 + 2])))));
                }
            } 
        } 
    } 
}
