/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218527
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) max((((/* implicit */signed char) var_6)), (var_8))))) ? (((/* implicit */unsigned long long int) (+(9223372036854775807LL)))) : (((max((((/* implicit */unsigned long long int) (_Bool)1)), (var_4))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            arr_4 [i_0] [i_0] [i_0] = max((((/* implicit */unsigned long long int) (_Bool)1)), (3976683127184135924ULL));
            arr_5 [i_0] = max((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))), (((unsigned long long int) arr_0 [i_0] [i_0])))), (max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_3)) / (var_7)))), (((unsigned long long int) 3373102277U)))));
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_1] [i_0]))));
        }
        var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min(((((_Bool)1) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) ((arr_3 [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_2 [5ULL] [i_0])) : (((/* implicit */int) (signed char)-37))))))))));
        var_13 = ((/* implicit */unsigned int) min((var_13), (((unsigned int) ((((/* implicit */_Bool) (+(var_4)))) ? (min((((/* implicit */unsigned long long int) var_6)), (1677664355467379159ULL))) : (var_5))))));
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) arr_2 [(_Bool)1] [i_0]))));
    }
    var_15 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
    /* LoopSeq 2 */
    for (int i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        var_16 = ((/* implicit */long long int) (-(((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-111)) || (((/* implicit */_Bool) var_9)))) && (((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned int) arr_3 [i_2] [i_2] [i_2]))))))))));
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 149064659U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        arr_12 [i_3] [i_3] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_10 [i_3])))) ? (arr_11 [i_3]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-37)))))));
        arr_13 [i_3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_11 [i_3]) - (8984617802245963360ULL))) == (((unsigned long long int) var_4)))))) >= ((-((-(15933908928909037646ULL)))))));
    }
}
