/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24191
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
    var_12 = var_4;
    var_13 = var_11;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned long long int) min((var_14), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2047ULL)) ? (18446744073709551615ULL) : (18013062180506659579ULL)))) ? (7052918169282076094ULL) : (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (arr_3 [i_3] [i_1]) : (var_3)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_0) : (var_10)))) ? (max((arr_6 [i_0] [i_0] [i_2]), (var_6))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (15092279861551936559ULL) : (arr_6 [i_0] [i_1] [i_0]))))) : (min((((((/* implicit */_Bool) 11156139262439760138ULL)) ? (18013062180506659563ULL) : (8746205981483210203ULL))), (arr_9 [i_3] [i_3 + 1] [i_3] [i_3] [i_3] [i_3 - 2])))))));
                            arr_11 [i_0] [i_3] |= ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((((/* implicit */_Bool) 7290604811269791472ULL)) ? (arr_2 [i_3]) : (18446744073709551596ULL))) : (min((arr_2 [i_3]), (var_6))))) : (((279223176896970752ULL) << (((min((6007502855180290648ULL), (433681893202892032ULL))) - (433681893202892002ULL))))));
                            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1 + 2] [i_1] [i_1] [i_1])))))))));
                            arr_12 [i_0] [i_2] [i_2] [i_3] [i_2] [i_0] = 11156139262439760122ULL;
                        }
                    } 
                } 
                var_16 = (~(18013062180506659579ULL));
            }
        } 
    } 
}
