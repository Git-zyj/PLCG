/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235725
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (arr_7 [i_0] [i_0] [i_1] [i_0]))) << (((var_6) - (1151680504081451559LL))))), ((~((~(arr_3 [i_0] [i_1] [i_2])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_21 += ((/* implicit */signed char) ((((((/* implicit */_Bool) 612713208)) ? (min((((/* implicit */unsigned long long int) var_17)), (arr_7 [i_4] [i_2] [i_4] [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_18) >= (((/* implicit */unsigned long long int) var_6)))))))) | (((((/* implicit */unsigned long long int) min((var_17), (((/* implicit */long long int) 0))))) - (max((15805422105781333744ULL), (arr_5 [i_0] [i_0])))))));
                                var_22 &= ((/* implicit */int) var_18);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) - (var_0))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_5)) : (var_18)))))) ? (((((/* implicit */_Bool) ((unsigned long long int) var_17))) ? (((((/* implicit */_Bool) var_17)) ? (var_0) : (((/* implicit */unsigned long long int) -3558463175940138371LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((0) != (((/* implicit */int) var_4)))))))) : (((((/* implicit */_Bool) (~(var_6)))) ? (((((/* implicit */_Bool) var_4)) ? (var_14) : (var_11))) : (((/* implicit */unsigned long long int) ((0) | (((/* implicit */int) (short)10488)))))))));
}
