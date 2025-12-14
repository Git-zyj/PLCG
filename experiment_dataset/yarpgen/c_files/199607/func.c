/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199607
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
    var_16 -= ((/* implicit */signed char) max((((/* implicit */unsigned int) max((var_4), (((/* implicit */int) max((var_10), ((signed char)-113))))))), (((((/* implicit */unsigned int) (+(((/* implicit */int) var_15))))) * (var_13)))));
    var_17 = ((/* implicit */long long int) (signed char)-113);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) var_10);
        arr_3 [i_0] [(_Bool)1] = ((/* implicit */int) min((3962399175843110668LL), (((((/* implicit */_Bool) max((arr_1 [i_0]), (arr_1 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (-24425899443236137LL)))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) max(((+(arr_0 [i_0]))), (((((/* implicit */int) arr_1 [i_0])) * ((-(((/* implicit */int) (short)-20983))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (-(170080238))))));
            arr_7 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) min((((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)29432)), (-3403080744540127523LL)))) ? (((/* implicit */long long int) (-(187851895U)))) : ((-(3632121810642855186LL))))), (((/* implicit */long long int) (_Bool)1)))))));
            arr_10 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((24425899443236136LL), (-24425899443236137LL)))), (972883765486556430ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_1 [i_0])))) : ((-(arr_6 [i_0])))));
        }
    }
}
