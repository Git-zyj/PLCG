/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242553
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
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = ((((unsigned long long int) min((5755189785772605609ULL), (arr_0 [i_0])))) << (((/* implicit */int) (!(((/* implicit */_Bool) 12691554287936946006ULL))))));
        var_13 = max((((var_10) << (((max((arr_0 [i_0]), (700661454991938311ULL))) - (16669165308985646416ULL))))), (max(((-(12691554287936946010ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 524287ULL))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 19; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 1) 
                        {
                            arr_13 [i_4] [i_2] [i_2] [i_4] = var_9;
                            var_14 = ((unsigned long long int) ((arr_10 [i_4] [i_4] [i_4 + 1] [i_4 + 1] [i_4]) / (((arr_8 [i_4] [i_0] [i_1] [i_0]) / (var_3)))));
                        }
                        arr_14 [i_0] [i_1] [i_0] [i_3] = ((((/* implicit */_Bool) (+(15ULL)))) ? (((((/* implicit */_Bool) arr_10 [i_1 - 1] [i_2 + 2] [i_3 - 1] [14ULL] [i_3 - 1])) ? (arr_12 [i_1 - 1] [i_2 + 3] [i_2 + 3] [12ULL]) : (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) >= (arr_10 [i_1 + 1] [i_2 + 1] [i_2 + 1] [i_2] [i_3]))))));
                        var_15 += 0ULL;
                        arr_15 [i_0] [i_0] [i_1] [i_2] [i_1] [i_0] = var_7;
                    }
                } 
            } 
        } 
    }
    var_16 ^= var_1;
    var_17 *= var_8;
    var_18 = min((((/* implicit */unsigned long long int) ((max((var_6), (12691554287936946007ULL))) > (max((var_9), (392556992292548988ULL)))))), (var_12));
    var_19 *= var_2;
}
