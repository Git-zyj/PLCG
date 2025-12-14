/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35078
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
    var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))));
    var_19 = ((((((/* implicit */unsigned int) ((((/* implicit */int) var_16)) * (((/* implicit */int) var_13))))) != (max((var_14), (var_15))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_17));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)12960)) ? (((arr_11 [i_0] [i_1] [i_1] [2LL] [i_4]) * (0LL))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned long long int) 0LL)) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) 154648054808701874ULL)) ? (((/* implicit */unsigned long long int) 0LL)) : (10434145087577381517ULL)))))));
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) < (((/* implicit */int) var_6))));
                                var_22 = ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_1] [i_1] [i_0] = ((((/* implicit */unsigned long long int) -8314716512442843116LL)) < (max((((/* implicit */unsigned long long int) (_Bool)1)), (18292096018900849755ULL))));
                }
            } 
        } 
        var_23 = (!(((/* implicit */_Bool) ((0LL) * (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0])))))))));
        var_24 = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((long long int) var_10))) : (((var_2) - (var_17))))), (arr_8 [i_0] [i_0] [i_0] [6LL])));
        arr_14 [i_0] [i_0] = ((/* implicit */_Bool) var_12);
        arr_15 [i_0] [10ULL] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
    }
    var_25 = ((/* implicit */_Bool) (+(((/* implicit */int) ((var_1) != ((+(0LL))))))));
}
