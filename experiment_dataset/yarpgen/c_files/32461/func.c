/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32461
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
    var_15 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (var_7)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_16 = min((((/* implicit */long long int) ((3727565540U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)126)))))), ((((((-9223372036854775807LL - 1LL)) < (((/* implicit */long long int) -1160159442)))) ? (var_5) : (((/* implicit */long long int) 10U)))));
                                arr_13 [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2320912604U)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (var_5) : (((/* implicit */long long int) (~(((/* implicit */int) var_4)))))))) : ((~(min((((/* implicit */unsigned long long int) var_10)), (var_8)))))));
                                var_17 ^= ((/* implicit */long long int) ((((((/* implicit */int) var_4)) <= (((/* implicit */int) var_13)))) ? (((((/* implicit */_Bool) (+(var_7)))) ? (max((var_7), (var_2))) : (((/* implicit */int) ((((/* implicit */int) var_4)) != (var_2)))))) : (((((((/* implicit */long long int) ((/* implicit */int) var_6))) != (var_5))) ? (((/* implicit */int) (_Bool)0)) : (var_12)))));
                            }
                        } 
                    } 
                    arr_14 [i_2 - 1] [i_2] [i_2] [(_Bool)1] = ((/* implicit */signed char) var_3);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) var_0);
}
