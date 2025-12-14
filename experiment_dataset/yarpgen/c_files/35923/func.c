/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35923
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
    var_19 = ((/* implicit */signed char) 0ULL);
    var_20 = ((/* implicit */short) min((max((max((((/* implicit */long long int) -821890328)), (-7455406844695044411LL))), (((/* implicit */long long int) ((((/* implicit */long long int) 1930777479U)) < (3832067100731050434LL)))))), (max((795178744551285667LL), (((((/* implicit */_Bool) (signed char)110)) ? (((/* implicit */long long int) ((/* implicit */int) (short)13048))) : (var_12)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) var_7);
        arr_3 [(signed char)6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 + 1])) || (((/* implicit */_Bool) ((short) arr_1 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_11 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) (~(569668663U)));
                    arr_12 [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0] [i_0 - 1])) ? (((/* implicit */int) ((unsigned char) arr_9 [i_0] [i_1] [i_2]))) : (((/* implicit */int) arr_4 [i_0 + 2]))));
                    arr_13 [i_0] [i_0] [11ULL] [i_2] = ((/* implicit */unsigned char) ((arr_8 [13U]) * (arr_1 [i_1] [i_2])));
                }
            } 
        } 
        arr_14 [i_0 + 2] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 2717565876U))));
    }
}
