/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201979
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0 + 3]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0 + 1]))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 2]))) | (102490520954984927LL)))));
        arr_4 [i_0] [i_0] = max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (9007199254478848LL) : (-8814332272574247054LL)))) / (max((arr_2 [9]), (((/* implicit */unsigned long long int) -102490520954984953LL)))))), (((/* implicit */unsigned long long int) (+(4163556363U)))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 8; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) ((-102490520954984927LL) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) (signed char)(-127 - 1)))))))));
        arr_8 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 - 1])) ? (((/* implicit */int) (unsigned short)35191)) : (((/* implicit */int) (signed char)108)))))));
    }
    var_18 = ((/* implicit */int) ((min((((/* implicit */long long int) ((int) (unsigned short)65517))), (((((/* implicit */long long int) ((/* implicit */int) var_9))) & (var_1))))) | (((/* implicit */long long int) ((/* implicit */int) ((signed char) -102490520954984928LL))))));
    var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(1612480703880522311ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */int) arr_10 [(signed char)4])) != (((/* implicit */int) var_2))))))) : (-102490520954984927LL)));
                arr_13 [i_2] [i_3] [(signed char)15] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)215)) + (((((/* implicit */_Bool) min((-102490520954984939LL), (((/* implicit */long long int) var_3))))) ? (((/* implicit */int) max((var_6), (((/* implicit */unsigned short) arr_10 [i_2]))))) : (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
}
