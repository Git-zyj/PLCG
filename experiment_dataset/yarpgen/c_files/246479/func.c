/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246479
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
    var_16 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */long long int) var_5)) ^ (var_6)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (2767188734U))) : (2767188718U))) != (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((min((((/* implicit */unsigned int) (_Bool)0)), (3410363916U))) << (((/* implicit */int) ((arr_2 [i_1 - 1]) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1527778561U)) ? (((/* implicit */int) (unsigned short)5650)) : (((/* implicit */int) (unsigned short)5650)))))))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (signed char i_4 = 3; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_18 &= ((((/* implicit */_Bool) (+(1527778561U)))) ? (min((min((arr_6 [i_0]), (var_15))), (((/* implicit */long long int) ((1419583042U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */long long int) ((/* implicit */int) var_11))));
                                var_19 = ((/* implicit */signed char) arr_8 [i_0] [i_0] [i_2] [i_0]);
                                var_20 = min(((~(max((arr_4 [i_4] [i_1]), (var_10))))), (((((/* implicit */long long int) 3047833609U)) & (var_1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((-1) > (((/* implicit */int) (_Bool)1))));
    var_22 = ((/* implicit */unsigned int) ((short) 1527778554U));
}
