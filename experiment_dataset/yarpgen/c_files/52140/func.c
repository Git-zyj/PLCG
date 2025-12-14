/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52140
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
    var_10 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) /* same iter space */
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (2172108941U) : (arr_10 [i_2] [i_2] [i_2 + 1])));
                        var_11 = ((/* implicit */unsigned long long int) var_2);
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) /* same iter space */
                    {
                        arr_14 [3U] [i_2] [3U] [i_2] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((_Bool) 34359738367ULL))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (var_1)))));
                        var_12 = ((unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (3015781759U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4080)))))), (arr_7 [i_0])));
                        var_13 = ((((((((/* implicit */_Bool) 2526996931U)) || (var_7))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(unsigned short)7] [i_2 + 3]))) : ((-(828257655U))))) >> ((+(((/* implicit */int) arr_12 [i_2 + 3] [i_2 - 1] [i_2 + 2] [i_2 + 3] [i_4] [(unsigned short)3])))));
                        var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) /* same iter space */
                    {
                        arr_19 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) -5716384497603101641LL)) ? (6168367555520785509ULL) : (18446744073709551615ULL))));
                        var_15 = (+((+(arr_6 [i_2 + 2] [i_2]))));
                    }
                    arr_20 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) (+(33776997205278720LL)));
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_2))));
                }
            } 
        } 
    } 
}
