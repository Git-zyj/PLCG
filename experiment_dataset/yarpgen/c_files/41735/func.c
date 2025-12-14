/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41735
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) 6524149035931313704LL)) ? (((/* implicit */int) min((((signed char) 1238173049)), ((signed char)0)))) : (((/* implicit */int) (unsigned char)249))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_21 *= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6524149035931313704LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)106))) : (-100102506941063380LL)))), (((max((((/* implicit */unsigned long long int) (signed char)89)), (17493096678268270428ULL))) % (arr_4 [(unsigned char)2] [(unsigned char)2] [i_0])))));
                var_22 = ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) var_12)) : (var_13)))) ? (arr_4 [i_1] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-22)) != (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))))))));
                arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) -6617531603178493809LL)) ? (1980022436471607713LL) : (((/* implicit */long long int) 4194303))));
            }
        } 
    } 
}
