/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244705
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_19 -= (+(((((((/* implicit */int) arr_1 [i_0] [i_0])) + (((/* implicit */int) arr_1 [i_0] [i_0])))) + (4161536))));
        var_20 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) -262144)) : (4294967295U)))) <= (((((/* implicit */long long int) 262150)) ^ (-2604912172703623236LL)))))));
        arr_2 [i_0] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) -5082851696638001561LL)) ? (((/* implicit */unsigned int) -79266731)) : (4294967295U)));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? ((-(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    /* LoopNest 3 */
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        for (int i_2 = 1; i_2 < 23; i_2 += 3) 
        {
            for (unsigned int i_3 = 2; i_3 < 24; i_3 += 2) 
            {
                {
                    var_21 = ((/* implicit */long long int) min((var_21), (arr_11 [i_1])));
                    var_22 = ((/* implicit */long long int) min((var_22), (((arr_10 [i_3] [i_3 - 1]) / ((((_Bool)1) ? (((/* implicit */long long int) max((arr_4 [i_1] [i_2 + 2]), (((/* implicit */unsigned int) var_15))))) : (min((arr_11 [i_1]), (((/* implicit */long long int) 4294967295U))))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_8)))) ? ((-(-262163))) : (((/* implicit */int) ((3492938332U) < (((/* implicit */unsigned int) ((/* implicit */int) var_18))))))))) ? (var_11) : (min((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) | (((/* implicit */int) (_Bool)1))))), (var_14))))))));
}
